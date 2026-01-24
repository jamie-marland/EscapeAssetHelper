// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetNaming/AssetNamingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetNamingTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ESCAPEASSETHELPER_API UEnum* Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity();
ESCAPEASSETHELPER_API UEnum* Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetNamingConvention();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetValidationResult();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FBatchValidationResult();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FParsedAssetName();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ESourceControlValidationMode **********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceControlValidationMode;
static UEnum* ESourceControlValidationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESourceControlValidationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESourceControlValidationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("ESourceControlValidationMode"));
	}
	return Z_Registration_Info_UEnum_ESourceControlValidationMode.OuterSingleton;
}
template<> ESCAPEASSETHELPER_API UEnum* StaticEnum<ESourceControlValidationMode>()
{
	return ESourceControlValidationMode_StaticEnum();
}
struct Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Block.DisplayName", "Block Submit" },
		{ "Block.Name", "ESourceControlValidationMode::Block" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Source control validation mode for asset naming\n */" },
#endif
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "ESourceControlValidationMode::Disabled" },
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source control validation mode for asset naming" },
#endif
		{ "WarnOnly.DisplayName", "Warn Only" },
		{ "WarnOnly.Name", "ESourceControlValidationMode::WarnOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESourceControlValidationMode::Disabled", (int64)ESourceControlValidationMode::Disabled },
		{ "ESourceControlValidationMode::WarnOnly", (int64)ESourceControlValidationMode::WarnOnly },
		{ "ESourceControlValidationMode::Block", (int64)ESourceControlValidationMode::Block },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	"ESourceControlValidationMode",
	"ESourceControlValidationMode",
	Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode()
{
	if (!Z_Registration_Info_UEnum_ESourceControlValidationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceControlValidationMode.InnerSingleton, Z_Construct_UEnum_EscapeAssetHelper_ESourceControlValidationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESourceControlValidationMode.InnerSingleton;
}
// ********** End Enum ESourceControlValidationMode ************************************************

// ********** Begin Enum EAssetValidationSeverity **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetValidationSeverity;
static UEnum* EAssetValidationSeverity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAssetValidationSeverity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAssetValidationSeverity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("EAssetValidationSeverity"));
	}
	return Z_Registration_Info_UEnum_EAssetValidationSeverity.OuterSingleton;
}
template<> ESCAPEASSETHELPER_API UEnum* StaticEnum<EAssetValidationSeverity>()
{
	return EAssetValidationSeverity_StaticEnum();
}
struct Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Severity level for validation results\n */" },
#endif
		{ "Error.DisplayName", "Error" },
		{ "Error.Name", "EAssetValidationSeverity::Error" },
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
		{ "None.DisplayName", "Valid" },
		{ "None.Name", "EAssetValidationSeverity::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Severity level for validation results" },
#endif
		{ "Warning.DisplayName", "Warning" },
		{ "Warning.Name", "EAssetValidationSeverity::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAssetValidationSeverity::None", (int64)EAssetValidationSeverity::None },
		{ "EAssetValidationSeverity::Warning", (int64)EAssetValidationSeverity::Warning },
		{ "EAssetValidationSeverity::Error", (int64)EAssetValidationSeverity::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	"EAssetValidationSeverity",
	"EAssetValidationSeverity",
	Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity()
{
	if (!Z_Registration_Info_UEnum_EAssetValidationSeverity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetValidationSeverity.InnerSingleton, Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAssetValidationSeverity.InnerSingleton;
}
// ********** End Enum EAssetValidationSeverity ****************************************************

// ********** Begin ScriptStruct FParsedAssetName **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FParsedAssetName;
class UScriptStruct* FParsedAssetName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FParsedAssetName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FParsedAssetName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParsedAssetName, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("ParsedAssetName"));
	}
	return Z_Registration_Info_UScriptStruct_FParsedAssetName.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FParsedAssetName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Parsed components of an asset name following the convention:\n * Prefix_BaseAssetName_Variant_Suffix\n */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parsed components of an asset name following the convention:\nPrefix_BaseAssetName_Variant_Suffix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The prefix (e.g., \"BP\", \"M\", \"T\") without trailing underscore */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The prefix (e.g., \"BP\", \"M\", \"T\") without trailing underscore" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAssetName_MetaData[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The core asset name in PascalCase */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The core asset name in PascalCase" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional variant identifier (e.g., \"01\", \"Red\", \"Large\") */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional variant identifier (e.g., \"01\", \"Red\", \"Large\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The suffix (e.g., \"D\", \"N\") without leading underscore */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The suffix (e.g., \"D\", \"N\") without leading underscore" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the parsing was successful */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the parsing was successful" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseAssetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variant;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Suffix;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParsedAssetName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParsedAssetName, Prefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prefix_MetaData), NewProp_Prefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_BaseAssetName = { "BaseAssetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParsedAssetName, BaseAssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAssetName_MetaData), NewProp_BaseAssetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParsedAssetName, Variant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variant_MetaData), NewProp_Variant_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParsedAssetName, Suffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Suffix_MetaData), NewProp_Suffix_MetaData) };
void Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FParsedAssetName*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FParsedAssetName), &Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParsedAssetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_BaseAssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_Variant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_Suffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewProp_bIsValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParsedAssetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParsedAssetName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	&NewStructOps,
	"ParsedAssetName",
	Z_Construct_UScriptStruct_FParsedAssetName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParsedAssetName_Statics::PropPointers),
	sizeof(FParsedAssetName),
	alignof(FParsedAssetName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParsedAssetName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParsedAssetName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParsedAssetName()
{
	if (!Z_Registration_Info_UScriptStruct_FParsedAssetName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FParsedAssetName.InnerSingleton, Z_Construct_UScriptStruct_FParsedAssetName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FParsedAssetName.InnerSingleton;
}
// ********** End ScriptStruct FParsedAssetName ****************************************************

// ********** Begin ScriptStruct FAssetNamingConvention ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAssetNamingConvention;
class UScriptStruct* FAssetNamingConvention::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetNamingConvention.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAssetNamingConvention.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetNamingConvention, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("AssetNamingConvention"));
	}
	return Z_Registration_Info_UScriptStruct_FAssetNamingConvention.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAssetNamingConvention_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Naming convention rules for a specific asset class\n */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Naming convention rules for a specific asset class" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[] = {
		{ "Category", "Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Prefix to prepend to asset names (e.g., \"BP\", \"M\", \"T\"). Underscore is added automatically. */" },
#endif
		{ "DisplayName", "Prefix" },
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prefix to prepend to asset names (e.g., \"BP\", \"M\", \"T\"). Underscore is added automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidSuffixes_MetaData[] = {
		{ "Category", "Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Valid suffixes for this asset type (e.g., \"D\", \"N\" for textures). Underscore is added automatically. */" },
#endif
		{ "DisplayName", "Valid Suffixes" },
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Valid suffixes for this asset type (e.g., \"D\", \"N\" for textures). Underscore is added automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuffixAliases_MetaData[] = {
		{ "Category", "Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Suffix aliases that redirect to a valid suffix. Key = alias (e.g., \"Albedo\"), Value = canonical suffix (e.g., \"D\").\n\x09 * Underscores are handled automatically.\n\x09 */" },
#endif
		{ "DisplayName", "Suffix Aliases" },
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Suffix aliases that redirect to a valid suffix. Key = alias (e.g., \"Albedo\"), Value = canonical suffix (e.g., \"D\").\nUnderscores are handled automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSuffix_MetaData[] = {
		{ "Category", "Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default suffix to suggest when creating new assets. Underscore is added automatically. */" },
#endif
		{ "DisplayName", "Default Suffix" },
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default suffix to suggest when creating new assets. Underscore is added automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuffixRequired_MetaData[] = {
		{ "Category", "Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether a suffix from ValidSuffixes is required */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether a suffix from ValidSuffixes is required" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidSuffixes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidSuffixes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SuffixAliases_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SuffixAliases_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SuffixAliases;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultSuffix;
	static void NewProp_bSuffixRequired_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuffixRequired;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetNamingConvention>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetNamingConvention, Prefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prefix_MetaData), NewProp_Prefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_ValidSuffixes_Inner = { "ValidSuffixes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_ValidSuffixes = { "ValidSuffixes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetNamingConvention, ValidSuffixes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidSuffixes_MetaData), NewProp_ValidSuffixes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_SuffixAliases_ValueProp = { "SuffixAliases", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_SuffixAliases_Key_KeyProp = { "SuffixAliases_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_SuffixAliases = { "SuffixAliases", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetNamingConvention, SuffixAliases), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuffixAliases_MetaData), NewProp_SuffixAliases_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_DefaultSuffix = { "DefaultSuffix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetNamingConvention, DefaultSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSuffix_MetaData), NewProp_DefaultSuffix_MetaData) };
void Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_bSuffixRequired_SetBit(void* Obj)
{
	((FAssetNamingConvention*)Obj)->bSuffixRequired = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_bSuffixRequired = { "bSuffixRequired", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetNamingConvention), &Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_bSuffixRequired_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuffixRequired_MetaData), NewProp_bSuffixRequired_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_Prefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_ValidSuffixes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_ValidSuffixes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_SuffixAliases_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_SuffixAliases_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_SuffixAliases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_DefaultSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewProp_bSuffixRequired,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	&NewStructOps,
	"AssetNamingConvention",
	Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::PropPointers),
	sizeof(FAssetNamingConvention),
	alignof(FAssetNamingConvention),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetNamingConvention()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetNamingConvention.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAssetNamingConvention.InnerSingleton, Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAssetNamingConvention.InnerSingleton;
}
// ********** End ScriptStruct FAssetNamingConvention **********************************************

// ********** Begin ScriptStruct FAssetValidationResult ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAssetValidationResult;
class UScriptStruct* FAssetValidationResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetValidationResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAssetValidationResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetValidationResult, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("AssetValidationResult"));
	}
	return Z_Registration_Info_UScriptStruct_FAssetValidationResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAssetValidationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Result of validating an asset's name\n */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of validating an asset's name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the asset name is valid according to conventions */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the asset name is valid according to conventions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentName_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The current name of the asset */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The current name of the asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuggestedName_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The suggested corrected name */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The suggested corrected name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidationErrors_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** List of validation errors/issues found */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of validation errors/issues found" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Severity of the validation result */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Severity of the validation result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The asset class that was validated */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The asset class that was validated" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SuggestedName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidationErrors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationErrors;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Severity;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetValidationResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FAssetValidationResult*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetValidationResult), &Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_CurrentName = { "CurrentName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetValidationResult, CurrentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentName_MetaData), NewProp_CurrentName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_SuggestedName = { "SuggestedName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetValidationResult, SuggestedName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuggestedName_MetaData), NewProp_SuggestedName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_ValidationErrors_Inner = { "ValidationErrors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_ValidationErrors = { "ValidationErrors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetValidationResult, ValidationErrors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidationErrors_MetaData), NewProp_ValidationErrors_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetValidationResult, Severity), Z_Construct_UEnum_EscapeAssetHelper_EAssetValidationSeverity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Severity_MetaData), NewProp_Severity_MetaData) }; // 635917349
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetValidationResult, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetClass_MetaData), NewProp_AssetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetValidationResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_CurrentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_SuggestedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_ValidationErrors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_ValidationErrors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_Severity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_Severity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewProp_AssetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetValidationResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetValidationResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	&NewStructOps,
	"AssetValidationResult",
	Z_Construct_UScriptStruct_FAssetValidationResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetValidationResult_Statics::PropPointers),
	sizeof(FAssetValidationResult),
	alignof(FAssetValidationResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetValidationResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetValidationResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetValidationResult()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetValidationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAssetValidationResult.InnerSingleton, Z_Construct_UScriptStruct_FAssetValidationResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAssetValidationResult.InnerSingleton;
}
// ********** End ScriptStruct FAssetValidationResult **********************************************

// ********** Begin ScriptStruct FBatchValidationResult ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBatchValidationResult;
class UScriptStruct* FBatchValidationResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBatchValidationResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBatchValidationResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBatchValidationResult, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("BatchValidationResult"));
	}
	return Z_Registration_Info_UScriptStruct_FBatchValidationResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FBatchValidationResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Result of batch validation for multiple assets\n */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of batch validation for multiple assets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Individual results for each asset */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Individual results for each asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalAssets_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Total number of assets validated */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total number of assets validated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidAssets_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of valid assets */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of valid assets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvalidAssets_MetaData[] = {
		{ "Category", "Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of invalid assets */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of invalid assets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalAssets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValidAssets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InvalidAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBatchValidationResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetValidationResult, METADATA_PARAMS(0, nullptr) }; // 1723365250
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBatchValidationResult, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) }; // 1723365250
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewProp_TotalAssets = { "TotalAssets", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBatchValidationResult, TotalAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalAssets_MetaData), NewProp_TotalAssets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewProp_ValidAssets = { "ValidAssets", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBatchValidationResult, ValidAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidAssets_MetaData), NewProp_ValidAssets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewProp_InvalidAssets = { "InvalidAssets", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBatchValidationResult, InvalidAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvalidAssets_MetaData), NewProp_InvalidAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBatchValidationResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewProp_Results,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewProp_TotalAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewProp_ValidAssets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewProp_InvalidAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchValidationResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBatchValidationResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	&NewStructOps,
	"BatchValidationResult",
	Z_Construct_UScriptStruct_FBatchValidationResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchValidationResult_Statics::PropPointers),
	sizeof(FBatchValidationResult),
	alignof(FBatchValidationResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBatchValidationResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBatchValidationResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBatchValidationResult()
{
	if (!Z_Registration_Info_UScriptStruct_FBatchValidationResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBatchValidationResult.InnerSingleton, Z_Construct_UScriptStruct_FBatchValidationResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FBatchValidationResult.InnerSingleton;
}
// ********** End ScriptStruct FBatchValidationResult **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESourceControlValidationMode_StaticEnum, TEXT("ESourceControlValidationMode"), &Z_Registration_Info_UEnum_ESourceControlValidationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1584798040U) },
		{ EAssetValidationSeverity_StaticEnum, TEXT("EAssetValidationSeverity"), &Z_Registration_Info_UEnum_EAssetValidationSeverity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 635917349U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParsedAssetName::StaticStruct, Z_Construct_UScriptStruct_FParsedAssetName_Statics::NewStructOps, TEXT("ParsedAssetName"), &Z_Registration_Info_UScriptStruct_FParsedAssetName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParsedAssetName), 1016641064U) },
		{ FAssetNamingConvention::StaticStruct, Z_Construct_UScriptStruct_FAssetNamingConvention_Statics::NewStructOps, TEXT("AssetNamingConvention"), &Z_Registration_Info_UScriptStruct_FAssetNamingConvention, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetNamingConvention), 3713468478U) },
		{ FAssetValidationResult::StaticStruct, Z_Construct_UScriptStruct_FAssetValidationResult_Statics::NewStructOps, TEXT("AssetValidationResult"), &Z_Registration_Info_UScriptStruct_FAssetValidationResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetValidationResult), 1723365250U) },
		{ FBatchValidationResult::StaticStruct, Z_Construct_UScriptStruct_FBatchValidationResult_Statics::NewStructOps, TEXT("BatchValidationResult"), &Z_Registration_Info_UScriptStruct_FBatchValidationResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBatchValidationResult), 730907215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h__Script_EscapeAssetHelper_2570009034(TEXT("/Script/EscapeAssetHelper"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h__Script_EscapeAssetHelper_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h__Script_EscapeAssetHelper_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h__Script_EscapeAssetHelper_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h__Script_EscapeAssetHelper_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
