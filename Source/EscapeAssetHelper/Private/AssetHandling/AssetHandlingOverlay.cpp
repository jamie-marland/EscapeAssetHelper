#include "AssetHandling/AssetHandlingOverlay.h"
#include "AssetHandling/AssetHandlingSubsystem.h"
#include "AssetHandling/AssetHandlingSettings.h"
#include "AssetNaming/AssetNamingParser.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Editor.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/SNullWidget.h"
#include "Styling/CoreStyle.h"
#include "EditorAssetLibrary.h"
#include "Engine/Blueprint.h"

FAssetHandlingOverlay::FAssetHandlingOverlay()
{
}

FAssetHandlingOverlay::~FAssetHandlingOverlay()
{
	Shutdown();
}

void FAssetHandlingOverlay::Initialize()
{
	if (bIsInitialized)
	{
		return;
	}

	RegisterOverlayHooks();

	// Hook rename to invalidate cache - JM
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	AssetRenamedHandle = AssetRegistryModule.Get().OnAssetRenamed().AddRaw(this, &FAssetHandlingOverlay::OnAssetRenamed);

	bIsInitialized = true;
}

void FAssetHandlingOverlay::Shutdown()
{
	if (!bIsInitialized)
	{
		return;
	}

	UnregisterOverlayHooks();

	// Unhook rename
	if (AssetRenamedHandle.IsValid())
	{
		if (FModuleManager::Get().IsModuleLoaded("AssetRegistry"))
		{
			FAssetRegistryModule& AssetRegistryModule = FModuleManager::GetModuleChecked<FAssetRegistryModule>("AssetRegistry");
			AssetRegistryModule.Get().OnAssetRenamed().Remove(AssetRenamedHandle);
		}
		AssetRenamedHandle.Reset();
	}

	ClearCache();
	bIsInitialized = false;
}

EAssetStatusType FAssetHandlingOverlay::GetAssetStatus(const FAssetData& AssetData) const
{
	// Check cache first
	FName AssetPath = AssetData.PackageName;
	if (const EAssetStatusType* CachedStatus = StatusCache.Find(AssetPath))
	{
		return *CachedStatus;
	}

	EAssetStatusType Result = EAssetStatusType::NoConvention;

	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();
	if (!Settings)
	{
		StatusCache.Add(AssetPath, Result);
		return Result;
	}

	// Check ignored
	if (UAssetHandlingSubsystem* HandlingSubsystem = GEditor->GetEditorSubsystem<UAssetHandlingSubsystem>())
	{
		if (HandlingSubsystem->IsAssetDataIgnored(AssetData))
		{
			Result = EAssetStatusType::Ignored;
			StatusCache.Add(AssetPath, Result);
			return Result;
		}
	}

	// Try without loading first - JM
	const FAssetNamingConvention* Convention = nullptr;
	FTopLevelAssetPath ClassPath = AssetData.AssetClassPath;
	UClass* AssetClass = nullptr;
	bool bIsBlueprintType = false;

	if (ClassPath.IsValid())
	{
		AssetClass = FindObject<UClass>(ClassPath);

		if (AssetClass)
		{
			bIsBlueprintType = AssetClass->IsChildOf(UBlueprint::StaticClass());
			if (!bIsBlueprintType)
			{
				Convention = Settings->GetConventionForClass(AssetClass);
			}
		}
	}

	// Blueprints need loading for parent class lookup - JM
	if (!Convention && (bIsBlueprintType || !AssetClass))
	{
		if (UObject* Asset = AssetData.GetAsset())
		{
			Convention = Settings->GetConventionForAsset(Asset);
		}
	}

	if (!Convention)
	{
		StatusCache.Add(AssetPath, Result);
		return Result;
	}

	// Parse the name
	FString AssetName = AssetData.AssetName.ToString();
	FParsedAssetName Parsed = UAssetNamingParser::ParseAssetNameWithConvention(AssetName, *Convention);

	// Check prefix
	FString ExpectedPrefix = Convention->GetPrefixWithoutUnderscore();
	if (!ExpectedPrefix.IsEmpty())
	{
		if (Parsed.Prefix.IsEmpty() || !Parsed.Prefix.Equals(ExpectedPrefix, ESearchCase::IgnoreCase))
		{
			Result = EAssetStatusType::Invalid;
			StatusCache.Add(AssetPath, Result);
			return Result;
		}
	}

	// Check casing
	if (Settings->bRequirePascalCase && !Parsed.BaseAssetName.IsEmpty())
	{
		if (!UAssetNamingParser::IsPascalCase(Parsed.BaseAssetName))
		{
			Result = EAssetStatusType::Invalid;
			StatusCache.Add(AssetPath, Result);
			return Result;
		}
	}

	// Check suffix
	if (Convention->bSuffixRequired && Convention->ValidSuffixes.Num() > 0)
	{
		if (Parsed.Suffix.IsEmpty() || !Convention->IsSuffixValid(Parsed.Suffix))
		{
			Result = EAssetStatusType::Invalid;
			StatusCache.Add(AssetPath, Result);
			return Result;
		}
	}

	Result = EAssetStatusType::Valid;
	StatusCache.Add(AssetPath, Result);
	return Result;
}

TSharedRef<SWidget> FAssetHandlingOverlay::GenerateOverlayWidget(const FAssetData& AssetData) const
{
	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();
	if (!Settings || !Settings->bEnableOverlay)
	{
		return SNullWidget::NullWidget;
	}

	EAssetStatusType Status = GetAssetStatus(AssetData);

	FString Symbol;
	FLinearColor Color;

	switch (Status)
	{
		case EAssetStatusType::Valid:
			Symbol = Settings->ValidSymbol;
			Color = Settings->ValidColor;
			break;

		case EAssetStatusType::Invalid:
			Symbol = Settings->InvalidSymbol;
			Color = Settings->InvalidColor;
			break;

		case EAssetStatusType::Ignored:
			Symbol = Settings->IgnoredSymbol;
			Color = Settings->IgnoredColor;
			break;

		case EAssetStatusType::NoConvention:
		default:
			Symbol = Settings->NoConventionSymbol;
			Color = Settings->NoConventionColor;
			break;
	}

	return SNew(STextBlock)
		.Text(FText::FromString(Symbol))
		.ColorAndOpacity(FSlateColor(Color))
		.Font(FCoreStyle::GetDefaultFontStyle(TEXT("Bold"), Settings->OverlayFontSize))
		.Margin(FMargin(2.0f, 0.0f, 0.0f, 0.0f));
}

void FAssetHandlingOverlay::RegisterOverlayHooks()
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");

	// Hook into content browser thumbnails
	ExtraStateGeneratorHandle = ContentBrowserModule.AddAssetViewExtraStateGenerator(
		FAssetViewExtraStateGenerator(
			// Our overlay
			FOnGenerateAssetViewExtraStateIndicators::CreateLambda([this](const FAssetData& AssetData) -> TSharedRef<SWidget>
			{
				return GenerateOverlayWidget(AssetData);
			}),
			// Not using secondary
			FOnGenerateAssetViewExtraStateIndicators::CreateLambda([](const FAssetData& AssetData) -> TSharedRef<SWidget>
			{
				return SNullWidget::NullWidget;
			})
		)
	);
}

void FAssetHandlingOverlay::UnregisterOverlayHooks()
{
	if (ExtraStateGeneratorHandle.IsValid())
	{
		if (FModuleManager::Get().IsModuleLoaded("ContentBrowser"))
		{
			FContentBrowserModule& ContentBrowserModule = FModuleManager::GetModuleChecked<FContentBrowserModule>("ContentBrowser");
			ContentBrowserModule.RemoveAssetViewExtraStateGenerator(ExtraStateGeneratorHandle);
		}
		ExtraStateGeneratorHandle.Reset();
	}
}

void FAssetHandlingOverlay::OnAssetRenamed(const FAssetData& AssetData, const FString& OldPath)
{
	// Invalidate both old and new paths
	StatusCache.Remove(FName(*OldPath));
	StatusCache.Remove(AssetData.PackageName);
}

void FAssetHandlingOverlay::InvalidateCacheForAsset(FName AssetPath)
{
	StatusCache.Remove(AssetPath);
}

void FAssetHandlingOverlay::ClearCache()
{
	StatusCache.Empty();
}
