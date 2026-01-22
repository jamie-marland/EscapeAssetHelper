#include "EscapeAssetHelper.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "AssetHandling/AssetHandlingSubsystem.h"
#include "AssetNaming/AssetNamingSubsystem.h"
#include "AssetValidator/AssetValidatorSubsystem.h"
#include "AssetHandling/AssetHandlingSettings.h"
#include "AssetHandling/AssetHandlingOverlay.h"
#include "ToolMenus.h"
#include "LevelEditor.h"
#include "Misc/App.h"
#include "EditorAssetLibrary.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/ConfigCacheIni.h"

DEFINE_LOG_CATEGORY(LogEscapeAssetHelper);

void FEscapeAssetHelperModule::StartupModule()
{
	LoadPluginConfig();

	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	TArray<FContentBrowserMenuExtender_SelectedAssets>& MenuExtenders = ContentBrowserModule.GetAllAssetViewContextMenuExtenders();
	MenuExtenders.Add(FContentBrowserMenuExtender_SelectedAssets::CreateRaw(this, &FEscapeAssetHelperModule::OnExtendContentBrowserAssetMenu));
	ContentBrowserExtenderDelegateHandle = MenuExtenders.Last().GetHandle();

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FEscapeAssetHelperModule::RegisterMenus));

	StatusOverlay = MakeUnique<FAssetHandlingOverlay>();
	StatusOverlay->Initialize();

	UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Module] Escape Asset Helper started"));
}

void FEscapeAssetHelperModule::RegisterMenus()
{
	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Help");
	if (Menu)
	{
		FToolMenuSection& Section = Menu->FindOrAddSection("EscapeAssetHelper");
		Section.Label = FText::FromString(TEXT("Escape Asset Helper"));

		Section.AddMenuEntry(
			"OpenStyleGuide",
			FText::FromString(TEXT("Asset Naming Style Guide")),
			FText::FromString(TEXT("Open the asset naming conventions style guide")),
			FSlateIcon(),
			FUIAction(FExecuteAction::CreateLambda([]()
			{
				if (GEditor)
				{
					if (UAssetHandlingSubsystem* Subsystem = GEditor->GetEditorSubsystem<UAssetHandlingSubsystem>())
					{
						Subsystem->OpenStyleGuide();
					}
				}
			}))
		);

		Section.AddMenuEntry(
			"OpenDocumentation",
			FText::FromString(TEXT("Documentation")),
			FText::FromString(TEXT("Open the plugin documentation")),
			FSlateIcon(),
			FUIAction(FExecuteAction::CreateLambda([]()
			{
				if (GEditor)
				{
					if (UAssetHandlingSubsystem* Subsystem = GEditor->GetEditorSubsystem<UAssetHandlingSubsystem>())
					{
						Subsystem->OpenDocumentation();
					}
				}
			}))
		);
	}
}

void FEscapeAssetHelperModule::LoadPluginConfig()
{
	TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("EscapeAssetHelper"));
	if (!Plugin.IsValid())
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Module] Could not find EscapeAssetHelper plugin"));
		return;
	}

	FString PluginConfigPath = FPaths::Combine(Plugin->GetBaseDir(), TEXT("Config"), TEXT("DefaultEscapeAssetHelper.ini"));
	if (!FPaths::FileExists(PluginConfigPath))
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Module] Plugin config not found: %s"), *PluginConfigPath);
		return;
	}

	FConfigFile PluginConfig;
	PluginConfig.Read(PluginConfigPath);

	FConfigFile* EditorConfig = GConfig->FindConfigFile(GEditorIni);
	if (!EditorConfig)
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Module] Could not find Editor config in GConfig"));
		return;
	}

	const FString SectionName = TEXT("/Script/EscapeAssetHelper.AssetHandlingSettings");
	const FConfigSection* PluginSection = PluginConfig.FindSection(SectionName);
	if (!PluginSection)
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Module] Section '%s' not found in plugin config"), *SectionName);
		return;
	}

	const FConfigSection* EditorSection = EditorConfig->FindSection(SectionName);
	if (!EditorSection)
	{
		for (const auto& Pair : *PluginSection)
		{
			EditorConfig->AddToSection(*SectionName, Pair.Key, Pair.Value.GetValue());
		}
		UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Module] Plugin defaults loaded"));
	}
	else
	{
		int32 KeysAdded = 0;
		for (const auto& Pair : *PluginSection)
		{
			if (!EditorSection->Find(Pair.Key))
			{
				EditorConfig->AddToSection(*SectionName, Pair.Key, Pair.Value.GetValue());
				KeysAdded++;
			}
		}
		if (KeysAdded > 0)
		{
			UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Module] Merged %d default config key(s) from plugin"), KeysAdded);
		}
	}

	if (UAssetHandlingSettings* Settings = UAssetHandlingSettings::GetMutable())
	{
		Settings->ReloadConfig();
		UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Module] Settings reloaded from config"));
	}
}

void FEscapeAssetHelperModule::ShutdownModule()
{
	if (StatusOverlay)
	{
		StatusOverlay->Shutdown();
		StatusOverlay.Reset();
	}

	if (ContentBrowserExtenderDelegateHandle.IsValid())
	{
		FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
		TArray<FContentBrowserMenuExtender_SelectedAssets>& MenuExtenders = ContentBrowserModule.GetAllAssetViewContextMenuExtenders();
		MenuExtenders.RemoveAll([this](const FContentBrowserMenuExtender_SelectedAssets& Delegate)
		{
			return Delegate.GetHandle() == ContentBrowserExtenderDelegateHandle;
		});
	}

	UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Module] Escape Asset Helper shut down"));
}

TSharedRef<FExtender> FEscapeAssetHelperModule::OnExtendContentBrowserAssetMenu(const TArray<FAssetData>& SelectedAssets)
{
	TSharedRef<FExtender> Extender = MakeShareable(new FExtender());

	if (SelectedAssets.Num() > 0)
	{
		Extender->AddMenuExtension(
			"CommonAssetActions",
			EExtensionHook::After,
			nullptr,
			FMenuExtensionDelegate::CreateLambda([SelectedAssets](FMenuBuilder& MenuBuilder)
			{
				MenuBuilder.BeginSection("EscapeAssetHelper", FText::FromString(TEXT("Escape Asset Helper")));

				MenuBuilder.AddMenuEntry(
					FText::FromString(TEXT("Validate Asset")),
					FText::FromString(TEXT("Check if selected assets follow naming conventions and pass validator rules")),
					FSlateIcon(),
					FUIAction(FExecuteAction::CreateLambda([SelectedAssets]()
					{
						if (GEditor)
						{
							if (UAssetNamingSubsystem* NamingSubsystem = GEditor->GetEditorSubsystem<UAssetNamingSubsystem>())
							{
								NamingSubsystem->ValidateAssets(SelectedAssets);
							}

							if (UAssetValidatorSubsystem* ValidatorSubsystem = GEditor->GetEditorSubsystem<UAssetValidatorSubsystem>())
							{
								TArray<FAssetValidatorResult> Results = ValidatorSubsystem->ValidateAssets(SelectedAssets);
								for (const FAssetValidatorResult& Result : Results)
								{
									if (!Result.bPassesValidation)
									{
										ValidatorSubsystem->ShowValidationNotification(Result, true);
									}
								}
							}
						}
					}))
				);

				bool bAnyIgnored = false;
				bool bAnyNotIgnored = false;
				if (GEditor)
				{
					if (UAssetHandlingSubsystem* HandlingSubsystem = GEditor->GetEditorSubsystem<UAssetHandlingSubsystem>())
					{
						for (const FAssetData& AssetData : SelectedAssets)
						{
							if (HandlingSubsystem->IsAssetDataIgnored(AssetData))
							{
								bAnyIgnored = true;
							}
							else
							{
								bAnyNotIgnored = true;
							}
						}
					}
				}

				FText ToggleLabel;
				FText ToggleTooltip;
				if (bAnyIgnored && !bAnyNotIgnored)
				{
					ToggleLabel = FText::FromString(TEXT("Remove Ignore (Currently Ignored)"));
					ToggleTooltip = FText::FromString(TEXT("Remove ignore status from selected assets"));
				}
				else if (!bAnyIgnored && bAnyNotIgnored)
				{
					ToggleLabel = FText::FromString(TEXT("Ignore Validation"));
					ToggleTooltip = FText::FromString(TEXT("Mark selected assets as ignored from validation"));
				}
				else
				{
					ToggleLabel = FText::FromString(TEXT("Toggle Ignore Validation"));
					ToggleTooltip = FText::FromString(TEXT("Toggle ignore status for selected assets"));
				}

				MenuBuilder.AddMenuEntry(
					ToggleLabel,
					ToggleTooltip,
					FSlateIcon(),
					FUIAction(FExecuteAction::CreateLambda([SelectedAssets]()
					{
						if (GEditor)
						{
							if (UAssetHandlingSubsystem* HandlingSubsystem = GEditor->GetEditorSubsystem<UAssetHandlingSubsystem>())
							{
								for (const FAssetData& AssetData : SelectedAssets)
								{
									if (UObject* Asset = AssetData.GetAsset())
									{
										bool bCurrentlyIgnored = HandlingSubsystem->IsAssetIgnored(Asset);
										HandlingSubsystem->SetAssetIgnored(Asset, !bCurrentlyIgnored);
										UEditorAssetLibrary::SaveLoadedAsset(Asset);
									}
								}
							}
						}
					}))
				);

				MenuBuilder.AddMenuEntry(
					FText::FromString(TEXT("Auto-Fix Names")),
					FText::FromString(TEXT("Automatically fix names of selected assets to follow conventions")),
					FSlateIcon(),
					FUIAction(FExecuteAction::CreateLambda([SelectedAssets]()
					{
						if (GEditor)
						{
							if (UAssetNamingSubsystem* Subsystem = GEditor->GetEditorSubsystem<UAssetNamingSubsystem>())
							{
								Subsystem->AutoFixAssets(SelectedAssets);
							}
						}
					}))
				);

				MenuBuilder.EndSection();
			})
		);
	}

	return Extender;
}

IMPLEMENT_MODULE(FEscapeAssetHelperModule, EscapeAssetHelper)
