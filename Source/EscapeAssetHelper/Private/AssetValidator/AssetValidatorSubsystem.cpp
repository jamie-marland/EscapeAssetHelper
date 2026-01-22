#include "AssetValidator/AssetValidatorSubsystem.h"
#include "AssetHandling/AssetHandlingSettings.h"
#include "AssetHandling/AssetHandlingSubsystem.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "UObject/ObjectSaveContext.h"
#include "Editor.h"
#include "EditorAssetLibrary.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "EscapeAssetHelper.h"

void UAssetValidatorSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Hook into save
	if (GEditor)
	{
		OnAssetPreSaveHandle = FCoreUObjectDelegates::OnObjectPreSave.AddUObject(
			this, &UAssetValidatorSubsystem::OnAssetPreSave);
	}

	// Hook into rename
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	OnAssetRenamedHandle = AssetRegistryModule.Get().OnAssetRenamed().AddUObject(
		this, &UAssetValidatorSubsystem::OnAssetRenamed);

	UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Validator] Subsystem initialized"));
}

void UAssetValidatorSubsystem::Deinitialize()
{
	// Unhook save
	if (OnAssetPreSaveHandle.IsValid())
	{
		FCoreUObjectDelegates::OnObjectPreSave.Remove(OnAssetPreSaveHandle);
		OnAssetPreSaveHandle.Reset();
	}

	// Unhook rename
	if (OnAssetRenamedHandle.IsValid())
	{
		if (FModuleManager::Get().IsModuleLoaded("AssetRegistry"))
		{
			FAssetRegistryModule& AssetRegistryModule = FModuleManager::GetModuleChecked<FAssetRegistryModule>("AssetRegistry");
			AssetRegistryModule.Get().OnAssetRenamed().Remove(OnAssetRenamedHandle);
		}
		OnAssetRenamedHandle.Reset();
	}

	Super::Deinitialize();
}

FAssetValidatorResult UAssetValidatorSubsystem::ValidateAsset(UObject* Asset)
{
	FAssetValidatorResult Result;
	Result.Asset = Asset;
	Result.bPassesValidation = true;

	if (!IsValid(Asset))
	{
		return Result;
	}

	// Skip ignored
	if (UAssetHandlingSubsystem* HandlingSubsystem = GEditor->GetEditorSubsystem<UAssetHandlingSubsystem>())
	{
		if (HandlingSubsystem->IsAssetIgnored(Asset))
		{
			return Result;
		}
	}

	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();
	if (!Settings || !Settings->bEnableAssetValidator)
	{
		return Result;
	}

	// Check rules
	for (auto RulesIt = Settings->ValidationRules.CreateConstIterator(); RulesIt; ++RulesIt)
	{
		if (UClass* RuleClass = RulesIt.Key().Get())
		{
			if (Asset->IsA(RuleClass))
			{
				for (const TObjectPtr<UAssetValidatorRuleBase>& Rule : RulesIt.Value().Rules)
				{
					if (!Rule)
					{
						continue;
					}

					if (UAssetValidatorRule* ValidatorRule = Cast<UAssetValidatorRule>(Rule.Get()))
					{
						// Run queries
						bool bQueriesPass = ValidatorRule->bRequiresAll || (ValidatorRule->Queries.Num() == 0);

						for (const TObjectPtr<UAssetValidatorQueryBase>& Query : ValidatorRule->Queries)
						{
							if (!Query)
							{
								continue;
							}

							bool bQueryResult = Query->Test(nullptr, Asset);

							if (ValidatorRule->bRequiresAll)
							{
								bQueriesPass = bQueriesPass && bQueryResult;
								if (!bQueriesPass) break;
							}
							else
							{
								bQueriesPass = bQueriesPass || bQueryResult;
								if (bQueriesPass) break;
							}
						}

						if (bQueriesPass && ValidatorRule->Actions.Num() > 0)
						{
							// Rule matches
							Result.MatchingRules.Add(Rule);
							Result.bPassesValidation = false;

							for (const TObjectPtr<UAssetValidatorActionBase>& Action : ValidatorRule->Actions)
							{
								if (Action)
								{
									Result.PendingChanges.Add(FString::Printf(TEXT("Rule '%s' action: %s"),
										*Rule->GetName(), *Action->GetClass()->GetName()));
								}
							}
						}
					}
				}
			}
		}
	}

	return Result;
}

TArray<FAssetValidatorResult> UAssetValidatorSubsystem::ValidateAssets(const TArray<FAssetData>& Assets)
{
	TArray<FAssetValidatorResult> Results;

	for (const FAssetData& AssetData : Assets)
	{
		if (UObject* Asset = AssetData.GetAsset())
		{
			Results.Add(ValidateAsset(Asset));
		}
	}

	return Results;
}

int32 UAssetValidatorSubsystem::ApplyRulesToAsset(UObject* Asset)
{
	if (!IsValid(Asset))
	{
		return 0;
	}

	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();
	if (!Settings || !Settings->bEnableAssetValidator)
	{
		return 0;
	}

	int32 RulesApplied = 0;

	// Apply rules
	for (auto RulesIt = Settings->ValidationRules.CreateConstIterator(); RulesIt; ++RulesIt)
	{
		if (UClass* RuleClass = RulesIt.Key().Get())
		{
			if (Asset->IsA(RuleClass))
			{
				for (const TObjectPtr<UAssetValidatorRuleBase>& Rule : RulesIt.Value().Rules)
				{
					if (!Rule)
					{
						continue;
					}

					if (Rule->Apply(nullptr, Asset))
					{
						RulesApplied++;

						if (Settings->bVerboseLogging)
						{
							UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Validator] Applied rule '%s' to asset '%s'"),
								*Rule->GetName(), *Asset->GetName());
						}
					}
				}
			}
		}
	}

	// Save if needed
	if (RulesApplied > 0 && Settings->bSaveAfterApplyingRules)
	{
		UEditorAssetLibrary::SaveLoadedAsset(Asset);

		if (Settings->bVerboseLogging)
		{
			UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Validator] Saved asset '%s' after applying %d rule(s)"),
				*Asset->GetName(), RulesApplied);
		}
	}

	return RulesApplied;
}

bool UAssetValidatorSubsystem::DoesAssetPassValidation(UObject* Asset)
{
	FAssetValidatorResult Result = ValidateAsset(Asset);
	return Result.bPassesValidation;
}

void UAssetValidatorSubsystem::DismissNotificationForAsset(FName AssetPath)
{
	if (TWeakPtr<SNotificationItem>* ExistingNotification = ActiveNotifications.Find(AssetPath))
	{
		if (TSharedPtr<SNotificationItem> Notification = ExistingNotification->Pin())
		{
			Notification->SetCompletionState(SNotificationItem::CS_None);
			Notification->Fadeout();
		}
		ActiveNotifications.Remove(AssetPath);
	}
}

void UAssetValidatorSubsystem::ShowValidationNotification(const FAssetValidatorResult& Result, bool bShowFixButton)
{
	if (!Result.Asset.IsValid() || Result.bPassesValidation)
	{
		return;
	}

	FName AssetPath = FName(*Result.Asset->GetPathName());

	// Skip if already showing
	if (TWeakPtr<SNotificationItem>* ExistingNotification = ActiveNotifications.Find(AssetPath))
	{
		if (ExistingNotification->IsValid())
		{
			return;
		}
	}

	FText NotificationText = FText::Format(
		FText::FromString(TEXT("Asset '{0}' has {1} pending validation rule(s)")),
		FText::FromString(Result.Asset->GetName()),
		FText::AsNumber(Result.MatchingRules.Num())
	);

	FNotificationInfo Info(NotificationText);
	Info.bFireAndForget = false;
	Info.ExpireDuration = 8.0f;
	Info.bUseThrobber = false;

	TWeakObjectPtr<UObject> WeakAsset = Result.Asset;
	TWeakObjectPtr<UAssetValidatorSubsystem> WeakThis = this;

	if (bShowFixButton)
	{
		Info.ButtonDetails.Add(FNotificationButtonInfo(
			FText::FromString(TEXT("Apply Fixes")),
			FText::FromString(TEXT("Apply all validation rules to this asset")),
			FSimpleDelegate::CreateLambda([WeakThis, WeakAsset, AssetPath]()
			{
				if (WeakThis.IsValid())
				{
					WeakThis->DismissNotificationForAsset(AssetPath);

					if (WeakAsset.IsValid())
					{
						int32 RulesApplied = WeakThis->ApplyRulesToAsset(WeakAsset.Get());

						FNotificationInfo AppliedInfo(FText::Format(
							FText::FromString(TEXT("Applied {0} rule(s) to '{1}'")),
							FText::AsNumber(RulesApplied),
							FText::FromString(WeakAsset->GetName())
						));
						AppliedInfo.ExpireDuration = 3.0f;
						FSlateNotificationManager::Get().AddNotification(AppliedInfo);
					}
				}
			}),
			SNotificationItem::CS_None
		));

		Info.ButtonDetails.Add(FNotificationButtonInfo(
			FText::FromString(TEXT("Dismiss")),
			FText::FromString(TEXT("Dismiss this notification")),
			FSimpleDelegate::CreateLambda([WeakThis, AssetPath]()
			{
				if (WeakThis.IsValid())
				{
					WeakThis->DismissNotificationForAsset(AssetPath);
				}
			}),
			SNotificationItem::CS_None
		));
	}

	TSharedPtr<SNotificationItem> NotificationItem = FSlateNotificationManager::Get().AddNotification(Info);
	if (NotificationItem.IsValid())
	{
		ActiveNotifications.Add(AssetPath, NotificationItem);
	}
}

void UAssetValidatorSubsystem::OnAssetPreSave(UObject* Asset, FObjectPreSaveContext SaveContext)
{
	if (!IsValid(Asset))
	{
		return;
	}

	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();
	if (!Settings || !Settings->bEnableAssetValidator || !Settings->bValidateOnSave)
	{
		return;
	}

	// Skip non-assets
	if (!Asset->IsAsset())
	{
		return;
	}

	FAssetValidatorResult Result = ValidateAsset(Asset);

	if (!Result.bPassesValidation)
	{
		if (Settings->bAutoFixValidatorWithoutPrompt)
		{
			int32 RulesApplied = ApplyRulesToAsset(Asset);

			if (Settings->bVerboseLogging)
			{
				UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Validator] Auto-applied %d rule(s) to '%s' on save"),
					RulesApplied, *Asset->GetName());
			}
		}
		else
		{
			ShowValidationNotification(Result, true);
		}
	}
}

void UAssetValidatorSubsystem::OnAssetRenamed(const FAssetData& AssetData, const FString& OldObjectPath)
{
	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();
	if (!Settings || !Settings->bEnableAssetValidator || !Settings->bValidateOnRename)
	{
		return;
	}

	UObject* Asset = AssetData.GetAsset();
	if (!IsValid(Asset))
	{
		return;
	}

	FAssetValidatorResult Result = ValidateAsset(Asset);

	if (!Result.bPassesValidation)
	{
		if (Settings->bAutoFixValidatorWithoutPrompt)
		{
			int32 RulesApplied = ApplyRulesToAsset(Asset);

			if (Settings->bVerboseLogging)
			{
				UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Validator] Auto-applied %d rule(s) to '%s' on rename"),
					RulesApplied, *Asset->GetName());
			}
		}
		else
		{
			ShowValidationNotification(Result, true);
		}
	}
}
