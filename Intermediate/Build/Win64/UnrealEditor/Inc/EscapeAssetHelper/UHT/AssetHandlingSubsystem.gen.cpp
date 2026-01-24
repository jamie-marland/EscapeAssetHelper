// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetHandling/AssetHandlingSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetHandlingSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetHandlingSubsystem();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetHandlingSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetHandlingSubsystem Function IsAssetDataIgnored **********************
struct Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics
{
	struct FTopLevelAssetPath
	{
		FName PackageName;
		FName AssetName;
	};

	struct AssetHandlingSubsystem_eventIsAssetDataIgnored_Parms
	{
		FAssetData AssetData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Handling|Ignore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if asset data represents an ignored asset.\n\x09 * Will load the asset for accurate metadata check if needed.\n\x09 * @param AssetData The asset data to check\n\x09 * @return True if the asset is ignored\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if asset data represents an ignored asset.\nWill load the asset for accurate metadata check if needed.\n@param AssetData The asset data to check\n@return True if the asset is ignored" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetHandlingSubsystem_eventIsAssetDataIgnored_Parms, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetData_MetaData), NewProp_AssetData_MetaData) };
void Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetHandlingSubsystem_eventIsAssetDataIgnored_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetHandlingSubsystem_eventIsAssetDataIgnored_Parms), &Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::NewProp_AssetData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetHandlingSubsystem, nullptr, "IsAssetDataIgnored", Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::AssetHandlingSubsystem_eventIsAssetDataIgnored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::AssetHandlingSubsystem_eventIsAssetDataIgnored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetHandlingSubsystem::execIsAssetDataIgnored)
{
	P_GET_STRUCT_REF(FAssetData,Z_Param_Out_AssetData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAssetDataIgnored(Z_Param_Out_AssetData);
	P_NATIVE_END;
}
// ********** End Class UAssetHandlingSubsystem Function IsAssetDataIgnored ************************

// ********** Begin Class UAssetHandlingSubsystem Function IsAssetIgnored **************************
struct Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics
{
	struct AssetHandlingSubsystem_eventIsAssetIgnored_Parms
	{
		const UObject* Asset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Handling|Ignore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if an asset is marked as ignored from validation.\n\x09 * Checks both metadata tag and directory ignore list.\n\x09 * @param Asset The asset to check\n\x09 * @return True if the asset is ignored\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if an asset is marked as ignored from validation.\nChecks both metadata tag and directory ignore list.\n@param Asset The asset to check\n@return True if the asset is ignored" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetHandlingSubsystem_eventIsAssetIgnored_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
void Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetHandlingSubsystem_eventIsAssetIgnored_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetHandlingSubsystem_eventIsAssetIgnored_Parms), &Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetHandlingSubsystem, nullptr, "IsAssetIgnored", Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::AssetHandlingSubsystem_eventIsAssetIgnored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::AssetHandlingSubsystem_eventIsAssetIgnored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetHandlingSubsystem::execIsAssetIgnored)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAssetIgnored(Z_Param_Asset);
	P_NATIVE_END;
}
// ********** End Class UAssetHandlingSubsystem Function IsAssetIgnored ****************************

// ********** Begin Class UAssetHandlingSubsystem Function IsAssetIgnoredByPackageName *************
struct Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics
{
	struct AssetHandlingSubsystem_eventIsAssetIgnoredByPackageName_Parms
	{
		FName PackageName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Handling|Ignore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if an asset is ignored by its package name without loading the asset.\n\x09 * Useful for checking during asset enumeration.\n\x09 * @param PackageName The package name to check\n\x09 * @return True if the asset is ignored via metadata or directory\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if an asset is ignored by its package name without loading the asset.\nUseful for checking during asset enumeration.\n@param PackageName The package name to check\n@return True if the asset is ignored via metadata or directory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetHandlingSubsystem_eventIsAssetIgnoredByPackageName_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetHandlingSubsystem_eventIsAssetIgnoredByPackageName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetHandlingSubsystem_eventIsAssetIgnoredByPackageName_Parms), &Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetHandlingSubsystem, nullptr, "IsAssetIgnoredByPackageName", Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::AssetHandlingSubsystem_eventIsAssetIgnoredByPackageName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::AssetHandlingSubsystem_eventIsAssetIgnoredByPackageName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetHandlingSubsystem::execIsAssetIgnoredByPackageName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAssetIgnoredByPackageName(Z_Param_PackageName);
	P_NATIVE_END;
}
// ********** End Class UAssetHandlingSubsystem Function IsAssetIgnoredByPackageName ***************

// ********** Begin Class UAssetHandlingSubsystem Function IsPathIgnored ***************************
struct Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics
{
	struct AssetHandlingSubsystem_eventIsPathIgnored_Parms
	{
		FString AssetPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Handling|Ignore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if an asset path is in an ignored directory.\n\x09 * @param AssetPath The asset path to check (e.g., \"/Game/Characters/Hero\")\n\x09 * @return True if the path is in an ignored directory\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if an asset path is in an ignored directory.\n@param AssetPath The asset path to check (e.g., \"/Game/Characters/Hero\")\n@return True if the path is in an ignored directory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetHandlingSubsystem_eventIsPathIgnored_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetPath_MetaData), NewProp_AssetPath_MetaData) };
void Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetHandlingSubsystem_eventIsPathIgnored_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetHandlingSubsystem_eventIsPathIgnored_Parms), &Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::NewProp_AssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetHandlingSubsystem, nullptr, "IsPathIgnored", Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::AssetHandlingSubsystem_eventIsPathIgnored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::AssetHandlingSubsystem_eventIsPathIgnored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetHandlingSubsystem::execIsPathIgnored)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPathIgnored(Z_Param_AssetPath);
	P_NATIVE_END;
}
// ********** End Class UAssetHandlingSubsystem Function IsPathIgnored *****************************

// ********** Begin Class UAssetHandlingSubsystem Function OpenDocumentation ***********************
struct Z_Construct_UFunction_UAssetHandlingSubsystem_OpenDocumentation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Handling|Documentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Open the plugin documentation URL in the default browser */" },
#endif
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open the plugin documentation URL in the default browser" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetHandlingSubsystem_OpenDocumentation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetHandlingSubsystem, nullptr, "OpenDocumentation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_OpenDocumentation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetHandlingSubsystem_OpenDocumentation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAssetHandlingSubsystem_OpenDocumentation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetHandlingSubsystem_OpenDocumentation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetHandlingSubsystem::execOpenDocumentation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenDocumentation();
	P_NATIVE_END;
}
// ********** End Class UAssetHandlingSubsystem Function OpenDocumentation *************************

// ********** Begin Class UAssetHandlingSubsystem Function OpenStyleGuide **************************
struct Z_Construct_UFunction_UAssetHandlingSubsystem_OpenStyleGuide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Handling|Documentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Open the style guide URL in the default browser */" },
#endif
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open the style guide URL in the default browser" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetHandlingSubsystem_OpenStyleGuide_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetHandlingSubsystem, nullptr, "OpenStyleGuide", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_OpenStyleGuide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetHandlingSubsystem_OpenStyleGuide_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAssetHandlingSubsystem_OpenStyleGuide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetHandlingSubsystem_OpenStyleGuide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetHandlingSubsystem::execOpenStyleGuide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenStyleGuide();
	P_NATIVE_END;
}
// ********** End Class UAssetHandlingSubsystem Function OpenStyleGuide ****************************

// ********** Begin Class UAssetHandlingSubsystem Function OpenURL *********************************
struct Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics
{
	struct AssetHandlingSubsystem_eventOpenURL_Parms
	{
		FString URL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Handling|Documentation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Open any URL in the default browser */" },
#endif
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Open any URL in the default browser" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetHandlingSubsystem_eventOpenURL_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetHandlingSubsystem, nullptr, "OpenURL", Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::AssetHandlingSubsystem_eventOpenURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::AssetHandlingSubsystem_eventOpenURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetHandlingSubsystem::execOpenURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenURL(Z_Param_URL);
	P_NATIVE_END;
}
// ********** End Class UAssetHandlingSubsystem Function OpenURL ***********************************

// ********** Begin Class UAssetHandlingSubsystem Function SetAssetIgnored *************************
struct Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics
{
	struct AssetHandlingSubsystem_eventSetAssetIgnored_Parms
	{
		UObject* Asset;
		bool bIgnored;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Handling|Ignore" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set whether an asset should be ignored from validation.\n\x09 * Applies metadata tag to the asset.\n\x09 * @param Asset The asset to modify\n\x09 * @param bIgnored Whether to ignore the asset\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether an asset should be ignored from validation.\nApplies metadata tag to the asset.\n@param Asset The asset to modify\n@param bIgnored Whether to ignore the asset" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_bIgnored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnored;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetHandlingSubsystem_eventSetAssetIgnored_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::NewProp_bIgnored_SetBit(void* Obj)
{
	((AssetHandlingSubsystem_eventSetAssetIgnored_Parms*)Obj)->bIgnored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::NewProp_bIgnored = { "bIgnored", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetHandlingSubsystem_eventSetAssetIgnored_Parms), &Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::NewProp_bIgnored_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::NewProp_bIgnored,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetHandlingSubsystem, nullptr, "SetAssetIgnored", Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::AssetHandlingSubsystem_eventSetAssetIgnored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::AssetHandlingSubsystem_eventSetAssetIgnored_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetHandlingSubsystem::execSetAssetIgnored)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_GET_UBOOL(Z_Param_bIgnored);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAssetIgnored(Z_Param_Asset,Z_Param_bIgnored);
	P_NATIVE_END;
}
// ********** End Class UAssetHandlingSubsystem Function SetAssetIgnored ***************************

// ********** Begin Class UAssetHandlingSubsystem Function ShowToast *******************************
struct Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics
{
	struct AssetHandlingSubsystem_eventShowToast_Parms
	{
		FText Message;
		float ExpireDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Handling|Notifications" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Show a simple toast notification.\n\x09 * @param Message The message to display\n\x09 * @param ExpireDuration How long to show the notification (default 3.0 seconds)\n\x09 */" },
#endif
		{ "CPP_Default_ExpireDuration", "3.000000" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Show a simple toast notification.\n@param Message The message to display\n@param ExpireDuration How long to show the notification (default 3.0 seconds)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpireDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetHandlingSubsystem_eventShowToast_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::NewProp_ExpireDuration = { "ExpireDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetHandlingSubsystem_eventShowToast_Parms, ExpireDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::NewProp_ExpireDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetHandlingSubsystem, nullptr, "ShowToast", Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::AssetHandlingSubsystem_eventShowToast_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::AssetHandlingSubsystem_eventShowToast_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetHandlingSubsystem::execShowToast)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Message);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ExpireDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowToast(Z_Param_Out_Message,Z_Param_ExpireDuration);
	P_NATIVE_END;
}
// ********** End Class UAssetHandlingSubsystem Function ShowToast *********************************

// ********** Begin Class UAssetHandlingSubsystem **************************************************
void UAssetHandlingSubsystem::StaticRegisterNativesUAssetHandlingSubsystem()
{
	UClass* Class = UAssetHandlingSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsAssetDataIgnored", &UAssetHandlingSubsystem::execIsAssetDataIgnored },
		{ "IsAssetIgnored", &UAssetHandlingSubsystem::execIsAssetIgnored },
		{ "IsAssetIgnoredByPackageName", &UAssetHandlingSubsystem::execIsAssetIgnoredByPackageName },
		{ "IsPathIgnored", &UAssetHandlingSubsystem::execIsPathIgnored },
		{ "OpenDocumentation", &UAssetHandlingSubsystem::execOpenDocumentation },
		{ "OpenStyleGuide", &UAssetHandlingSubsystem::execOpenStyleGuide },
		{ "OpenURL", &UAssetHandlingSubsystem::execOpenURL },
		{ "SetAssetIgnored", &UAssetHandlingSubsystem::execSetAssetIgnored },
		{ "ShowToast", &UAssetHandlingSubsystem::execShowToast },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetHandlingSubsystem;
UClass* UAssetHandlingSubsystem::GetPrivateStaticClass()
{
	using TClass = UAssetHandlingSubsystem;
	if (!Z_Registration_Info_UClass_UAssetHandlingSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetHandlingSubsystem"),
			Z_Registration_Info_UClass_UAssetHandlingSubsystem.InnerSingleton,
			StaticRegisterNativesUAssetHandlingSubsystem,
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
	return Z_Registration_Info_UClass_UAssetHandlingSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetHandlingSubsystem_NoRegister()
{
	return UAssetHandlingSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetHandlingSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Central subsystem for shared asset handling functionality.\n * Provides ignore checking, documentation access, and notification helpers.\n */" },
#endif
		{ "IncludePath", "AssetHandling/AssetHandlingSubsystem.h" },
		{ "ModuleRelativePath", "Public/AssetHandling/AssetHandlingSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Central subsystem for shared asset handling functionality.\nProvides ignore checking, documentation access, and notification helpers." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetDataIgnored, "IsAssetDataIgnored" }, // 3870693107
		{ &Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnored, "IsAssetIgnored" }, // 3655659282
		{ &Z_Construct_UFunction_UAssetHandlingSubsystem_IsAssetIgnoredByPackageName, "IsAssetIgnoredByPackageName" }, // 839835081
		{ &Z_Construct_UFunction_UAssetHandlingSubsystem_IsPathIgnored, "IsPathIgnored" }, // 2635358354
		{ &Z_Construct_UFunction_UAssetHandlingSubsystem_OpenDocumentation, "OpenDocumentation" }, // 1658886824
		{ &Z_Construct_UFunction_UAssetHandlingSubsystem_OpenStyleGuide, "OpenStyleGuide" }, // 3792487913
		{ &Z_Construct_UFunction_UAssetHandlingSubsystem_OpenURL, "OpenURL" }, // 3534127360
		{ &Z_Construct_UFunction_UAssetHandlingSubsystem_SetAssetIgnored, "SetAssetIgnored" }, // 2557284174
		{ &Z_Construct_UFunction_UAssetHandlingSubsystem_ShowToast, "ShowToast" }, // 3812299659
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetHandlingSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetHandlingSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetHandlingSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetHandlingSubsystem_Statics::ClassParams = {
	&UAssetHandlingSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetHandlingSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetHandlingSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetHandlingSubsystem()
{
	if (!Z_Registration_Info_UClass_UAssetHandlingSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetHandlingSubsystem.OuterSingleton, Z_Construct_UClass_UAssetHandlingSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetHandlingSubsystem.OuterSingleton;
}
UAssetHandlingSubsystem::UAssetHandlingSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetHandlingSubsystem);
UAssetHandlingSubsystem::~UAssetHandlingSubsystem() {}
// ********** End Class UAssetHandlingSubsystem ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetHandlingSubsystem, UAssetHandlingSubsystem::StaticClass, TEXT("UAssetHandlingSubsystem"), &Z_Registration_Info_UClass_UAssetHandlingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetHandlingSubsystem), 1793724021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h__Script_EscapeAssetHelper_653723023(TEXT("/Script/EscapeAssetHelper"),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h__Script_EscapeAssetHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h__Script_EscapeAssetHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
