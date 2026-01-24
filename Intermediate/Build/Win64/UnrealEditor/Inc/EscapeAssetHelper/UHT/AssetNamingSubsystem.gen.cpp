// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetNaming/AssetNamingSubsystem.h"
#include "AssetNaming/AssetNamingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetNamingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetNamingSubsystem();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetNamingSubsystem_NoRegister();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetValidationResult();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FBatchValidationResult();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetNamingSubsystem Function AutoFixAssetName **************************
struct Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics
{
	struct AssetNamingSubsystem_eventAutoFixAssetName_Parms
	{
		UObject* Asset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Automatically fix an asset's name to match conventions.\n\x09 * @param Asset The asset to fix\n\x09 * @return True if the asset was successfully renamed\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically fix an asset's name to match conventions.\n@param Asset The asset to fix\n@return True if the asset was successfully renamed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingSubsystem_eventAutoFixAssetName_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetNamingSubsystem_eventAutoFixAssetName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetNamingSubsystem_eventAutoFixAssetName_Parms), &Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingSubsystem, nullptr, "AutoFixAssetName", Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::AssetNamingSubsystem_eventAutoFixAssetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::AssetNamingSubsystem_eventAutoFixAssetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingSubsystem::execAutoFixAssetName)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AutoFixAssetName(Z_Param_Asset);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingSubsystem Function AutoFixAssetName ****************************

// ********** Begin Class UAssetNamingSubsystem Function AutoFixAssets *****************************
struct Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetNamingSubsystem_eventAutoFixAssets_Parms
	{
		TArray<FAssetData> Assets;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Automatically fix multiple assets' names.\n\x09 * @param Assets The assets to fix\n\x09 * @return Number of assets successfully renamed\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically fix multiple assets' names.\n@param Assets The assets to fix\n@return Number of assets successfully renamed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingSubsystem_eventAutoFixAssets_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Assets_MetaData), NewProp_Assets_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingSubsystem_eventAutoFixAssets_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingSubsystem, nullptr, "AutoFixAssets", Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::AssetNamingSubsystem_eventAutoFixAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::AssetNamingSubsystem_eventAutoFixAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingSubsystem::execAutoFixAssets)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AutoFixAssets(Z_Param_Out_Assets);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingSubsystem Function AutoFixAssets *******************************

// ********** Begin Class UAssetNamingSubsystem Function ValidateAsset *****************************
struct Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics
{
	struct AssetNamingSubsystem_eventValidateAsset_Parms
	{
		UObject* Asset;
		FAssetValidationResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Validate an asset's name against the configured naming conventions.\n\x09 * @param Asset The asset to validate\n\x09 * @return Validation result with errors and suggested name\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate an asset's name against the configured naming conventions.\n@param Asset The asset to validate\n@return Validation result with errors and suggested name" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingSubsystem_eventValidateAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingSubsystem_eventValidateAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FAssetValidationResult, METADATA_PARAMS(0, nullptr) }; // 1723365250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingSubsystem, nullptr, "ValidateAsset", Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::AssetNamingSubsystem_eventValidateAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::AssetNamingSubsystem_eventValidateAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingSubsystem::execValidateAsset)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FAssetValidationResult*)Z_Param__Result=P_THIS->ValidateAsset(Z_Param_Asset);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingSubsystem Function ValidateAsset *******************************

// ********** Begin Class UAssetNamingSubsystem Function ValidateAssets ****************************
struct Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetNamingSubsystem_eventValidateAssets_Parms
	{
		TArray<FAssetData> Assets;
		FBatchValidationResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Validate multiple assets and show results in Message Log.\n\x09 * @param Assets The assets to validate\n\x09 * @return Batch validation result\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate multiple assets and show results in Message Log.\n@param Assets The assets to validate\n@return Batch validation result" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Assets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingSubsystem_eventValidateAssets_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Assets_MetaData), NewProp_Assets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingSubsystem_eventValidateAssets_Parms, ReturnValue), Z_Construct_UScriptStruct_FBatchValidationResult, METADATA_PARAMS(0, nullptr) }; // 730907215
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::NewProp_Assets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::NewProp_Assets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingSubsystem, nullptr, "ValidateAssets", Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::AssetNamingSubsystem_eventValidateAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::AssetNamingSubsystem_eventValidateAssets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingSubsystem::execValidateAssets)
{
	P_GET_TARRAY_REF(FAssetData,Z_Param_Out_Assets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBatchValidationResult*)Z_Param__Result=P_THIS->ValidateAssets(Z_Param_Out_Assets);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingSubsystem Function ValidateAssets ******************************

// ********** Begin Class UAssetNamingSubsystem ****************************************************
void UAssetNamingSubsystem::StaticRegisterNativesUAssetNamingSubsystem()
{
	UClass* Class = UAssetNamingSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AutoFixAssetName", &UAssetNamingSubsystem::execAutoFixAssetName },
		{ "AutoFixAssets", &UAssetNamingSubsystem::execAutoFixAssets },
		{ "ValidateAsset", &UAssetNamingSubsystem::execValidateAsset },
		{ "ValidateAssets", &UAssetNamingSubsystem::execValidateAssets },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetNamingSubsystem;
UClass* UAssetNamingSubsystem::GetPrivateStaticClass()
{
	using TClass = UAssetNamingSubsystem;
	if (!Z_Registration_Info_UClass_UAssetNamingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetNamingSubsystem"),
			Z_Registration_Info_UClass_UAssetNamingSubsystem.InnerSingleton,
			StaticRegisterNativesUAssetNamingSubsystem,
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
	return Z_Registration_Info_UClass_UAssetNamingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetNamingSubsystem_NoRegister()
{
	return UAssetNamingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetNamingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Editor subsystem that manages asset naming validation.\n * Hooks into import, rename, save, and source control events to enforce naming conventions.\n */" },
#endif
		{ "IncludePath", "AssetNaming/AssetNamingSubsystem.h" },
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor subsystem that manages asset naming validation.\nHooks into import, rename, save, and source control events to enforce naming conventions." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssetName, "AutoFixAssetName" }, // 2021738732
		{ &Z_Construct_UFunction_UAssetNamingSubsystem_AutoFixAssets, "AutoFixAssets" }, // 428651693
		{ &Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAsset, "ValidateAsset" }, // 3069781268
		{ &Z_Construct_UFunction_UAssetNamingSubsystem_ValidateAssets, "ValidateAssets" }, // 3802957322
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetNamingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetNamingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetNamingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetNamingSubsystem_Statics::ClassParams = {
	&UAssetNamingSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetNamingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetNamingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetNamingSubsystem()
{
	if (!Z_Registration_Info_UClass_UAssetNamingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetNamingSubsystem.OuterSingleton, Z_Construct_UClass_UAssetNamingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetNamingSubsystem.OuterSingleton;
}
UAssetNamingSubsystem::UAssetNamingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetNamingSubsystem);
UAssetNamingSubsystem::~UAssetNamingSubsystem() {}
// ********** End Class UAssetNamingSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetNamingSubsystem, UAssetNamingSubsystem::StaticClass, TEXT("UAssetNamingSubsystem"), &Z_Registration_Info_UClass_UAssetNamingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetNamingSubsystem), 2633084771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h__Script_EscapeAssetHelper_555134627(TEXT("/Script/EscapeAssetHelper"),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h__Script_EscapeAssetHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h__Script_EscapeAssetHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
