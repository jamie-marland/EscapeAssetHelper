// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetValidator/AssetValidatorTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetValidatorTypes() {}

// ********** Begin Cross Module References ********************************************************
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorRuleBase_NoRegister();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetValidatorRulesArray();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAssetValidatorRulesArray *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAssetValidatorRulesArray;
class UScriptStruct* FAssetValidatorRulesArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetValidatorRulesArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAssetValidatorRulesArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetValidatorRulesArray, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("AssetValidatorRulesArray"));
	}
	return Z_Registration_Info_UScriptStruct_FAssetValidatorRulesArray.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wrapper struct to hold an array of validator rules for a specific asset class.\n * This allows the TMap in settings to hold arrays of rules per class.\n */" },
#endif
		{ "DisplayName", "Asset Validator Rules Array" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper struct to hold an array of validator rules for a specific asset class.\nThis allows the TMap in settings to hold arrays of rules per class." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The rules to apply for this asset class */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The rules to apply for this asset class" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetValidatorRulesArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetValidatorRuleBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetValidatorRulesArray, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rules_MetaData), NewProp_Rules_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::NewProp_Rules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::NewProp_Rules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	&NewStructOps,
	"AssetValidatorRulesArray",
	Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::PropPointers),
	sizeof(FAssetValidatorRulesArray),
	alignof(FAssetValidatorRulesArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetValidatorRulesArray()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetValidatorRulesArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAssetValidatorRulesArray.InnerSingleton, Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAssetValidatorRulesArray.InnerSingleton;
}
// ********** End ScriptStruct FAssetValidatorRulesArray *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorTypes_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetValidatorRulesArray::StaticStruct, Z_Construct_UScriptStruct_FAssetValidatorRulesArray_Statics::NewStructOps, TEXT("AssetValidatorRulesArray"), &Z_Registration_Info_UScriptStruct_FAssetValidatorRulesArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetValidatorRulesArray), 132460075U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorTypes_h__Script_EscapeAssetHelper_2009317357(TEXT("/Script/EscapeAssetHelper"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorTypes_h__Script_EscapeAssetHelper_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorTypes_h__Script_EscapeAssetHelper_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
