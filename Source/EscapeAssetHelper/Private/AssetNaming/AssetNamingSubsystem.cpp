#include "AssetNaming/AssetNamingSubsystem.h"
#include "EscapeAssetHelper.h"
#include "AssetHandling/AssetHandlingSettings.h"
#include "AssetNaming/AssetNamingParser.h"
#include "AssetNaming/SAssetNamingDialog.h"
#include "AssetHandling/AssetHandlingSubsystem.h"

#include "Engine/Blueprint.h"
#include "Editor.h"
#include "Misc/App.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"
#include "EditorAssetLibrary.h"
#include "Logging/MessageLog.h"
#include "Misc/UObjectToken.h"
#include "Misc/MessageDialog.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "UObject/SavePackage.h"
#include "UObject/ObjectSaveContext.h"
#include "ISourceControlModule.h"
#include "ISourceControlProvider.h"
#include "SourceControlOperations.h"
#include "UObject/ObjectRedirector.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "HAL/FileManager.h"
#include "Misc/ScopedSlowTask.h"
#include "ScopedTransaction.h"

bool UAssetNamingSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	return GIsEditor && !IsRunningCommandlet();
}

void UAssetNamingSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Hook into import
	if (UImportSubsystem* ImportSubsystem = GEditor->GetEditorSubsystem<UImportSubsystem>())
	{
		PostImportDelegateHandle = ImportSubsystem->OnAssetPostImport.AddUObject(
			this, &UAssetNamingSubsystem::OnAssetPostImport);
	}

	// Hook into rename
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	AssetRenamedDelegateHandle = AssetRegistryModule.Get().OnAssetRenamed().AddUObject(
		this, &UAssetNamingSubsystem::OnAssetRenamed);

	// Hook into save
	PreSaveDelegateHandle = UPackage::PreSavePackageWithContextEvent.AddUObject(
		this, &UAssetNamingSubsystem::OnPackagePreSave);

	// Source control hooks
	RegisterSourceControlHooks();

	if (const UAssetHandlingSettings* Settings = GetSettings())
	{
		if (Settings->bVerboseLogging)
		{
			UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Naming] Subsystem initialized"));
		}
	}
}

void UAssetNamingSubsystem::Deinitialize()
{
	// Unhook import
	if (UImportSubsystem* ImportSubsystem = GEditor->GetEditorSubsystem<UImportSubsystem>())
	{
		ImportSubsystem->OnAssetPostImport.Remove(PostImportDelegateHandle);
	}

	// Unhook rename
	if (FAssetRegistryModule* AssetRegistryModule = FModuleManager::GetModulePtr<FAssetRegistryModule>("AssetRegistry"))
	{
		AssetRegistryModule->Get().OnAssetRenamed().Remove(AssetRenamedDelegateHandle);
	}

	// Unhook save
	UPackage::PreSavePackageWithContextEvent.Remove(PreSaveDelegateHandle);

	// Unhook source control
	UnregisterSourceControlHooks();

	Super::Deinitialize();
}

FAssetValidationResult UAssetNamingSubsystem::ValidateAsset(UObject* Asset) const
{
	FAssetValidationResult Result;

	if (!Asset)
	{
		Result.bIsValid = false;
		Result.ValidationErrors.Add(TEXT("Asset is null"));
		Result.Severity = EAssetValidationSeverity::Error;
		return Result;
	}

	Result.CurrentName = Asset->GetName();
	Result.AssetClass = Asset->GetClass();

	// Skip ignored
	if (UAssetHandlingSubsystem* HandlingSubsystem = GEditor->GetEditorSubsystem<UAssetHandlingSubsystem>())
	{
		if (HandlingSubsystem->IsAssetIgnored(Asset))
		{
			Result.bIsValid = true;
			Result.SuggestedName = Result.CurrentName;
			return Result;
		}
	}

	// Get convention
	const UAssetHandlingSettings* Settings = GetSettings();
	const FAssetNamingConvention* Convention = Settings->GetConventionForAsset(Asset);

	if (!Convention)
	{
		// No convention, consider valid
		Result.bIsValid = true;
		Result.SuggestedName = Result.CurrentName;
		return Result;
	}

	// Parse name
	FParsedAssetName Parsed = UAssetNamingParser::ParseAssetNameWithConvention(Result.CurrentName, *Convention);

	// Check prefix
	FString ExpectedPrefix = Convention->GetPrefixWithoutUnderscore();
	if (!ExpectedPrefix.IsEmpty())
	{
		if (Parsed.Prefix.IsEmpty())
		{
			Result.bIsValid = false;
			Result.ValidationErrors.Add(FString::Printf(TEXT("Missing prefix. Expected '%s_'"), *ExpectedPrefix));
		}
		else if (!Parsed.Prefix.Equals(ExpectedPrefix, ESearchCase::IgnoreCase))
		{
			Result.bIsValid = false;
			Result.ValidationErrors.Add(FString::Printf(TEXT("Incorrect prefix '%s_'. Expected '%s_'"), *Parsed.Prefix, *ExpectedPrefix));
		}
	}

	// Check casing
	if (Settings->bRequirePascalCase && !Parsed.BaseAssetName.IsEmpty())
	{
		bool bPassesCasing = UAssetNamingParser::IsPascalCase(Parsed.BaseAssetName);

		// Extended base names allow underscores if each segment is PascalCase
		if (!bPassesCasing && Settings->bAllowExtendedBaseName)
		{
			bPassesCasing = UAssetNamingParser::IsExtendedPascalCase(Parsed.BaseAssetName);
		}

		if (!bPassesCasing)
		{
			Result.bIsValid = false;
			FString Corrected = UAssetNamingParser::ToPascalCase(Parsed.BaseAssetName);
			Result.ValidationErrors.Add(FString::Printf(TEXT("Base name should be PascalCase. Suggestion: '%s'"), *Corrected));
		}
	}

	// Check for numbers
	if (!Parsed.BaseAssetName.IsEmpty() && UAssetNamingParser::ContainsNumbers(Parsed.BaseAssetName))
	{
		Result.bIsValid = false;
		FString Corrected = UAssetNamingParser::ConvertNumbersToWords(Parsed.BaseAssetName);
		Result.ValidationErrors.Add(FString::Printf(TEXT("Base name should not contain numbers. Use words instead (e.g., '%s')"), *Corrected));
	}

	// Check variant
	if (Settings->bRequirePascalCase && !Parsed.Variant.IsEmpty())
	{
		if (!UAssetNamingParser::IsValidVariant(Parsed.Variant))
		{
			Result.bIsValid = false;
			Result.ValidationErrors.Add(FString::Printf(TEXT("Variant '%s' should be PascalCase, numeric, or a single letter"), *Parsed.Variant));
		}
	}

	// Check suffix
	if (Convention->bSuffixRequired && Convention->ValidSuffixes.Num() > 0)
	{
		if (Parsed.Suffix.IsEmpty())
		{
			Result.bIsValid = false;
			Result.ValidationErrors.Add(FString::Printf(TEXT("Missing required suffix. Valid suffixes: %s"),
				*FString::Join(Convention->ValidSuffixes, TEXT(", "))));
		}
		else if (!Convention->IsSuffixValid(Parsed.Suffix))
		{
			Result.bIsValid = false;
			Result.ValidationErrors.Add(FString::Printf(TEXT("Invalid suffix '_%s'. Valid suffixes: %s"),
				*Parsed.Suffix, *FString::Join(Convention->ValidSuffixes, TEXT(", "))));
		}
	}

	// Build suggestion
	Result.SuggestedName = UAssetNamingParser::GenerateSuggestedName(Result.CurrentName, *Convention);
	Result.Severity = Result.bIsValid ? EAssetValidationSeverity::None : EAssetValidationSeverity::Warning;

	return Result;
}

FBatchValidationResult UAssetNamingSubsystem::ValidateAssets(const TArray<FAssetData>& Assets)
{
	FBatchValidationResult BatchResult;
	BatchResult.TotalAssets = Assets.Num();

	FMessageLog MessageLog("AssetNaming");
	MessageLog.NewPage(FText::FromString(TEXT("Naming Validation Results")));

	for (const FAssetData& AssetData : Assets)
	{
		if (UObject* Asset = AssetData.GetAsset())
		{
			FAssetValidationResult Result = ValidateAsset(Asset);
			BatchResult.Results.Add(Result);

			if (Result.bIsValid)
			{
				BatchResult.ValidAssets++;
			}
			else
			{
				BatchResult.InvalidAssets++;
				LogValidationWarning(Result, Asset);
			}
		}
	}

	FText SummaryText = FText::Format(
		FText::FromString(TEXT("Validated {0} assets: {1} valid, {2} invalid")),
		FText::AsNumber(BatchResult.TotalAssets),
		FText::AsNumber(BatchResult.ValidAssets),
		FText::AsNumber(BatchResult.InvalidAssets)
	);

	if (BatchResult.InvalidAssets > 0)
	{
		TSharedRef<FTokenizedMessage> SummaryMessage = FTokenizedMessage::Create(EMessageSeverity::Info);
		SummaryMessage->AddToken(FTextToken::Create(FText::Format(
			FText::FromString(TEXT("Found {0} asset(s) with naming issues.")),
			FText::AsNumber(BatchResult.InvalidAssets)
		)));

		// Gather invalid paths
		TArray<FSoftObjectPath> InvalidAssetPaths;
		for (const FAssetValidationResult& Result : BatchResult.Results)
		{
			if (!Result.bIsValid && !Result.CurrentName.IsEmpty())
			{
				for (const FAssetData& AssetData : Assets)
				{
					if (AssetData.AssetName.ToString() == Result.CurrentName)
					{
						InvalidAssetPaths.Add(AssetData.GetSoftObjectPath());
						break;
					}
				}
			}
		}

		TWeakObjectPtr<UAssetNamingSubsystem> WeakThis = this;
		SummaryMessage->AddToken(FActionToken::Create(
			FText::FromString(TEXT(" [Auto-Fix All]")),
			FText::FromString(TEXT("Rename all invalid assets to follow naming conventions")),
			FOnActionTokenExecuted::CreateLambda([WeakThis, InvalidAssetPaths]()
			{
				if (UAssetNamingSubsystem* Subsystem = WeakThis.Get())
				{
					FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
					IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

					TArray<FAssetData> AssetsToFix;
					for (const FSoftObjectPath& Path : InvalidAssetPaths)
					{
						FAssetData AssetData = AssetRegistry.GetAssetByObjectPath(Path);
						if (AssetData.IsValid())
						{
							AssetsToFix.Add(AssetData);
						}
					}

					if (AssetsToFix.Num() > 0)
					{
						Subsystem->AutoFixAssets(AssetsToFix);
					}
				}
			})
		));

		MessageLog.AddMessage(SummaryMessage);

		FNotificationInfo Info(SummaryText);
		Info.ExpireDuration = 5.0f;
		Info.Hyperlink = FSimpleDelegate::CreateLambda([]()
		{
			FMessageLog("AssetNaming").Open();
		});
		Info.HyperlinkText = FText::FromString(TEXT("View Details"));
		FSlateNotificationManager::Get().AddNotification(Info);

		MessageLog.Open();
	}
	else
	{
		FNotificationInfo Info(SummaryText);
		Info.ExpireDuration = 3.0f;
		FSlateNotificationManager::Get().AddNotification(Info);
	}

	return BatchResult;
}

void UAssetNamingSubsystem::ValidateAssetsAsync(const TArray<FAssetData>& Assets, FOnAsyncValidationComplete OnComplete)
{
	// Sync with progress bar for now, async API for later - JM
	FBatchValidationResult BatchResult;
	BatchResult.TotalAssets = Assets.Num();

	if (BatchResult.TotalAssets == 0)
	{
		if (OnComplete.IsBound())
		{
			OnComplete.Execute(BatchResult);
		}
		return;
	}

	FMessageLog MessageLog("AssetNaming");
	MessageLog.NewPage(FText::FromString(TEXT("Naming Validation Results")));

	FScopedSlowTask SlowTask(static_cast<float>(BatchResult.TotalAssets), FText::FromString(TEXT("Validating asset names...")));
	SlowTask.MakeDialog(true);

	for (int32 i = 0; i < Assets.Num(); ++i)
	{
		if (SlowTask.ShouldCancel())
		{
			break;
		}

		const FAssetData& AssetData = Assets[i];
		SlowTask.EnterProgressFrame(1.0f, FText::Format(
			FText::FromString(TEXT("Validating: {0}")),
			FText::FromName(AssetData.AssetName)
		));

		if (UObject* Asset = AssetData.GetAsset())
		{
			FAssetValidationResult Result = ValidateAsset(Asset);
			BatchResult.Results.Add(Result);

			if (Result.bIsValid)
			{
				BatchResult.ValidAssets++;
			}
			else
			{
				BatchResult.InvalidAssets++;
				LogValidationWarning(Result, Asset);
			}
		}
	}

	FText SummaryText = FText::Format(
		FText::FromString(TEXT("Validated {0} assets: {1} valid, {2} invalid")),
		FText::AsNumber(BatchResult.TotalAssets),
		FText::AsNumber(BatchResult.ValidAssets),
		FText::AsNumber(BatchResult.InvalidAssets)
	);

	if (BatchResult.InvalidAssets > 0)
	{
		FNotificationInfo Info(SummaryText);
		Info.ExpireDuration = 5.0f;
		Info.Hyperlink = FSimpleDelegate::CreateLambda([]()
		{
			FMessageLog("AssetNaming").Open();
		});
		Info.HyperlinkText = FText::FromString(TEXT("View Details"));
		FSlateNotificationManager::Get().AddNotification(Info);

		MessageLog.Open();
	}
	else
	{
		FNotificationInfo Info(SummaryText);
		Info.ExpireDuration = 3.0f;
		FSlateNotificationManager::Get().AddNotification(Info);
	}

	if (OnComplete.IsBound())
	{
		OnComplete.Execute(BatchResult);
	}
}

bool UAssetNamingSubsystem::AutoFixAssetName(UObject* Asset)
{
	if (!Asset)
	{
		return false;
	}

	FAssetValidationResult Result = ValidateAsset(Asset);

	if (Result.bIsValid)
	{
		return true; // Already good
	}

	// Check suffix requirement
	const UAssetHandlingSettings* Settings = GetSettings();
	const FAssetNamingConvention* Convention = Settings->GetConventionForClass(Asset->GetClass());

	if (Convention && Convention->bSuffixRequired && Convention->ValidSuffixes.Num() > 0)
	{
		FParsedAssetName Parsed = UAssetNamingParser::ParseAssetNameWithConvention(Asset->GetName(), *Convention);

		// Missing or bad suffix
		if (Parsed.Suffix.IsEmpty() || !Convention->IsSuffixValid(Parsed.Suffix))
		{
			if (Settings->bShowImportDialog)
			{
				ShowNamingDialogForAsset(Asset, [](FString) {});
				return true; // Dialog handles it
			}
		}
	}

	if (Result.SuggestedName.IsEmpty() || Result.SuggestedName == Result.CurrentName)
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Naming] Cannot auto-fix asset '%s': no valid suggestion"), *Result.CurrentName);
		return false;
	}

	// Check for collision
	FString PackagePath = FPackageName::GetLongPackagePath(Asset->GetOutermost()->GetName());
	if (!CheckNameCollisionAndWarn(PackagePath, Result.SuggestedName, Result.CurrentName))
	{
		if (Settings && Settings->bVerboseLogging)
		{
			UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Naming] Auto-fix cancelled for '%s': user declined due to name collision"), *Result.CurrentName);
		}
		return false;
	}

	// Check path length
	if (!CheckPathLengthAndWarn(PackagePath, Result.SuggestedName))
	{
		return false;
	}

	// Warn if case-only rename with source control active
	if (Result.CurrentName.Equals(Result.SuggestedName, ESearchCase::IgnoreCase) &&
		Result.CurrentName != Result.SuggestedName)
	{
		ISourceControlModule& SCModule = ISourceControlModule::Get();
		if (SCModule.IsEnabled() && SCModule.GetProvider().IsAvailable())
		{
			FNotificationInfo Info(FText::Format(
				FText::FromString(TEXT("Warning: '{0}' rename is case-only. Some version control systems may not handle this correctly.")),
				FText::FromString(Result.CurrentName)));
			Info.ExpireDuration = 6.0f;
			Info.bUseThrobber = false;
			FSlateNotificationManager::Get().AddNotification(Info);

			UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Naming] Case-only rename '%s' -> '%s' with source control active"),
				*Result.CurrentName, *Result.SuggestedName);
		}
	}

	return RenameAsset(Asset, Result.SuggestedName);
}

int32 UAssetNamingSubsystem::AutoFixAssets(const TArray<FAssetData>& Assets)
{
	int32 FixedCount = 0;
	const int32 TotalAssets = Assets.Num();

	if (TotalAssets == 0)
	{
		return 0;
	}

	FScopedTransaction Transaction(FText::FromString(TEXT("Auto-fix Asset Names")));

	TGuardValue<bool> ValidationGuard(bValidationEnabled, false);

	FScopedSlowTask SlowTask(static_cast<float>(TotalAssets), FText::FromString(TEXT("Auto-fixing asset names...")));
	SlowTask.MakeDialog(true);

	for (int32 i = 0; i < TotalAssets; ++i)
	{
		if (SlowTask.ShouldCancel())
		{
			break;
		}

		const FAssetData& AssetData = Assets[i];
		SlowTask.EnterProgressFrame(1.0f, FText::Format(
			FText::FromString(TEXT("Processing: {0}")),
			FText::FromName(AssetData.AssetName)
		));

		if (UObject* Asset = AssetData.GetAsset())
		{
			if (AutoFixAssetName(Asset))
			{
				FixedCount++;
			}
		}
	}

	if (FixedCount > 0)
	{
		FNotificationInfo Info(FText::Format(
			FText::FromString(TEXT("Auto-fixed {0} asset names")),
			FText::AsNumber(FixedCount)
		));
		Info.ExpireDuration = 3.0f;
		FSlateNotificationManager::Get().AddNotification(Info);
	}

	return FixedCount;
}

void UAssetNamingSubsystem::ShowNamingDialogForAsset(UObject* Asset, TFunction<void(FString)> OnComplete)
{
	if (!Asset)
	{
		if (OnComplete)
		{
			OnComplete(FString());
		}
		return;
	}

	const UAssetHandlingSettings* Settings = GetSettings();
	const FAssetNamingConvention* Convention = Settings->GetConventionForClass(Asset->GetClass());

	TSharedRef<SWindow> Window = SNew(SWindow)
		.Title(FText::FromString(TEXT("Name Your Asset")))
		.SizingRule(ESizingRule::Autosized)
		.SupportsMaximize(false)
		.SupportsMinimize(false)
		.IsTopmostWindow(true);

	TSharedRef<SAssetNamingDialog> Dialog = SNew(SAssetNamingDialog)
		.Asset(Asset)
		.Convention(Convention)
		.OnConfirm_Lambda([this, Asset, Window, OnComplete](const FString& NewName)
		{
			if (NewName != Asset->GetName())
			{
				// Check collision
				FString PackagePath = FPackageName::GetLongPackagePath(Asset->GetOutermost()->GetName());
				if (!CheckNameCollisionAndWarn(PackagePath, NewName, FString()))
				{
					return; // Let them pick another
				}

				// Check path length
				if (!CheckPathLengthAndWarn(PackagePath, NewName))
				{
					return; // Too long
				}

				Window->RequestDestroyWindow();

				// Skip validation during rename
				TGuardValue<bool> ValidationGuard(bValidationEnabled, false);
				RenameAsset(Asset, NewName);
			}
			else
			{
				Window->RequestDestroyWindow();
			}

			if (OnComplete)
			{
				OnComplete(NewName);
			}
		})
		.OnCancel_Lambda([Asset, Window, OnComplete]()
		{
			Window->RequestDestroyWindow();
			UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Naming] User cancelled naming dialog for asset '%s'"), *Asset->GetName());

			if (OnComplete)
			{
				OnComplete(Asset->GetName());
			}
		});

	Window->SetContent(Dialog);

	GEditor->EditorAddModalWindow(Window);
}

void UAssetNamingSubsystem::OnAssetPostImport(UFactory* Factory, UObject* CreatedObject)
{
	if (!bValidationEnabled || !CreatedObject)
	{
		return;
	}

	if (!ShouldValidateAsset(CreatedObject))
	{
		return;
	}

	const UAssetHandlingSettings* Settings = GetSettings();

	// Check convention exists
	const FAssetNamingConvention* Convention = Settings->GetConventionForClass(CreatedObject->GetClass());
	if (!Convention)
	{
		return;
	}

	FAssetValidationResult Result = ValidateAsset(CreatedObject);

	if (!Result.bIsValid)
	{
		if (Settings->bShowImportDialog)
		{
			ShowNamingDialogForAsset(CreatedObject, [](FString) {});
		}
		else if (Settings->bAutoFixOnImport)
		{
			AutoFixAssetName(CreatedObject);
		}
		else
		{
			LogValidationWarning(Result, CreatedObject);
		}
	}
}

void UAssetNamingSubsystem::OnAssetRenamed(const FAssetData& AssetData, const FString& OldObjectPath)
{
	if (!bValidationEnabled)
	{
		return;
	}

	const UAssetHandlingSettings* Settings = GetSettings();
	if (!Settings->bValidateOnRename)
	{
		return;
	}

	// Skip if already processing
	if (AssetsBeingProcessed.Contains(AssetData.PackageName))
	{
		return;
	}

	UObject* Asset = AssetData.GetAsset();
	if (!Asset || !ShouldValidateAsset(Asset))
	{
		return;
	}

	FAssetValidationResult Result = ValidateAsset(Asset);

	if (!Result.bIsValid)
	{
		if (Settings->bAutoFixNamingWithoutPrompt)
		{
			AutoFixAssetName(Asset);
		}
		else
		{
			LogValidationWarning(Result, Asset);
		}
	}
}

void UAssetNamingSubsystem::OnPackagePreSave(UPackage* Package, FObjectPreSaveContext Context)
{
	if (!bValidationEnabled || !Package)
	{
		return;
	}

	const UAssetHandlingSettings* Settings = GetSettings();
	if (!Settings->bValidateOnSave)
	{
		return;
	}

	// Find main asset
	UObject* Asset = nullptr;
	ForEachObjectWithPackage(Package, [&Asset](UObject* Object)
	{
		if (Object->IsAsset() && !Object->IsA<UPackage>())
		{
			Asset = Object;
			return false; // Found it
		}
		return true;
	});

	if (!Asset || !ShouldValidateAsset(Asset))
	{
		return;
	}

	FAssetValidationResult Result = ValidateAsset(Asset);

	if (!Result.bIsValid)
	{
		// Cant rename during save, just warn - JM
		LogValidationWarning(Result, Asset);
	}
}

void UAssetNamingSubsystem::LogValidationWarning(const FAssetValidationResult& Result, UObject* Asset)
{
	FMessageLog MessageLog("AssetNaming");

	TSharedRef<FTokenizedMessage> Message = FTokenizedMessage::Create(EMessageSeverity::Warning);

	Message->AddToken(FTextToken::Create(FText::Format(
		FText::FromString(TEXT("Asset '{0}' does not follow naming convention.")),
		FText::FromString(Result.CurrentName)
	)));

	for (const FString& Error : Result.ValidationErrors)
	{
		Message->AddToken(FTextToken::Create(FText::FromString(TEXT(" ") + Error)));
	}

	if (!Result.SuggestedName.IsEmpty() && Result.SuggestedName != Result.CurrentName)
	{
		Message->AddToken(FTextToken::Create(FText::Format(
			FText::FromString(TEXT(" Suggested: '{0}'")),
			FText::FromString(Result.SuggestedName)
		)));
	}

	if (Asset && !Result.SuggestedName.IsEmpty())
	{
		TWeakObjectPtr<UObject> WeakAsset = Asset;
		Message->AddToken(FActionToken::Create(
			FText::FromString(TEXT(" [Auto-Fix]")),
			FText::FromString(TEXT("Rename asset to follow naming convention")),
			FOnActionTokenExecuted::CreateLambda([this, WeakAsset]()
			{
				if (UObject* StrongAsset = WeakAsset.Get())
				{
					AutoFixAssetName(StrongAsset);
				}
			})
		));
	}

	if (Asset)
	{
		Message->AddToken(FActionToken::Create(
			FText::FromString(TEXT(" [Style Guide]")),
			FText::FromString(TEXT("Open the style guide")),
			FOnActionTokenExecuted::CreateLambda([]()
			{
				if (GEditor)
				{
					if (UAssetHandlingSubsystem* HandlingSubsystem = GEditor->GetEditorSubsystem<UAssetHandlingSubsystem>())
					{
						HandlingSubsystem->OpenStyleGuide();
					}
				}
			})
		));
	}

	if (Asset)
	{
		Message->AddToken(FUObjectToken::Create(Asset));
	}

	MessageLog.AddMessage(Message);
}

void UAssetNamingSubsystem::LogValidationError(const FAssetValidationResult& Result, UObject* Asset)
{
	FMessageLog MessageLog("AssetNaming");

	TSharedRef<FTokenizedMessage> Message = FTokenizedMessage::Create(EMessageSeverity::Error);

	Message->AddToken(FTextToken::Create(FText::Format(
		FText::FromString(TEXT("Asset '{0}' has naming errors: {1}")),
		FText::FromString(Result.CurrentName),
		FText::FromString(FString::Join(Result.ValidationErrors, TEXT(", ")))
	)));

	if (Asset)
	{
		Message->AddToken(FUObjectToken::Create(Asset));
	}

	MessageLog.AddMessage(Message);
}

const UAssetHandlingSettings* UAssetNamingSubsystem::GetSettings() const
{
	return UAssetHandlingSettings::Get();
}

bool UAssetNamingSubsystem::RenameAsset(UObject* Asset, const FString& NewName)
{
	if (!Asset || NewName.IsEmpty())
	{
		return false;
	}

	// Cache settings for this function - JM
	const UAssetHandlingSettings* Settings = GetSettings();
	const bool bVerbose = Settings && Settings->bVerboseLogging;

	FString CurrentName = Asset->GetName();
	if (CurrentName == NewName)
	{
		return true; // Already correct
	}

	// Get old paths
	FString OldPackagePath = Asset->GetOutermost()->GetName();
	FString OldPackageFilePath = FPackageName::LongPackageNameToFilename(OldPackagePath, FPackageName::GetAssetPackageExtension());

	// Check source control
	ISourceControlModule& SourceControlModule = ISourceControlModule::Get();
	ISourceControlProvider& SourceControlProvider = SourceControlModule.GetProvider();
	bool bSourceControlEnabled = SourceControlModule.IsEnabled() && SourceControlProvider.IsAvailable();

	// Track to avoid recursion
	FName PackageName = Asset->GetOutermost()->GetFName();
	AssetsBeingProcessed.Add(PackageName);

	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

	TArray<FAssetRenameData> RenameData;
	FAssetRenameData Data;
	Data.Asset = Asset;
	Data.NewPackagePath = FPackageName::GetLongPackagePath(OldPackagePath);
	Data.NewName = NewName;
	RenameData.Add(Data);

	bool bSuccess = AssetToolsModule.Get().RenameAssets(RenameData);

	AssetsBeingProcessed.Remove(PackageName);

	if (bSuccess)
	{
		if (bVerbose)
		{
			UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Naming] Renamed asset '%s' to '%s'"), *CurrentName, *NewName);
		}

		// Save to avoid ghost files
		UPackage* NewPackage = Asset->GetOutermost();
		FString NewPackagePath;
		if (NewPackage)
		{
			NewPackagePath = NewPackage->GetName();
			NewPackage->MarkPackageDirty();

			FString NewPackageFilePath = FPackageName::LongPackageNameToFilename(NewPackage->GetName(), FPackageName::GetAssetPackageExtension());
			FSavePackageArgs SaveArgs;
			SaveArgs.TopLevelFlags = RF_Standalone;
			SaveArgs.SaveFlags = SAVE_NoError;
			UPackage::SavePackage(NewPackage, Asset, *NewPackageFilePath, SaveArgs);
		}

		// Update source control
		if (bSourceControlEnabled)
		{
			// Delete old file
			if (IFileManager::Get().FileExists(*OldPackageFilePath))
			{
				TArray<FString> FilesToDelete;
				FilesToDelete.Add(OldPackageFilePath);
				SourceControlProvider.Execute(ISourceControlOperation::Create<FDelete>(), FilesToDelete);
				if (bVerbose)
				{
					UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Naming] Marked old file for delete in source control: %s"), *OldPackageFilePath);
				}
			}
			else
			{
				// Revert missing file
				TArray<FString> FilesToRevert;
				FilesToRevert.Add(OldPackageFilePath);
				SourceControlProvider.Execute(ISourceControlOperation::Create<FRevert>(), FilesToRevert);
				if (bVerbose)
				{
					UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Naming] Reverted non-existent file in source control: %s"), *OldPackageFilePath);
				}
			}

			// Add new file
			FString NewPackageFilePath = FPackageName::LongPackageNameToFilename(NewPackage->GetName(), FPackageName::GetAssetPackageExtension());
			if (IFileManager::Get().FileExists(*NewPackageFilePath))
			{
				TArray<FString> FilesToAdd;
				FilesToAdd.Add(NewPackageFilePath);
				SourceControlProvider.Execute(ISourceControlOperation::Create<FMarkForAdd>(), FilesToAdd);
				if (bVerbose)
				{
					UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Naming] Marked new file for add in source control: %s"), *NewPackageFilePath);
				}
			}
		}
		else
		{
			// Clean up redirectors without source control - JM
			FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
			IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

			if (IFileManager::Get().FileExists(*OldPackageFilePath))
			{
				FString OldAssetPath = OldPackagePath + TEXT(".") + CurrentName;
				FAssetData RedirectorData = AssetRegistry.GetAssetByObjectPath(FSoftObjectPath(OldAssetPath));
				if (RedirectorData.IsValid() && RedirectorData.IsRedirector())
				{
					UPackage* OldPackage = FindPackage(nullptr, *OldPackagePath);
					if (OldPackage)
					{
						ResetLoaders(OldPackage);
					}

					if (IFileManager::Get().Delete(*OldPackageFilePath, false, true, true))
					{
						if (bVerbose)
						{
							UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Naming] Deleted redirector file at old location: %s"), *OldPackageFilePath);
						}

						AssetRegistry.AssetDeleted(RedirectorData.GetAsset());
					}
					else
					{
						UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Naming] Failed to delete redirector file: %s"), *OldPackageFilePath);
					}
				}
			}
		}

		// Refresh content browser
		FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
		if (!NewPackagePath.IsEmpty())
		{
			TArray<FString> PathsToSync;
			PathsToSync.Add(FPackageName::GetLongPackagePath(NewPackagePath));
			ContentBrowserModule.Get().SyncBrowserToFolders(PathsToSync, true);
		}
	}
	else
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Naming] Failed to rename asset '%s' to '%s'"), *CurrentName, *NewName);
	}

	return bSuccess;
}

bool UAssetNamingSubsystem::ShouldValidateAsset(const UObject* Asset) const
{
	if (!Asset)
	{
		return false;
	}

	// Check ignored
	if (UAssetHandlingSubsystem* HandlingSubsystem = GEditor->GetEditorSubsystem<UAssetHandlingSubsystem>())
	{
		if (HandlingSubsystem->IsAssetIgnored(Asset))
		{
			return false;
		}
	}

	// Need a convention
	const UAssetHandlingSettings* Settings = GetSettings();
	const FAssetNamingConvention* Convention = Settings->GetConventionForClass(Asset->GetClass());

	return Convention != nullptr;
}

bool UAssetNamingSubsystem::CheckNameCollisionAndWarn(const FString& PackagePath, const FString& TargetName, const FString& CurrentName) const
{
	FString TargetObjectPath = PackagePath / TargetName + TEXT(".") + TargetName;

	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	FAssetData ExistingAsset = AssetRegistry.GetAssetByObjectPath(FSoftObjectPath(TargetObjectPath));
	if (!ExistingAsset.IsValid())
	{
		return true; // No collision
	}

	FText WarningMessage;
	if (CurrentName.IsEmpty())
	{
		WarningMessage = FText::Format(
			FText::FromString(TEXT("An asset named '{0}' already exists at:\n{1}\n\nRenaming to this name may cause conflicts.\n\nDo you want to proceed anyway?")),
			FText::FromString(TargetName),
			FText::FromString(PackagePath)
		);
	}
	else
	{
		WarningMessage = FText::Format(
			FText::FromString(TEXT("An asset named '{0}' already exists at:\n{1}\n\nRenaming '{2}' to this name may cause conflicts.\n\nDo you want to proceed anyway?")),
			FText::FromString(TargetName),
			FText::FromString(PackagePath),
			FText::FromString(CurrentName)
		);
	}

	EAppReturnType::Type Response = FMessageDialog::Open(
		EAppMsgType::YesNo,
		WarningMessage,
		FText::FromString(TEXT("Asset Name Collision"))
	);

	return Response == EAppReturnType::Yes;
}

bool UAssetNamingSubsystem::CheckPathLengthAndWarn(const FString& PackagePath, const FString& NewName) const
{
	// Windows limit
	constexpr int32 MaxPathLength = 260;

	FString FullPackagePath = PackagePath / NewName;
	FString FullFilePath = FPackageName::LongPackageNameToFilename(FullPackagePath, FPackageName::GetAssetPackageExtension());

	if (FullFilePath.Len() >= MaxPathLength)
	{
		FText WarningMessage = FText::Format(
			FText::FromString(TEXT("The resulting file path would be {0} characters long, which exceeds the Windows path limit of {1} characters.\n\nPath: {2}\n\nConsider using a shorter name or moving the asset to a shorter path.")),
			FText::AsNumber(FullFilePath.Len()),
			FText::AsNumber(MaxPathLength),
			FText::FromString(FullFilePath)
		);

		FMessageDialog::Open(
			EAppMsgType::Ok,
			WarningMessage,
			FText::FromString(TEXT("Path Too Long"))
		);

		return false;
	}

	return true;
}

void UAssetNamingSubsystem::RegisterSourceControlHooks()
{
	// Pre-submit validation
	ISourceControlModule& SourceControlModule = ISourceControlModule::Get();

	FSourceControlPreSubmitDataValidationDelegate ValidationDelegate;
	ValidationDelegate.BindUObject(this, &UAssetNamingSubsystem::OnPreSubmitDataValidation);
	SourceControlModule.RegisterPreSubmitDataValidation(ValidationDelegate);

	if (const UAssetHandlingSettings* Settings = GetSettings())
	{
		if (Settings->bVerboseLogging)
		{
			UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Naming] Source control pre-submit validation registered"));
		}
	}
}

void UAssetNamingSubsystem::UnregisterSourceControlHooks()
{
	if (FModuleManager::Get().IsModuleLoaded("SourceControl"))
	{
		ISourceControlModule::Get().UnregisterPreSubmitDataValidation();
		if (const UAssetHandlingSettings* Settings = GetSettings())
		{
			if (Settings->bVerboseLogging)
			{
				UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Naming] Source control pre-submit validation unregistered"));
			}
		}
	}
}

void UAssetNamingSubsystem::OnPreSubmitDataValidation(FSourceControlChangelistPtr Changelist, EDataValidationResult& OutResult, TArray<FText>& OutErrors, TArray<FText>& OutWarnings)
{
	// Early out if disabled
	const UAssetHandlingSettings* Settings = GetSettings();
	if (!Settings || Settings->SourceControlMode == ESourceControlValidationMode::Disabled)
	{
		OutResult = EDataValidationResult::Valid;
		return;
	}

	// Gather pending files
	TArray<FString> FilesToValidate;

	ISourceControlProvider& Provider = ISourceControlModule::Get().GetProvider();

	TArray<FSourceControlStateRef> FileStates = Provider.GetCachedStateByPredicate(
		[](const FSourceControlStateRef& State)
		{
			return State->IsCheckedOut() || State->IsAdded() || State->IsDeleted() || State->CanCheckIn();
		}
	);

	for (const FSourceControlStateRef& State : FileStates)
	{
		FilesToValidate.Add(State->GetFilename());
	}

	bool bAllValid = ValidateFilesForSourceControl(FilesToValidate, OutErrors, OutWarnings);

	if (!bAllValid)
	{
		OutResult = EDataValidationResult::Invalid;
	}
	else
	{
		OutResult = EDataValidationResult::Valid;
	}
}

bool UAssetNamingSubsystem::ValidateFilesForSourceControl(const TArray<FString>& InFiles, TArray<FText>& OutErrors, TArray<FText>& OutWarnings)
{
	const UAssetHandlingSettings* Settings = GetSettings();

	if (Settings->SourceControlMode == ESourceControlValidationMode::Disabled)
	{
		return true;
	}

	bool bAllValid = true;
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	for (const FString& FilePath : InFiles)
	{
		// Only uassets
		if (!FilePath.EndsWith(TEXT(".uasset")))
		{
			continue;
		}

		// Convert path
		FString PackagePath;
		if (!FPackageName::TryConvertFilenameToLongPackageName(FilePath, PackagePath))
		{
			continue;
		}

		// Get assets
		TArray<FAssetData> AssetsInPackage;
		AssetRegistry.GetAssetsByPackageName(FName(*PackagePath), AssetsInPackage);

		if (AssetsInPackage.Num() == 0)
		{
			continue;
		}

		// Use primary asset
		FAssetData AssetData = AssetsInPackage[0];

		if (UObject* Asset = AssetData.GetAsset())
		{
			if (!ShouldValidateAsset(Asset))
			{
				continue;
			}

			FAssetValidationResult Result = ValidateAsset(Asset);

			if (!Result.bIsValid)
			{
				FText ErrorText = FText::Format(
					FText::FromString(TEXT("Asset '{0}' violates naming convention: {1}. Suggested: '{2}'")),
					FText::FromString(Result.CurrentName),
					FText::FromString(FString::Join(Result.ValidationErrors, TEXT("; "))),
					FText::FromString(Result.SuggestedName)
				);

				if (Settings->SourceControlMode == ESourceControlValidationMode::Block)
				{
					OutErrors.Add(ErrorText);
					bAllValid = false;
				}
				else
				{
					OutWarnings.Add(ErrorText);
				}
			}
		}
	}

	if (OutErrors.Num() > 0)
	{
		FMessageLog MessageLog("AssetNaming");
		MessageLog.NewPage(FText::FromString(TEXT("Source Control Validation")));

		for (const FText& Error : OutErrors)
		{
			MessageLog.Error(Error);
		}

		MessageLog.Open();

		UE_LOG(LogEscapeAssetHelper, Error, TEXT("[Naming] Source control validation failed: %d assets have naming errors"), OutErrors.Num());
	}
	else if (OutWarnings.Num() > 0)
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Naming] Source control validation warnings: %d assets have naming issues"), OutWarnings.Num());
	}

	return bAllValid;
}

