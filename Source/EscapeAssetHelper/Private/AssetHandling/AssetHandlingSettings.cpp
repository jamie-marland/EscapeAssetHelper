#include "AssetHandling/AssetHandlingSettings.h"
#include "EscapeAssetHelper.h"
#include "Interfaces/IPluginManager.h"
#include "Engine/Blueprint.h"
#if WITH_EDITOR
#include "Editor.h"
#endif

UAssetHandlingSettings::UAssetHandlingSettings()
{
}

void UAssetHandlingSettings::PostInitProperties()
{
	Super::PostInitProperties();

#if WITH_EDITOR
	RegisterBlueprintCompilationHook();
#endif
}

void UAssetHandlingSettings::BeginDestroy()
{
#if WITH_EDITOR
	UnregisterBlueprintCompilationHook();
#endif

	Super::BeginDestroy();
}

#if WITH_EDITOR
FText UAssetHandlingSettings::GetSectionText() const
{
	return FText::FromString(TEXT("Escape Asset Helper"));
}

FText UAssetHandlingSettings::GetSectionDescription() const
{
	return FText::FromString(TEXT("Configure asset handling, naming conventions, and validation rules."));
}

void UAssetHandlingSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	InvalidateCache();
	ValidateSettings();

	// Clear overlay cache so thumbnails refresh with new settings
	if (FModuleManager::Get().IsModuleLoaded(TEXT("EscapeAssetHelper")))
	{
		FEscapeAssetHelperModule& Module = FModuleManager::GetModuleChecked<FEscapeAssetHelperModule>(TEXT("EscapeAssetHelper"));
		Module.ClearOverlayCache();
	}
}

void UAssetHandlingSettings::ValidateSettings() const
{
	if (bShowImportDialog && bAutoFixOnImport)
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Settings] Both 'Show Import Dialog' and 'Auto-Fix On Import' are enabled. The dialog will take precedence."));
	}

	if (bAutoFixNamingWithoutPrompt && bAutoFixValidatorWithoutPrompt)
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Settings] Both 'Auto-Fix Without Prompt' options are enabled."));
	}

	if (!bEnableOverlay && (bValidateOnRename || bValidateOnSave))
	{
		UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Settings] Overlay is disabled but validation is still active."));
	}

	if (!bEnableAssetValidator && ValidationRules.Num() > 0)
	{
		UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Settings] Asset Validator is disabled but %d validation rule(s) are configured."), ValidationRules.Num());
	}
}
#endif

const UAssetHandlingSettings* UAssetHandlingSettings::Get()
{
	return GetDefault<UAssetHandlingSettings>();
}

UAssetHandlingSettings* UAssetHandlingSettings::GetMutable()
{
	return GetMutableDefault<UAssetHandlingSettings>();
}

FString UAssetHandlingSettings::GetDocumentationURL() const
{
	TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("EscapeAssetHelper"));
	if (Plugin.IsValid())
	{
		return Plugin->GetDescriptor().DocsURL;
	}
	return FString();
}

const FAssetNamingConvention* UAssetHandlingSettings::GetConventionForClass(const UClass* Class) const
{
	if (!Class)
	{
		return nullptr;
	}

	if (const FAssetNamingConvention* const* CachedResult = CachedConventionLookups.Find(Class))
	{
		return *CachedResult;
	}

	const UClass* CurrentClass = Class;
	const FAssetNamingConvention* BestMatch = nullptr;
	int32 BestMatchDepth = INT_MAX;

	while (CurrentClass)
	{
		for (const auto& Pair : NamingConventions)
		{
			if (UClass* ConventionClass = Pair.Key.Get())
			{
				if (CurrentClass == ConventionClass || CurrentClass->IsChildOf(ConventionClass))
				{
					int32 Depth = 0;
					for (const UClass* TestClass = Class; TestClass && TestClass != ConventionClass; TestClass = TestClass->GetSuperClass())
					{
						Depth++;
					}

					if (Depth < BestMatchDepth)
					{
						BestMatchDepth = Depth;
						BestMatch = &Pair.Value;
					}
				}
			}
		}

		CurrentClass = CurrentClass->GetSuperClass();
	}

	CachedConventionLookups.Add(Class, BestMatch);
	return BestMatch;
}

const FAssetNamingConvention* UAssetHandlingSettings::GetConventionForAsset(const UObject* Asset) const
{
	if (!Asset)
	{
		return nullptr;
	}

	const FAssetNamingConvention* Convention = nullptr;

	if (const UBlueprint* Blueprint = Cast<UBlueprint>(Asset))
	{
		if (Blueprint->GeneratedClass)
		{
			Convention = GetConventionForClass(Blueprint->GeneratedClass);
		}

		if (!Convention && Blueprint->ParentClass)
		{
			Convention = GetConventionForClass(Blueprint->ParentClass);
		}
	}

	if (!Convention)
	{
		Convention = GetConventionForClass(Asset->GetClass());
	}

	return Convention;
}

#if WITH_EDITOR
void UAssetHandlingSettings::RegisterBlueprintCompilationHook()
{
	if (GEditor && !OnBlueprintCompiledHandle.IsValid())
	{
		OnBlueprintCompiledHandle = GEditor->OnBlueprintCompiled().AddUObject(
			const_cast<UAssetHandlingSettings*>(this),
			&UAssetHandlingSettings::OnBlueprintCompiled);
	}
}

void UAssetHandlingSettings::UnregisterBlueprintCompilationHook()
{
	if (GEditor && OnBlueprintCompiledHandle.IsValid())
	{
		GEditor->OnBlueprintCompiled().Remove(OnBlueprintCompiledHandle);
		OnBlueprintCompiledHandle.Reset();
	}
}

void UAssetHandlingSettings::OnBlueprintCompiled()
{
	InvalidateCache();
}
#endif

void UAssetHandlingSettings::InvalidateCache() const
{
	CachedConventionLookups.Empty();
}
