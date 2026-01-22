#include "AssetValidator/AssetValidatorQueries.h"
#include "AssetHandling/AssetHandlingSettings.h"
#include "EditorFramework/AssetImportData.h"
#include "EditorAssetLibrary.h"
#include "Engine/Texture.h"
#include "Engine/Texture2D.h"
#include "Engine/StaticMesh.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/Blueprint.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstance.h"
#include "Sound/SoundBase.h"
#include "EscapeAssetHelper.h"

// ==================== UAssetValidatorQueryCheckAssetTag ====================

bool UAssetValidatorQueryCheckAssetTag::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	if (AssetTagKey == NAME_None)
	{
		return false;
	}

	if (!IsValid(Asset))
	{
		return false;
	}

	const FString Value = UEditorAssetLibrary::GetMetadataTag(Asset, AssetTagKey);
	if (Value.IsEmpty())
	{
		return false;
	}

	// Check value or just existence
	return AssetTagValue.IsEmpty() || AssetTagValue == Value;
}

// ==================== UAssetValidatorQuerySourcePathBase ====================

bool UAssetValidatorQuerySourcePathBase::GetSourcePath(const UObject* Asset, FString& OutPath) const
{
	if (!IsValid(Asset))
	{
		return false;
	}

	// Try by name first
	const FObjectPropertyBase* ObjectProperty = FindFProperty<FObjectPropertyBase>(
		Asset->GetClass(),
		TEXT("AssetImportData")
	);

	if (ObjectProperty)
	{
		const UObject* PropertyValue = ObjectProperty->GetObjectPropertyValue_InContainer(Asset);
		if (const UAssetImportData* AssetImportData = Cast<UAssetImportData>(PropertyValue))
		{
			OutPath = AssetImportData->GetFirstFilename();
			if (!OutPath.IsEmpty())
			{
				return true;
			}
		}
	}

	// Fallback: search all properties
	for (TFieldIterator<FObjectPropertyBase> PropIt(Asset->GetClass()); PropIt; ++PropIt)
	{
		const FObjectPropertyBase* ObjProp = *PropIt;
		if (ObjProp && ObjProp->PropertyClass && ObjProp->PropertyClass->IsChildOf(UAssetImportData::StaticClass()))
		{
			const UObject* PropertyValue = ObjProp->GetObjectPropertyValue_InContainer(Asset);
			if (const UAssetImportData* AssetImportData = Cast<UAssetImportData>(PropertyValue))
			{
				OutPath = AssetImportData->GetFirstFilename();
				if (!OutPath.IsEmpty())
				{
					return true;
				}
			}
		}
	}

	return false;
}

// ==================== UAssetValidatorQuerySourceFilenameStartsWith ====================

bool UAssetValidatorQuerySourceFilenameStartsWith::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	FString SourcePath;
	if (GetSourcePath(Asset, SourcePath))
	{
		const FString Filename = FPaths::GetBaseFilename(SourcePath);
		return Filename.StartsWith(StartsWith, bCaseSensitive ? ESearchCase::CaseSensitive : ESearchCase::IgnoreCase);
	}
	return false;
}

// ==================== UAssetValidatorQuerySourceFilenameEndsWith ====================

bool UAssetValidatorQuerySourceFilenameEndsWith::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	FString SourcePath;
	if (GetSourcePath(Asset, SourcePath))
	{
		const FString Filename = FPaths::GetBaseFilename(SourcePath);
		bool bResult = Filename.EndsWith(EndsWith, bCaseSensitive ? ESearchCase::CaseSensitive : ESearchCase::IgnoreCase);

		if (const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get())
		{
			if (Settings->bVerboseLogging)
			{
				UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Validator] SourceFilenameEndsWith: Asset='%s', SourcePath='%s', Filename='%s', EndsWith='%s', Result=%s"),
					Asset ? *Asset->GetName() : TEXT("null"),
					*SourcePath,
					*Filename,
					*EndsWith,
					bResult ? TEXT("true") : TEXT("false"));
			}
		}

		return bResult;
	}

	UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Validator] SourceFilenameEndsWith: Could not get source path for asset '%s'"),
		Asset ? *Asset->GetName() : TEXT("null"));

	return false;
}

// ==================== UAssetValidatorQuerySourcePathContains ====================

bool UAssetValidatorQuerySourcePathContains::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	FString SourcePath;
	if (GetSourcePath(Asset, SourcePath))
	{
		return SourcePath.Contains(Contains, bCaseSensitive ? ESearchCase::CaseSensitive : ESearchCase::IgnoreCase);
	}
	return false;
}

// ==================== UAssetValidatorQuerySourceExtensionMatches ====================

bool UAssetValidatorQuerySourceExtensionMatches::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	FString SourcePath;
	if (GetSourcePath(Asset, SourcePath))
	{
		const FString Extension = FPaths::GetExtension(SourcePath);

		// Parse comma list
		TArray<FString> ValidExtensionsArray;
		FString CleanedExtensions = ValidExtensions.Replace(TEXT("."), TEXT(""));
		CleanedExtensions.ParseIntoArray(ValidExtensionsArray, TEXT(","));

		for (FString& Ext : ValidExtensionsArray)
		{
			Ext.TrimStartAndEndInline();
			if (Extension.Equals(Ext, bCaseSensitive ? ESearchCase::CaseSensitive : ESearchCase::IgnoreCase))
			{
				return true;
			}
		}
	}
	return false;
}

// ==================== UAssetValidatorQueryDestinationPathContains ====================

bool UAssetValidatorQueryDestinationPathContains::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	if (!IsValid(Asset))
	{
		return false;
	}

	return Asset->GetPathName().Contains(Contains, bCaseSensitive ? ESearchCase::CaseSensitive : ESearchCase::IgnoreCase);
}

// ==================== UAssetValidatorQueryAssetClassMatches ====================

bool UAssetValidatorQueryAssetClassMatches::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	if (!IsValid(Asset) || !AssetClass)
	{
		return false;
	}

	if (bExactMatch)
	{
		return Asset->GetClass() == AssetClass;
	}
	else
	{
		return Asset->IsA(AssetClass);
	}
}

// ==================== UAssetValidatorQueryAssetNameMatches ====================

bool UAssetValidatorQueryAssetNameMatches::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	if (!IsValid(Asset) || Pattern.IsEmpty())
	{
		return false;
	}

	const FString AssetName = Asset->GetName();
	return AssetName.MatchesWildcard(Pattern, bCaseSensitive ? ESearchCase::CaseSensitive : ESearchCase::IgnoreCase);
}

// ==================== UAssetValidatorQueryCheckPropertyValue ====================

bool UAssetValidatorQueryCheckPropertyValue::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	if (!IsValid(Asset) || PropertyName == NAME_None)
	{
		return false;
	}

	// Find the property
	FProperty* Property = Asset->GetClass()->FindPropertyByName(PropertyName);
	if (!Property)
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Validator] CheckPropertyValue: Property '%s' not found on asset '%s'"),
			*PropertyName.ToString(), *Asset->GetName());
		return false;
	}

	// Get value as string
	FString CurrentValue;
	const void* PropertyPtr = Property->ContainerPtrToValuePtr<void>(Asset);
	Property->ExportTextItem_Direct(CurrentValue, PropertyPtr, nullptr, Asset, PPF_None);

	// Compare by mode
	const ESearchCase::Type SearchCase = bCaseSensitive ? ESearchCase::CaseSensitive : ESearchCase::IgnoreCase;

	switch (ComparisonMode)
	{
	case EPropertyComparisonMode::Equals:
		return CurrentValue.Equals(ExpectedValue, SearchCase);

	case EPropertyComparisonMode::NotEquals:
		return !CurrentValue.Equals(ExpectedValue, SearchCase);

	case EPropertyComparisonMode::Contains:
		return CurrentValue.Contains(ExpectedValue, SearchCase);

	case EPropertyComparisonMode::LessThan:
	case EPropertyComparisonMode::GreaterThan:
	case EPropertyComparisonMode::LessOrEqual:
	case EPropertyComparisonMode::GreaterOrEqual:
		{
			// Try numeric comparison
			if (const FNumericProperty* NumericProp = CastField<FNumericProperty>(Property))
			{
				double CurrentNumeric = 0.0;
				double ExpectedNumeric = 0.0;

				if (NumericProp->IsFloatingPoint())
				{
					CurrentNumeric = NumericProp->GetFloatingPointPropertyValue(PropertyPtr);
				}
				else if (NumericProp->IsInteger())
				{
					CurrentNumeric = static_cast<double>(NumericProp->GetSignedIntPropertyValue(PropertyPtr));
				}

				// Parse expected as number
				if (!ExpectedValue.IsNumeric())
				{
					UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Validator] CheckPropertyValue: Cannot parse '%s' as number for numeric comparison"),
						*ExpectedValue);
					return false;
				}
				ExpectedNumeric = FCString::Atod(*ExpectedValue);

				switch (ComparisonMode)
				{
				case EPropertyComparisonMode::LessThan:
					return CurrentNumeric < ExpectedNumeric;
				case EPropertyComparisonMode::GreaterThan:
					return CurrentNumeric > ExpectedNumeric;
				case EPropertyComparisonMode::LessOrEqual:
					return CurrentNumeric <= ExpectedNumeric;
				case EPropertyComparisonMode::GreaterOrEqual:
					return CurrentNumeric >= ExpectedNumeric;
				default:
					return false;
				}
			}
			else
			{
				UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Validator] CheckPropertyValue: Property '%s' is not numeric, cannot use comparison mode"),
					*PropertyName.ToString());
				return false;
			}
		}

	default:
		return false;
	}
}

// ==================== UAssetValidatorQueryAssetInExpectedFolder ====================

bool UAssetValidatorQueryAssetInExpectedFolder::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	if (!IsValid(Asset) || ExpectedFolderPath.IsEmpty())
	{
		return false;
	}

	// Get current folder
	FString AssetPath = Asset->GetPathName();
	FString CurrentFolderPath = FPackageName::GetLongPackagePath(Asset->GetOutermost()->GetName());

	// Process path tokens
	FString ProcessedExpectedPath = ExpectedFolderPath;

	// {AssetClass} token
	ProcessedExpectedPath = ProcessedExpectedPath.Replace(TEXT("{AssetClass}"), *Asset->GetClass()->GetName());

	// {AssetType} token
	FString AssetType = TEXT("Assets");
	UClass* AssetClass = Asset->GetClass();
	if (AssetClass->IsChildOf(UTexture::StaticClass()))
	{
		AssetType = TEXT("Textures");
	}
	else if (AssetClass->IsChildOf(UMaterial::StaticClass()) || AssetClass->IsChildOf(UMaterialInstance::StaticClass()))
	{
		AssetType = TEXT("Materials");
	}
	else if (AssetClass->IsChildOf(UStaticMesh::StaticClass()))
	{
		AssetType = TEXT("Meshes");
	}
	else if (AssetClass->IsChildOf(USkeletalMesh::StaticClass()))
	{
		AssetType = TEXT("Meshes");
	}
	else if (AssetClass->IsChildOf(UBlueprint::StaticClass()))
	{
		AssetType = TEXT("Blueprints");
	}
	else if (AssetClass->IsChildOf(USoundBase::StaticClass()))
	{
		AssetType = TEXT("Audio");
	}
	ProcessedExpectedPath = ProcessedExpectedPath.Replace(TEXT("{AssetType}"), *AssetType);

	// {AssetName} token
	ProcessedExpectedPath = ProcessedExpectedPath.Replace(TEXT("{AssetName}"), *Asset->GetName());

	// Normalize paths
	FPaths::NormalizeDirectoryName(ProcessedExpectedPath);
	FPaths::NormalizeDirectoryName(CurrentFolderPath);

	// Ensure forward slashes for UE paths - JM
	ProcessedExpectedPath.ReplaceCharInline('\\', '/');
	CurrentFolderPath.ReplaceCharInline('\\', '/');

	// Perform comparison
	if (bExactMatch)
	{
		if (bCaseSensitive)
		{
			return CurrentFolderPath.Equals(ProcessedExpectedPath, ESearchCase::CaseSensitive);
		}
		else
		{
			return CurrentFolderPath.Equals(ProcessedExpectedPath, ESearchCase::IgnoreCase);
		}
	}
	else
	{
		// Subfolders allowed
		if (bCaseSensitive)
		{
			return CurrentFolderPath.StartsWith(ProcessedExpectedPath, ESearchCase::CaseSensitive);
		}
		else
		{
			return CurrentFolderPath.StartsWith(ProcessedExpectedPath, ESearchCase::IgnoreCase);
		}
	}
}
