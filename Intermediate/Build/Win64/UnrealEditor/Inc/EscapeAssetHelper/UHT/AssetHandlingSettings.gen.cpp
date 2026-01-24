// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetHandling/AssetHandlingSettings.h"
#include "AssetNaming/AssetNamingTypes.h"
#include "AssetValidator/AssetValidatorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetHandlingSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetHandlingSettings();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetHandlingSettings_NoRegister();
ESCAPEASSETHELPER_API UEnum* Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetNamingConvention();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetValidatorRulesArray();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetHandlingSettings ***************************************************
void UAssetHandlingSettings::StaticRegisterNativesUAssetHandlingSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetHandlingSettings;
UClass* UAssetHandlingSettings::GetPrivateStaticClass()
{
	using TClass = UAssetHandlingSettings;
	if (!Z_Registration_Info_UClass_UAssetHandlingSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetHandlingSettings"),
			Z_Registration_Info_UClass_UAssetHandlingSettings.InnerSingleton,
			StaticRegisterNativesUAssetHandlingSettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAssetHandlingSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetHandlingSettings_NoRegister()
{
	return UAssetHandlingSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetHandlingSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Unified settings for the Escape Asset Helper plugin.\n * All plugin configuration is centralized here with categories for:\n * - Asset Handling: Global behavior (ignore, validation triggers, overlay, source control)\n * - Asset Naming: Naming convention configuration\n * - Asset Validator: Validation rules configuration\n */" },
#endif
		{ "DisplayName", "Escape Asset Helper" },
		{ "IncludePath", "AssetHandling/AssetHandlingSettings.h" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unified settings for the Escape Asset Helper plugin.\nAll plugin configuration is centralized here with categories for:\n- Asset Handling: Global behavior (ignore, validation triggers, overlay, source control)\n- Asset Naming: Naming convention configuration\n- Asset Validator: Validation rules configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreMetadataTag_MetaData[] = {
		{ "Category", "Asset Handling|Ignore System" },
		{ "DisplayName", "Ignore Metadata Tag" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The metadata tag applied to assets to exclude them from naming and validation checks. Assets with this tag will show as 'Ignored' in the overlay." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredDirectories_MetaData[] = {
		{ "Category", "Asset Handling|Ignore System" },
		{ "DisplayName", "Ignored Directories" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
		{ "RelativeToGameContentDir", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of directories whose assets are excluded from all validation. Useful for third-party content or work-in-progress folders." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValidateOnRename_MetaData[] = {
		{ "Category", "Asset Handling|Validation" },
		{ "DisplayName", "Validate On Rename" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, assets are validated against naming conventions when renamed in the Content Browser." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValidateOnSave_MetaData[] = {
		{ "Category", "Asset Handling|Validation" },
		{ "DisplayName", "Validate On Save" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, assets are validated against naming conventions when saved. Invalid names will be logged to the Message Log." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFixNamingWithoutPrompt_MetaData[] = {
		{ "Category", "Asset Handling|Validation" },
		{ "DisplayName", "Auto-Fix Without Prompt (Naming Conventions)" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, naming convention violations are automatically corrected without showing a confirmation dialog. Use with caution as this renames assets immediately." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFixValidatorWithoutPrompt_MetaData[] = {
		{ "Category", "Asset Handling|Validation" },
		{ "DisplayName", "Auto-Fix Without Prompt (Validator Rules)" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, validator rule actions are automatically applied without prompting. Use with caution as this modifies asset properties immediately." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceControlMode_MetaData[] = {
		{ "Category", "Asset Handling|Source Control" },
		{ "DisplayName", "Source Control Validation Mode" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls behavior when submitting assets with invalid names to source control: Disabled (no check), WarnOnly (log warnings but allow), or Block (prevent submission)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOverlay_MetaData[] = {
		{ "Category", "Asset Handling|Overlay" },
		{ "DisplayName", "Enable Overlay" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show validation status symbols on asset thumbnails in the Content Browser. Displays checkmarks, X marks, or other symbols based on naming convention compliance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidSymbol_MetaData[] = {
		{ "Category", "Asset Handling|Overlay" },
		{ "DisplayName", "Valid Symbol" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unicode character or text displayed on assets that pass naming convention validation. Default is a checkmark." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidColor_MetaData[] = {
		{ "Category", "Asset Handling|Overlay" },
		{ "DisplayName", "Valid Color" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color of the overlay symbol for assets that pass naming convention validation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidSymbol_MetaData[] = {
		{ "Category", "Asset Handling|Overlay" },
		{ "DisplayName", "Invalid Symbol" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unicode character or text displayed on assets that fail naming convention validation. Default is an X mark." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidColor_MetaData[] = {
		{ "Category", "Asset Handling|Overlay" },
		{ "DisplayName", "Invalid Color" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color of the overlay symbol for assets that fail naming convention validation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredSymbol_MetaData[] = {
		{ "Category", "Asset Handling|Overlay" },
		{ "DisplayName", "Ignored Symbol" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unicode character or text displayed on assets marked as ignored from validation. Default is a dash." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredColor_MetaData[] = {
		{ "Category", "Asset Handling|Overlay" },
		{ "DisplayName", "Ignored Color" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color of the overlay symbol for assets marked as ignored from validation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoConventionSymbol_MetaData[] = {
		{ "Category", "Asset Handling|Overlay" },
		{ "DisplayName", "No Convention Symbol" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unicode character or text displayed on assets that have no naming convention defined. Default is a tilde." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoConventionColor_MetaData[] = {
		{ "Category", "Asset Handling|Overlay" },
		{ "DisplayName", "No Convention Color" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color of the overlay symbol for assets with no naming convention defined." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayFontSize_MetaData[] = {
		{ "Category", "Asset Handling|Overlay" },
		{ "ClampMax", "24" },
		{ "ClampMin", "8" },
		{ "DisplayName", "Font Size" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Size of the overlay symbol text on asset thumbnails (8-24 pixels)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StyleGuideURL_MetaData[] = {
		{ "Category", "Asset Handling|Documentation" },
		{ "DisplayName", "Style Guide URL" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL to your team's asset naming style guide. Opened via the Style Guide button in the naming dialog and context menus." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamingConventions_MetaData[] = {
		{ "AllowAbstract", "true" },
		{ "Category", "Asset Naming" },
		{ "DisplayName", "Naming Conventions" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define naming conventions (prefix, suffixes) for each asset class. Inheritance is respected: a convention for UTexture applies to UTexture2D unless a more specific rule exists." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequirePascalCase_MetaData[] = {
		{ "Category", "Asset Naming" },
		{ "DisplayName", "Require PascalCase" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, asset base names must use PascalCase format (e.g., 'MyTexture' not 'mytexture' or 'my_texture'). Applies globally to all conventions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowImportDialog_MetaData[] = {
		{ "Category", "Asset Naming|Import" },
		{ "DisplayName", "Show Import Dialog" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, shows a dialog to review and correct asset names during import. Allows you to customize the name before the asset is created." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFixOnImport_MetaData[] = {
		{ "Category", "Asset Naming|Import" },
		{ "DisplayName", "Auto-Fix On Import" },
		{ "EditCondition", "!bShowImportDialog" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled (and Show Import Dialog is disabled), automatically renames imported assets to match naming conventions without user interaction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAssetValidator_MetaData[] = {
		{ "Category", "Asset Validator" },
		{ "DisplayName", "Enable Asset Validator" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Master switch for the Asset Validator system. When disabled, no validation rules are executed on import or save." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerboseLogging_MetaData[] = {
		{ "Category", "Asset Validator" },
		{ "DisplayName", "Verbose Logging" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, logs detailed information about rule execution, property changes, and validation results to the Output Log. Useful for debugging rules." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSaveAfterApplyingRules_MetaData[] = {
		{ "Category", "Asset Validator" },
		{ "DisplayName", "Save After Applying Rules" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When enabled, assets are automatically saved after validation rules modify their properties. Disable if you prefer to save manually." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Asset Validator" },
		{ "DisplayName", "Validation Rules" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Define validation rules for each asset class. Each rule contains queries (conditions) and actions (modifications). Rules are applied in order during import." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_IgnoreMetadataTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoredDirectories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredDirectories;
	static void NewProp_bValidateOnRename_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateOnRename;
	static void NewProp_bValidateOnSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidateOnSave;
	static void NewProp_bAutoFixNamingWithoutPrompt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFixNamingWithoutPrompt;
	static void NewProp_bAutoFixValidatorWithoutPrompt_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFixValidatorWithoutPrompt;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceControlMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceControlMode;
	static void NewProp_bEnableOverlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOverlay;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidSymbol;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InvalidSymbol;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IgnoredSymbol;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IgnoredColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NoConventionSymbol;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoConventionColor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverlayFontSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StyleGuideURL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NamingConventions_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NamingConventions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NamingConventions;
	static void NewProp_bRequirePascalCase_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequirePascalCase;
	static void NewProp_bShowImportDialog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowImportDialog;
	static void NewProp_bAutoFixOnImport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFixOnImport;
	static void NewProp_bEnableAssetValidator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAssetValidator;
	static void NewProp_bVerboseLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerboseLogging;
	static void NewProp_bSaveAfterApplyingRules_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveAfterApplyingRules;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ValidationRules_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ValidationRules_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ValidationRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetHandlingSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_IgnoreMetadataTag = { "IgnoreMetadataTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, IgnoreMetadataTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoreMetadataTag_MetaData), NewProp_IgnoreMetadataTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_IgnoredDirectories_Inner = { "IgnoredDirectories", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_IgnoredDirectories = { "IgnoredDirectories", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, IgnoredDirectories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredDirectories_MetaData), NewProp_IgnoredDirectories_MetaData) };
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bValidateOnRename_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bValidateOnRename = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bValidateOnRename = { "bValidateOnRename", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bValidateOnRename_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValidateOnRename_MetaData), NewProp_bValidateOnRename_MetaData) };
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bValidateOnSave_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bValidateOnSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bValidateOnSave = { "bValidateOnSave", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bValidateOnSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValidateOnSave_MetaData), NewProp_bValidateOnSave_MetaData) };
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixNamingWithoutPrompt_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bAutoFixNamingWithoutPrompt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixNamingWithoutPrompt = { "bAutoFixNamingWithoutPrompt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixNamingWithoutPrompt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFixNamingWithoutPrompt_MetaData), NewProp_bAutoFixNamingWithoutPrompt_MetaData) };
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixValidatorWithoutPrompt_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bAutoFixValidatorWithoutPrompt = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixValidatorWithoutPrompt = { "bAutoFixValidatorWithoutPrompt", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixValidatorWithoutPrompt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFixValidatorWithoutPrompt_MetaData), NewProp_bAutoFixValidatorWithoutPrompt_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_SourceControlMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_SourceControlMode = { "SourceControlMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, SourceControlMode), Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceControlMode_MetaData), NewProp_SourceControlMode_MetaData) }; // 1584798040
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bEnableOverlay_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bEnableOverlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bEnableOverlay = { "bEnableOverlay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bEnableOverlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOverlay_MetaData), NewProp_bEnableOverlay_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_ValidSymbol = { "ValidSymbol", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, ValidSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidSymbol_MetaData), NewProp_ValidSymbol_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_ValidColor = { "ValidColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, ValidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidColor_MetaData), NewProp_ValidColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_InvalidSymbol = { "InvalidSymbol", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, InvalidSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidSymbol_MetaData), NewProp_InvalidSymbol_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_InvalidColor = { "InvalidColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, InvalidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidColor_MetaData), NewProp_InvalidColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_IgnoredSymbol = { "IgnoredSymbol", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, IgnoredSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredSymbol_MetaData), NewProp_IgnoredSymbol_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_IgnoredColor = { "IgnoredColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, IgnoredColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredColor_MetaData), NewProp_IgnoredColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_NoConventionSymbol = { "NoConventionSymbol", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, NoConventionSymbol), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoConventionSymbol_MetaData), NewProp_NoConventionSymbol_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_NoConventionColor = { "NoConventionColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, NoConventionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoConventionColor_MetaData), NewProp_NoConventionColor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_OverlayFontSize = { "OverlayFontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, OverlayFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayFontSize_MetaData), NewProp_OverlayFontSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_StyleGuideURL = { "StyleGuideURL", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, StyleGuideURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StyleGuideURL_MetaData), NewProp_StyleGuideURL_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_NamingConventions_ValueProp = { "NamingConventions", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAssetNamingConvention, METADATA_PARAMS(0, nullptr) }; // 3713468478
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_NamingConventions_Key_KeyProp = { "NamingConventions_Key", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_NamingConventions = { "NamingConventions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, NamingConventions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamingConventions_MetaData), NewProp_NamingConventions_MetaData) }; // 3713468478
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bRequirePascalCase_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bRequirePascalCase = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bRequirePascalCase = { "bRequirePascalCase", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bRequirePascalCase_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequirePascalCase_MetaData), NewProp_bRequirePascalCase_MetaData) };
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bShowImportDialog_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bShowImportDialog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bShowImportDialog = { "bShowImportDialog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bShowImportDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowImportDialog_MetaData), NewProp_bShowImportDialog_MetaData) };
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixOnImport_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bAutoFixOnImport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixOnImport = { "bAutoFixOnImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixOnImport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoFixOnImport_MetaData), NewProp_bAutoFixOnImport_MetaData) };
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bEnableAssetValidator_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bEnableAssetValidator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bEnableAssetValidator = { "bEnableAssetValidator", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bEnableAssetValidator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAssetValidator_MetaData), NewProp_bEnableAssetValidator_MetaData) };
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bVerboseLogging_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bVerboseLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bVerboseLogging = { "bVerboseLogging", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bVerboseLogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerboseLogging_MetaData), NewProp_bVerboseLogging_MetaData) };
void Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bSaveAfterApplyingRules_SetBit(void* Obj)
{
	((UAssetHandlingSettings*)Obj)->bSaveAfterApplyingRules = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bSaveAfterApplyingRules = { "bSaveAfterApplyingRules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetHandlingSettings), &Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bSaveAfterApplyingRules_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSaveAfterApplyingRules_MetaData), NewProp_bSaveAfterApplyingRules_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_ValidationRules_ValueProp = { "ValidationRules", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAssetValidatorRulesArray, METADATA_PARAMS(0, nullptr) }; // 132460075
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_ValidationRules_Key_KeyProp = { "ValidationRules_Key", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_ValidationRules = { "ValidationRules", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetHandlingSettings, ValidationRules), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationRules_MetaData), NewProp_ValidationRules_MetaData) }; // 132460075
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetHandlingSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_IgnoreMetadataTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_IgnoredDirectories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_IgnoredDirectories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bValidateOnRename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bValidateOnSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixNamingWithoutPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixValidatorWithoutPrompt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_SourceControlMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_SourceControlMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bEnableOverlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_ValidSymbol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_ValidColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_InvalidSymbol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_InvalidColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_IgnoredSymbol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_IgnoredColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_NoConventionSymbol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_NoConventionColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_OverlayFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_StyleGuideURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_NamingConventions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_NamingConventions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_NamingConventions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bRequirePascalCase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bShowImportDialog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bAutoFixOnImport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bEnableAssetValidator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bVerboseLogging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_bSaveAfterApplyingRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_ValidationRules_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_ValidationRules_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetHandlingSettings_Statics::NewProp_ValidationRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetHandlingSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetHandlingSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetHandlingSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetHandlingSettings_Statics::ClassParams = {
	&UAssetHandlingSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetHandlingSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetHandlingSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetHandlingSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetHandlingSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetHandlingSettings()
{
	if (!Z_Registration_Info_UClass_UAssetHandlingSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetHandlingSettings.OuterSingleton, Z_Construct_UClass_UAssetHandlingSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetHandlingSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetHandlingSettings);
UAssetHandlingSettings::~UAssetHandlingSettings() {}
// ********** End Class UAssetHandlingSettings *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetHandlingSettings, UAssetHandlingSettings::StaticClass, TEXT("UAssetHandlingSettings"), &Z_Registration_Info_UClass_UAssetHandlingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetHandlingSettings), 2521745342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h__Script_EscapeAssetHelper_2399136103(TEXT("/Script/EscapeAssetHelper"),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h__Script_EscapeAssetHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h__Script_EscapeAssetHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
