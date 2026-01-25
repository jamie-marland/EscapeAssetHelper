// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetValidator/AssetValidatorSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetValidatorSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorRuleBase_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorSubsystem();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorSubsystem_NoRegister();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetValidatorResult();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FAssetValidatorResult *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAssetValidatorResult;
class UScriptStruct* FAssetValidatorResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetValidatorResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAssetValidatorResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetValidatorResult, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("AssetValidatorResult"));
	}
	return Z_Registration_Info_UScriptStruct_FAssetValidatorResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAssetValidatorResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Result of validating an asset against rules */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result of validating an asset against rules" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPassesValidation_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the asset passes all applicable rules */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the asset passes all applicable rules" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The asset that was validated */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The asset that was validated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchingRules_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Rules that matched this asset (queries passed) */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rules that matched this asset (queries passed)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingChanges_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Description of what would be changed if actions are applied */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of what would be changed if actions are applied" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPassesValidation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassesValidation;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatchingRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MatchingRules;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PendingChanges_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingChanges;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetValidatorResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_bPassesValidation_SetBit(void* Obj)
{
	((FAssetValidatorResult*)Obj)->bPassesValidation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_bPassesValidation = { "bPassesValidation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAssetValidatorResult), &Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_bPassesValidation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPassesValidation_MetaData), NewProp_bPassesValidation_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetValidatorResult, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_MatchingRules_Inner = { "MatchingRules", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetValidatorRuleBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_MatchingRules = { "MatchingRules", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetValidatorResult, MatchingRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchingRules_MetaData), NewProp_MatchingRules_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_PendingChanges_Inner = { "PendingChanges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_PendingChanges = { "PendingChanges", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAssetValidatorResult, PendingChanges), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingChanges_MetaData), NewProp_PendingChanges_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_bPassesValidation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_MatchingRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_MatchingRules,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_PendingChanges_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewProp_PendingChanges,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	&NewStructOps,
	"AssetValidatorResult",
	Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::PropPointers),
	sizeof(FAssetValidatorResult),
	alignof(FAssetValidatorResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetValidatorResult()
{
	if (!Z_Registration_Info_UScriptStruct_FAssetValidatorResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAssetValidatorResult.InnerSingleton, Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAssetValidatorResult.InnerSingleton;
}
// ********** End ScriptStruct FAssetValidatorResult ***********************************************

// ********** Begin Class UAssetValidatorSubsystem Function ApplyRulesToAsset **********************
struct Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics
{
	struct AssetValidatorSubsystem_eventApplyRulesToAsset_Parms
	{
		UObject* Asset;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply all matching rules to an asset.\n\x09 * @param Asset The asset to apply rules to\n\x09 * @return The number of rules that were applied\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply all matching rules to an asset.\n@param Asset The asset to apply rules to\n@return The number of rules that were applied" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorSubsystem_eventApplyRulesToAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorSubsystem_eventApplyRulesToAsset_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetValidatorSubsystem, nullptr, "ApplyRulesToAsset", Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::AssetValidatorSubsystem_eventApplyRulesToAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::AssetValidatorSubsystem_eventApplyRulesToAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetValidatorSubsystem::execApplyRulesToAsset)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->ApplyRulesToAsset(Z_Param_Asset);
	P_NATIVE_END;
}
// ********** End Class UAssetValidatorSubsystem Function ApplyRulesToAsset ************************

// ********** Begin Class UAssetValidatorSubsystem Function DoesAssetPassValidation ****************
struct Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics
{
	struct AssetValidatorSubsystem_eventDoesAssetPassValidation_Parms
	{
		UObject* Asset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if an asset passes all validation rules.\n\x09 * @param Asset The asset to check\n\x09 * @return True if the asset passes all rules or has no applicable rules\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if an asset passes all validation rules.\n@param Asset The asset to check\n@return True if the asset passes all rules or has no applicable rules" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorSubsystem_eventDoesAssetPassValidation_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetValidatorSubsystem_eventDoesAssetPassValidation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetValidatorSubsystem_eventDoesAssetPassValidation_Parms), &Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetValidatorSubsystem, nullptr, "DoesAssetPassValidation", Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::AssetValidatorSubsystem_eventDoesAssetPassValidation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::AssetValidatorSubsystem_eventDoesAssetPassValidation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetValidatorSubsystem::execDoesAssetPassValidation)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesAssetPassValidation(Z_Param_Asset);
	P_NATIVE_END;
}
// ********** End Class UAssetValidatorSubsystem Function DoesAssetPassValidation ******************

// ********** Begin Class UAssetValidatorSubsystem Function GetEditorSubsystemByClass **************
struct Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics
{
	struct AssetValidatorSubsystem_eventGetEditorSubsystemByClass_Parms
	{
		TSubclassOf<UEditorSubsystem> SubsystemClass;
		UEditorSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get any editor subsystem by class. Use this in Blueprint actions to access\n\x09 * editor functionality without triggering the \"Editor Utilities only\" warning.\n\x09 * @param SubsystemClass The subsystem class to get\n\x09 * @return The subsystem instance, or nullptr if not available\n\x09 */" },
#endif
		{ "DeterminesOutputType", "SubsystemClass" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get any editor subsystem by class. Use this in Blueprint actions to access\neditor functionality without triggering the \"Editor Utilities only\" warning.\n@param SubsystemClass The subsystem class to get\n@return The subsystem instance, or nullptr if not available" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SubsystemClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::NewProp_SubsystemClass = { "SubsystemClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorSubsystem_eventGetEditorSubsystemByClass_Parms, SubsystemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEditorSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorSubsystem_eventGetEditorSubsystemByClass_Parms, ReturnValue), Z_Construct_UClass_UEditorSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::NewProp_SubsystemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetValidatorSubsystem, nullptr, "GetEditorSubsystemByClass", Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::AssetValidatorSubsystem_eventGetEditorSubsystemByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::AssetValidatorSubsystem_eventGetEditorSubsystemByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetValidatorSubsystem::execGetEditorSubsystemByClass)
{
	P_GET_OBJECT(UClass,Z_Param_SubsystemClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UEditorSubsystem**)Z_Param__Result=P_THIS->GetEditorSubsystemByClass(Z_Param_SubsystemClass);
	P_NATIVE_END;
}
// ********** End Class UAssetValidatorSubsystem Function GetEditorSubsystemByClass ****************

// ********** Begin Class UAssetValidatorSubsystem Function ValidateAsset **************************
struct Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics
{
	struct AssetValidatorSubsystem_eventValidateAsset_Parms
	{
		UObject* Asset;
		FAssetValidatorResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Validate an asset against all applicable rules.\n\x09 * Does not apply actions, just checks if rules would match.\n\x09 * @param Asset The asset to validate\n\x09 * @return Validation result with matching rules and pending changes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate an asset against all applicable rules.\nDoes not apply actions, just checks if rules would match.\n@param Asset The asset to validate\n@return Validation result with matching rules and pending changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorSubsystem_eventValidateAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorSubsystem_eventValidateAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetValidatorResult, METADATA_PARAMS(0, nullptr) }; // 1710918602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetValidatorSubsystem, nullptr, "ValidateAsset", Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::AssetValidatorSubsystem_eventValidateAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::AssetValidatorSubsystem_eventValidateAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetValidatorSubsystem::execValidateAsset)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetValidatorResult*)Z_Param__Result=P_THIS->ValidateAsset(Z_Param_Asset);
	P_NATIVE_END;
}
// ********** End Class UAssetValidatorSubsystem Function ValidateAsset ****************************

// ********** Begin Class UAssetValidatorSubsystem Function ValidateAssets *************************
struct Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetValidatorSubsystem_eventValidateAssets_Parms
	{
		TArray<FAssetData> Assets;
		TArray<FAssetValidatorResult> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Validate multiple assets.\n\x09 * @param Assets The assets to validate\n\x09 * @return Array of validation results\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate multiple assets.\n@param Assets The assets to validate\n@return Array of validation results" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorSubsystem_eventValidateAssets_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Assets_MetaData), NewProp_Assets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetValidatorResult, METADATA_PARAMS(0, nullptr) }; // 1710918602
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorSubsystem_eventValidateAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1710918602
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetValidatorSubsystem, nullptr, "ValidateAssets", Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::AssetValidatorSubsystem_eventValidateAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::AssetValidatorSubsystem_eventValidateAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetValidatorSubsystem::execValidateAssets)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FAssetValidatorResult>*)Z_Param__Result=P_THIS->ValidateAssets(Z_Param_Out_Assets);
	P_NATIVE_END;
}
// ********** End Class UAssetValidatorSubsystem Function ValidateAssets ***************************

// ********** Begin Class UAssetValidatorSubsystem *************************************************
void UAssetValidatorSubsystem::StaticRegisterNativesUAssetValidatorSubsystem()
{
	UClass* Class = UAssetValidatorSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyRulesToAsset", &UAssetValidatorSubsystem::execApplyRulesToAsset },
		{ "DoesAssetPassValidation", &UAssetValidatorSubsystem::execDoesAssetPassValidation },
		{ "GetEditorSubsystemByClass", &UAssetValidatorSubsystem::execGetEditorSubsystemByClass },
		{ "ValidateAsset", &UAssetValidatorSubsystem::execValidateAsset },
		{ "ValidateAssets", &UAssetValidatorSubsystem::execValidateAssets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorSubsystem;
UClass* UAssetValidatorSubsystem::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorSubsystem;
	if (!Z_Registration_Info_UClass_UAssetValidatorSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorSubsystem"),
			Z_Registration_Info_UClass_UAssetValidatorSubsystem.InnerSingleton,
			StaticRegisterNativesUAssetValidatorSubsystem,
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
	return Z_Registration_Info_UClass_UAssetValidatorSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorSubsystem_NoRegister()
{
	return UAssetValidatorSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Editor subsystem that manages asset validation rules.\n * Validates assets on rename/save and provides notification with fix options.\n */" },
#endif
		{ "IncludePath", "AssetValidator/AssetValidatorSubsystem.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor subsystem that manages asset validation rules.\nValidates assets on rename/save and provides notification with fix options." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetValidatorSubsystem_ApplyRulesToAsset, "ApplyRulesToAsset" }, // 974820342
		{ &Z_Construct_UFunction_UAssetValidatorSubsystem_DoesAssetPassValidation, "DoesAssetPassValidation" }, // 2942536452
		{ &Z_Construct_UFunction_UAssetValidatorSubsystem_GetEditorSubsystemByClass, "GetEditorSubsystemByClass" }, // 1528311906
		{ &Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAsset, "ValidateAsset" }, // 1731862833
		{ &Z_Construct_UFunction_UAssetValidatorSubsystem_ValidateAssets, "ValidateAssets" }, // 3032994528
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetValidatorSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorSubsystem_Statics::ClassParams = {
	&UAssetValidatorSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorSubsystem()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorSubsystem.OuterSingleton, Z_Construct_UClass_UAssetValidatorSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorSubsystem.OuterSingleton;
}
UAssetValidatorSubsystem::UAssetValidatorSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorSubsystem);
UAssetValidatorSubsystem::~UAssetValidatorSubsystem() {}
// ********** End Class UAssetValidatorSubsystem ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetValidatorResult::StaticStruct, Z_Construct_UScriptStruct_FAssetValidatorResult_Statics::NewStructOps, TEXT("AssetValidatorResult"), &Z_Registration_Info_UScriptStruct_FAssetValidatorResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetValidatorResult), 1710918602U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetValidatorSubsystem, UAssetValidatorSubsystem::StaticClass, TEXT("UAssetValidatorSubsystem"), &Z_Registration_Info_UClass_UAssetValidatorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorSubsystem), 1030009818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h__Script_EscapeAssetHelper_3029503909(TEXT("/Script/EscapeAssetHelper"),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h__Script_EscapeAssetHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h__Script_EscapeAssetHelper_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h__Script_EscapeAssetHelper_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h__Script_EscapeAssetHelper_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
