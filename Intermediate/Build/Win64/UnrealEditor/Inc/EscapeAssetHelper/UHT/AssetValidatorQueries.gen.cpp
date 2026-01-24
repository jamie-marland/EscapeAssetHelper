// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetValidator/AssetValidatorQueries.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetValidatorQueries() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryBase();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQuerySourcePathBase();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQuerySourcePathContains();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_NoRegister();
ESCAPEASSETHELPER_API UEnum* Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetValidatorQueryCheckAssetTag ****************************************
void UAssetValidatorQueryCheckAssetTag::StaticRegisterNativesUAssetValidatorQueryCheckAssetTag()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQueryCheckAssetTag;
UClass* UAssetValidatorQueryCheckAssetTag::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQueryCheckAssetTag;
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryCheckAssetTag.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQueryCheckAssetTag"),
			Z_Registration_Info_UClass_UAssetValidatorQueryCheckAssetTag.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQueryCheckAssetTag,
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
	return Z_Registration_Info_UClass_UAssetValidatorQueryCheckAssetTag.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_NoRegister()
{
	return UAssetValidatorQueryCheckAssetTag::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Query that checks if an asset has a specific metadata tag.\n * Returns true if the tag exists and optionally matches a specific value.\n */" },
#endif
		{ "DisplayName", "Check Asset Tag" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that checks if an asset has a specific metadata tag.\nReturns true if the tag exists and optionally matches a specific value." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTagKey_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The metadata tag key to check */" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The metadata tag key to check" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTagValue_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The expected tag value. If empty, only checks for tag existence.\n\x09 * If set, the tag must match this exact value.\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The expected tag value. If empty, only checks for tag existence.\nIf set, the tag must match this exact value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetTagKey;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetTagValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQueryCheckAssetTag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::NewProp_AssetTagKey = { "AssetTagKey", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQueryCheckAssetTag, AssetTagKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTagKey_MetaData), NewProp_AssetTagKey_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::NewProp_AssetTagValue = { "AssetTagValue", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQueryCheckAssetTag, AssetTagValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTagValue_MetaData), NewProp_AssetTagValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::NewProp_AssetTagKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::NewProp_AssetTagValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQueryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::ClassParams = {
	&UAssetValidatorQueryCheckAssetTag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryCheckAssetTag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQueryCheckAssetTag.OuterSingleton, Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQueryCheckAssetTag.OuterSingleton;
}
UAssetValidatorQueryCheckAssetTag::UAssetValidatorQueryCheckAssetTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQueryCheckAssetTag);
UAssetValidatorQueryCheckAssetTag::~UAssetValidatorQueryCheckAssetTag() {}
// ********** End Class UAssetValidatorQueryCheckAssetTag ******************************************

// ********** Begin Class UAssetValidatorQuerySourcePathBase Function GetSourcePath ****************
struct Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics
{
	struct AssetValidatorQuerySourcePathBase_eventGetSourcePath_Parms
	{
		const UObject* Asset;
		FString OutPath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get the source file path for an asset.\n\x09 * Uses reflection to access AssetImportData property.\n\x09 * @param Asset The asset to get the source path for\n\x09 * @param OutPath The output source file path\n\x09 * @return True if a source path was found\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the source file path for an asset.\nUses reflection to access AssetImportData property.\n@param Asset The asset to get the source path for\n@param OutPath The output source file path\n@return True if a source path was found" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutPath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorQuerySourcePathBase_eventGetSourcePath_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_MetaData), NewProp_Asset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::NewProp_OutPath = { "OutPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorQuerySourcePathBase_eventGetSourcePath_Parms, OutPath), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetValidatorQuerySourcePathBase_eventGetSourcePath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetValidatorQuerySourcePathBase_eventGetSourcePath_Parms), &Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::NewProp_OutPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetValidatorQuerySourcePathBase, nullptr, "GetSourcePath", Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::AssetValidatorQuerySourcePathBase_eventGetSourcePath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::AssetValidatorQuerySourcePathBase_eventGetSourcePath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetValidatorQuerySourcePathBase::execGetSourcePath)
{
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetSourcePath(Z_Param_Asset,Z_Param_Out_OutPath);
	P_NATIVE_END;
}
// ********** End Class UAssetValidatorQuerySourcePathBase Function GetSourcePath ******************

// ********** Begin Class UAssetValidatorQuerySourcePathBase ***************************************
void UAssetValidatorQuerySourcePathBase::StaticRegisterNativesUAssetValidatorQuerySourcePathBase()
{
	UClass* Class = UAssetValidatorQuerySourcePathBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSourcePath", &UAssetValidatorQuerySourcePathBase::execGetSourcePath },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathBase;
UClass* UAssetValidatorQuerySourcePathBase::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQuerySourcePathBase;
	if (!Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQuerySourcePathBase"),
			Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathBase.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQuerySourcePathBase,
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
	return Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_NoRegister()
{
	return UAssetValidatorQuerySourcePathBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Abstract base class for source path queries.\n * Provides helper for accessing asset import data.\n */" },
#endif
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abstract base class for source path queries.\nProvides helper for accessing asset import data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaseSensitive_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the comparison should be case-sensitive */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the comparison should be case-sensitive" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bCaseSensitive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaseSensitive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetValidatorQuerySourcePathBase_GetSourcePath, "GetSourcePath" }, // 2848012039
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQuerySourcePathBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::NewProp_bCaseSensitive_SetBit(void* Obj)
{
	((UAssetValidatorQuerySourcePathBase*)Obj)->bCaseSensitive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::NewProp_bCaseSensitive = { "bCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetValidatorQuerySourcePathBase), &Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::NewProp_bCaseSensitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaseSensitive_MetaData), NewProp_bCaseSensitive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::NewProp_bCaseSensitive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQueryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::ClassParams = {
	&UAssetValidatorQuerySourcePathBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::PropPointers),
	0,
	0x003030A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQuerySourcePathBase()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathBase.OuterSingleton, Z_Construct_UClass_UAssetValidatorQuerySourcePathBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathBase.OuterSingleton;
}
UAssetValidatorQuerySourcePathBase::UAssetValidatorQuerySourcePathBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQuerySourcePathBase);
UAssetValidatorQuerySourcePathBase::~UAssetValidatorQuerySourcePathBase() {}
// ********** End Class UAssetValidatorQuerySourcePathBase *****************************************

// ********** Begin Class UAssetValidatorQuerySourceFilenameStartsWith *****************************
void UAssetValidatorQuerySourceFilenameStartsWith::StaticRegisterNativesUAssetValidatorQuerySourceFilenameStartsWith()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameStartsWith;
UClass* UAssetValidatorQuerySourceFilenameStartsWith::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQuerySourceFilenameStartsWith;
	if (!Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameStartsWith.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQuerySourceFilenameStartsWith"),
			Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameStartsWith.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQuerySourceFilenameStartsWith,
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
	return Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameStartsWith.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_NoRegister()
{
	return UAssetValidatorQuerySourceFilenameStartsWith::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Query that checks if the source filename starts with a specific string.\n */" },
#endif
		{ "DisplayName", "Source Filename Starts With" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that checks if the source filename starts with a specific string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartsWith_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The string the filename should start with */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The string the filename should start with" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartsWith;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQuerySourceFilenameStartsWith>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::NewProp_StartsWith = { "StartsWith", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQuerySourceFilenameStartsWith, StartsWith), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartsWith_MetaData), NewProp_StartsWith_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::NewProp_StartsWith,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQuerySourcePathBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::ClassParams = {
	&UAssetValidatorQuerySourceFilenameStartsWith::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameStartsWith.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameStartsWith.OuterSingleton, Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameStartsWith.OuterSingleton;
}
UAssetValidatorQuerySourceFilenameStartsWith::UAssetValidatorQuerySourceFilenameStartsWith(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQuerySourceFilenameStartsWith);
UAssetValidatorQuerySourceFilenameStartsWith::~UAssetValidatorQuerySourceFilenameStartsWith() {}
// ********** End Class UAssetValidatorQuerySourceFilenameStartsWith *******************************

// ********** Begin Class UAssetValidatorQuerySourceFilenameEndsWith *******************************
void UAssetValidatorQuerySourceFilenameEndsWith::StaticRegisterNativesUAssetValidatorQuerySourceFilenameEndsWith()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameEndsWith;
UClass* UAssetValidatorQuerySourceFilenameEndsWith::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQuerySourceFilenameEndsWith;
	if (!Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameEndsWith.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQuerySourceFilenameEndsWith"),
			Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameEndsWith.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQuerySourceFilenameEndsWith,
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
	return Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameEndsWith.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_NoRegister()
{
	return UAssetValidatorQuerySourceFilenameEndsWith::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Query that checks if the source filename ends with a specific string.\n * Useful for detecting texture suffixes like \"_d\", \"_n\", etc.\n */" },
#endif
		{ "DisplayName", "Source Filename Ends With" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that checks if the source filename ends with a specific string.\nUseful for detecting texture suffixes like \"_d\", \"_n\", etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndsWith_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The string the filename should end with */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The string the filename should end with" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EndsWith;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQuerySourceFilenameEndsWith>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::NewProp_EndsWith = { "EndsWith", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQuerySourceFilenameEndsWith, EndsWith), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndsWith_MetaData), NewProp_EndsWith_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::NewProp_EndsWith,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQuerySourcePathBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::ClassParams = {
	&UAssetValidatorQuerySourceFilenameEndsWith::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameEndsWith.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameEndsWith.OuterSingleton, Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameEndsWith.OuterSingleton;
}
UAssetValidatorQuerySourceFilenameEndsWith::UAssetValidatorQuerySourceFilenameEndsWith(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQuerySourceFilenameEndsWith);
UAssetValidatorQuerySourceFilenameEndsWith::~UAssetValidatorQuerySourceFilenameEndsWith() {}
// ********** End Class UAssetValidatorQuerySourceFilenameEndsWith *********************************

// ********** Begin Class UAssetValidatorQuerySourcePathContains ***********************************
void UAssetValidatorQuerySourcePathContains::StaticRegisterNativesUAssetValidatorQuerySourcePathContains()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathContains;
UClass* UAssetValidatorQuerySourcePathContains::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQuerySourcePathContains;
	if (!Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathContains.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQuerySourcePathContains"),
			Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathContains.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQuerySourcePathContains,
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
	return Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathContains.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_NoRegister()
{
	return UAssetValidatorQuerySourcePathContains::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Query that checks if the source path contains a specific substring.\n */" },
#endif
		{ "DisplayName", "Source Path Contains" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that checks if the source path contains a specific substring." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The substring to search for in the source path */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The substring to search for in the source path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Contains;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQuerySourcePathContains>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::NewProp_Contains = { "Contains", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQuerySourcePathContains, Contains), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contains_MetaData), NewProp_Contains_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::NewProp_Contains,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQuerySourcePathBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::ClassParams = {
	&UAssetValidatorQuerySourcePathContains::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQuerySourcePathContains()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathContains.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathContains.OuterSingleton, Z_Construct_UClass_UAssetValidatorQuerySourcePathContains_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathContains.OuterSingleton;
}
UAssetValidatorQuerySourcePathContains::UAssetValidatorQuerySourcePathContains(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQuerySourcePathContains);
UAssetValidatorQuerySourcePathContains::~UAssetValidatorQuerySourcePathContains() {}
// ********** End Class UAssetValidatorQuerySourcePathContains *************************************

// ********** Begin Class UAssetValidatorQuerySourceExtensionMatches *******************************
void UAssetValidatorQuerySourceExtensionMatches::StaticRegisterNativesUAssetValidatorQuerySourceExtensionMatches()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQuerySourceExtensionMatches;
UClass* UAssetValidatorQuerySourceExtensionMatches::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQuerySourceExtensionMatches;
	if (!Z_Registration_Info_UClass_UAssetValidatorQuerySourceExtensionMatches.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQuerySourceExtensionMatches"),
			Z_Registration_Info_UClass_UAssetValidatorQuerySourceExtensionMatches.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQuerySourceExtensionMatches,
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
	return Z_Registration_Info_UClass_UAssetValidatorQuerySourceExtensionMatches.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_NoRegister()
{
	return UAssetValidatorQuerySourceExtensionMatches::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Query that checks if the source file extension matches one of the valid extensions.\n */" },
#endif
		{ "DisplayName", "Source Extension Matches" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that checks if the source file extension matches one of the valid extensions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidExtensions_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Comma-delimited list of valid extensions to match.\n\x09 * Example: \"png,jpg,tga\" or \".png,.jpg,.tga\"\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Comma-delimited list of valid extensions to match.\nExample: \"png,jpg,tga\" or \".png,.jpg,.tga\"" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidExtensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQuerySourceExtensionMatches>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::NewProp_ValidExtensions = { "ValidExtensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQuerySourceExtensionMatches, ValidExtensions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidExtensions_MetaData), NewProp_ValidExtensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::NewProp_ValidExtensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQuerySourcePathBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::ClassParams = {
	&UAssetValidatorQuerySourceExtensionMatches::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQuerySourceExtensionMatches.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQuerySourceExtensionMatches.OuterSingleton, Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQuerySourceExtensionMatches.OuterSingleton;
}
UAssetValidatorQuerySourceExtensionMatches::UAssetValidatorQuerySourceExtensionMatches(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQuerySourceExtensionMatches);
UAssetValidatorQuerySourceExtensionMatches::~UAssetValidatorQuerySourceExtensionMatches() {}
// ********** End Class UAssetValidatorQuerySourceExtensionMatches *********************************

// ********** Begin Class UAssetValidatorQueryDestinationPathContains ******************************
void UAssetValidatorQueryDestinationPathContains::StaticRegisterNativesUAssetValidatorQueryDestinationPathContains()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQueryDestinationPathContains;
UClass* UAssetValidatorQueryDestinationPathContains::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQueryDestinationPathContains;
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryDestinationPathContains.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQueryDestinationPathContains"),
			Z_Registration_Info_UClass_UAssetValidatorQueryDestinationPathContains.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQueryDestinationPathContains,
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
	return Z_Registration_Info_UClass_UAssetValidatorQueryDestinationPathContains.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_NoRegister()
{
	return UAssetValidatorQueryDestinationPathContains::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Query that checks if the asset's destination path (in project) contains a specific string.\n */" },
#endif
		{ "DisplayName", "Destination Path Contains" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that checks if the asset's destination path (in project) contains a specific string." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contains_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The substring to search for in the asset's project path */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The substring to search for in the asset's project path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaseSensitive_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the comparison should be case-sensitive */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the comparison should be case-sensitive" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Contains;
	static void NewProp_bCaseSensitive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaseSensitive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQueryDestinationPathContains>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::NewProp_Contains = { "Contains", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQueryDestinationPathContains, Contains), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contains_MetaData), NewProp_Contains_MetaData) };
void Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::NewProp_bCaseSensitive_SetBit(void* Obj)
{
	((UAssetValidatorQueryDestinationPathContains*)Obj)->bCaseSensitive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::NewProp_bCaseSensitive = { "bCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetValidatorQueryDestinationPathContains), &Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::NewProp_bCaseSensitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaseSensitive_MetaData), NewProp_bCaseSensitive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::NewProp_Contains,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::NewProp_bCaseSensitive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQueryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::ClassParams = {
	&UAssetValidatorQueryDestinationPathContains::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryDestinationPathContains.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQueryDestinationPathContains.OuterSingleton, Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQueryDestinationPathContains.OuterSingleton;
}
UAssetValidatorQueryDestinationPathContains::UAssetValidatorQueryDestinationPathContains(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQueryDestinationPathContains);
UAssetValidatorQueryDestinationPathContains::~UAssetValidatorQueryDestinationPathContains() {}
// ********** End Class UAssetValidatorQueryDestinationPathContains ********************************

// ********** Begin Class UAssetValidatorQueryAssetClassMatches ************************************
void UAssetValidatorQueryAssetClassMatches::StaticRegisterNativesUAssetValidatorQueryAssetClassMatches()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQueryAssetClassMatches;
UClass* UAssetValidatorQueryAssetClassMatches::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQueryAssetClassMatches;
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryAssetClassMatches.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQueryAssetClassMatches"),
			Z_Registration_Info_UClass_UAssetValidatorQueryAssetClassMatches.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQueryAssetClassMatches,
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
	return Z_Registration_Info_UClass_UAssetValidatorQueryAssetClassMatches.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_NoRegister()
{
	return UAssetValidatorQueryAssetClassMatches::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Query that checks if the asset is of a specific class or subclass.\n */" },
#endif
		{ "DisplayName", "Asset Class Matches" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that checks if the asset is of a specific class or subclass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[] = {
		{ "AllowAbstract", "true" },
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The class the asset should be or derive from */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class the asset should be or derive from" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExactMatch_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, asset must be exactly this class. If false, subclasses also match. */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, asset must be exactly this class. If false, subclasses also match." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClass;
	static void NewProp_bExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQueryAssetClassMatches>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQueryAssetClassMatches, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetClass_MetaData), NewProp_AssetClass_MetaData) };
void Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::NewProp_bExactMatch_SetBit(void* Obj)
{
	((UAssetValidatorQueryAssetClassMatches*)Obj)->bExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetValidatorQueryAssetClassMatches), &Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExactMatch_MetaData), NewProp_bExactMatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::NewProp_AssetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::NewProp_bExactMatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQueryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::ClassParams = {
	&UAssetValidatorQueryAssetClassMatches::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryAssetClassMatches.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQueryAssetClassMatches.OuterSingleton, Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQueryAssetClassMatches.OuterSingleton;
}
UAssetValidatorQueryAssetClassMatches::UAssetValidatorQueryAssetClassMatches(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQueryAssetClassMatches);
UAssetValidatorQueryAssetClassMatches::~UAssetValidatorQueryAssetClassMatches() {}
// ********** End Class UAssetValidatorQueryAssetClassMatches **************************************

// ********** Begin Class UAssetValidatorQueryAssetNameMatches *************************************
void UAssetValidatorQueryAssetNameMatches::StaticRegisterNativesUAssetValidatorQueryAssetNameMatches()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQueryAssetNameMatches;
UClass* UAssetValidatorQueryAssetNameMatches::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQueryAssetNameMatches;
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryAssetNameMatches.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQueryAssetNameMatches"),
			Z_Registration_Info_UClass_UAssetValidatorQueryAssetNameMatches.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQueryAssetNameMatches,
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
	return Z_Registration_Info_UClass_UAssetValidatorQueryAssetNameMatches.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_NoRegister()
{
	return UAssetValidatorQueryAssetNameMatches::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Query that checks if the asset name matches a pattern (supports wildcards).\n */" },
#endif
		{ "DisplayName", "Asset Name Matches" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that checks if the asset name matches a pattern (supports wildcards)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pattern to match against the asset name.\n\x09 * Supports wildcards: * matches any characters, ? matches single character.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pattern to match against the asset name.\nSupports wildcards: * matches any characters, ? matches single character." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaseSensitive_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the comparison should be case-sensitive */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the comparison should be case-sensitive" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Pattern;
	static void NewProp_bCaseSensitive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaseSensitive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQueryAssetNameMatches>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQueryAssetNameMatches, Pattern), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pattern_MetaData), NewProp_Pattern_MetaData) };
void Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::NewProp_bCaseSensitive_SetBit(void* Obj)
{
	((UAssetValidatorQueryAssetNameMatches*)Obj)->bCaseSensitive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::NewProp_bCaseSensitive = { "bCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetValidatorQueryAssetNameMatches), &Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::NewProp_bCaseSensitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaseSensitive_MetaData), NewProp_bCaseSensitive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::NewProp_Pattern,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::NewProp_bCaseSensitive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQueryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::ClassParams = {
	&UAssetValidatorQueryAssetNameMatches::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryAssetNameMatches.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQueryAssetNameMatches.OuterSingleton, Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQueryAssetNameMatches.OuterSingleton;
}
UAssetValidatorQueryAssetNameMatches::UAssetValidatorQueryAssetNameMatches(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQueryAssetNameMatches);
UAssetValidatorQueryAssetNameMatches::~UAssetValidatorQueryAssetNameMatches() {}
// ********** End Class UAssetValidatorQueryAssetNameMatches ***************************************

// ********** Begin Enum EPropertyComparisonMode ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyComparisonMode;
static UEnum* EPropertyComparisonMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPropertyComparisonMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPropertyComparisonMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("EPropertyComparisonMode"));
	}
	return Z_Registration_Info_UEnum_EPropertyComparisonMode.OuterSingleton;
}
template<> ESCAPEASSETHELPER_API UEnum* StaticEnum<EPropertyComparisonMode>()
{
	return EPropertyComparisonMode_StaticEnum();
}
struct Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Comparison mode for property value queries */" },
#endif
		{ "Contains.Comment", "/** Property value must contain the expected string (string properties only) */" },
		{ "Contains.DisplayName", "Contains" },
		{ "Contains.Name", "EPropertyComparisonMode::Contains" },
		{ "Contains.ToolTip", "Property value must contain the expected string (string properties only)" },
		{ "Equals.Comment", "/** Property value must equal the expected value */" },
		{ "Equals.DisplayName", "Equals" },
		{ "Equals.Name", "EPropertyComparisonMode::Equals" },
		{ "Equals.ToolTip", "Property value must equal the expected value" },
		{ "GreaterOrEqual.Comment", "/** Property value must be greater than or equal to expected (numeric properties only) */" },
		{ "GreaterOrEqual.DisplayName", "Greater Or Equal" },
		{ "GreaterOrEqual.Name", "EPropertyComparisonMode::GreaterOrEqual" },
		{ "GreaterOrEqual.ToolTip", "Property value must be greater than or equal to expected (numeric properties only)" },
		{ "GreaterThan.Comment", "/** Property value must be greater than the expected value (numeric properties only) */" },
		{ "GreaterThan.DisplayName", "Greater Than" },
		{ "GreaterThan.Name", "EPropertyComparisonMode::GreaterThan" },
		{ "GreaterThan.ToolTip", "Property value must be greater than the expected value (numeric properties only)" },
		{ "LessOrEqual.Comment", "/** Property value must be less than or equal to expected (numeric properties only) */" },
		{ "LessOrEqual.DisplayName", "Less Or Equal" },
		{ "LessOrEqual.Name", "EPropertyComparisonMode::LessOrEqual" },
		{ "LessOrEqual.ToolTip", "Property value must be less than or equal to expected (numeric properties only)" },
		{ "LessThan.Comment", "/** Property value must be less than the expected value (numeric properties only) */" },
		{ "LessThan.DisplayName", "Less Than" },
		{ "LessThan.Name", "EPropertyComparisonMode::LessThan" },
		{ "LessThan.ToolTip", "Property value must be less than the expected value (numeric properties only)" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
		{ "NotEquals.Comment", "/** Property value must not equal the expected value */" },
		{ "NotEquals.DisplayName", "Not Equals" },
		{ "NotEquals.Name", "EPropertyComparisonMode::NotEquals" },
		{ "NotEquals.ToolTip", "Property value must not equal the expected value" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Comparison mode for property value queries" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPropertyComparisonMode::Equals", (int64)EPropertyComparisonMode::Equals },
		{ "EPropertyComparisonMode::NotEquals", (int64)EPropertyComparisonMode::NotEquals },
		{ "EPropertyComparisonMode::Contains", (int64)EPropertyComparisonMode::Contains },
		{ "EPropertyComparisonMode::LessThan", (int64)EPropertyComparisonMode::LessThan },
		{ "EPropertyComparisonMode::GreaterThan", (int64)EPropertyComparisonMode::GreaterThan },
		{ "EPropertyComparisonMode::LessOrEqual", (int64)EPropertyComparisonMode::LessOrEqual },
		{ "EPropertyComparisonMode::GreaterOrEqual", (int64)EPropertyComparisonMode::GreaterOrEqual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	"EPropertyComparisonMode",
	"EPropertyComparisonMode",
	Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode()
{
	if (!Z_Registration_Info_UEnum_EPropertyComparisonMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyComparisonMode.InnerSingleton, Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPropertyComparisonMode.InnerSingleton;
}
// ********** End Enum EPropertyComparisonMode *****************************************************

// ********** Begin Class UAssetValidatorQueryCheckPropertyValue ***********************************
void UAssetValidatorQueryCheckPropertyValue::StaticRegisterNativesUAssetValidatorQueryCheckPropertyValue()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQueryCheckPropertyValue;
UClass* UAssetValidatorQueryCheckPropertyValue::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQueryCheckPropertyValue;
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryCheckPropertyValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQueryCheckPropertyValue"),
			Z_Registration_Info_UClass_UAssetValidatorQueryCheckPropertyValue.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQueryCheckPropertyValue,
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
	return Z_Registration_Info_UClass_UAssetValidatorQueryCheckPropertyValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_NoRegister()
{
	return UAssetValidatorQueryCheckPropertyValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Query that checks if a property on the asset matches an expected value.\n * Uses reflection to access any exposed property.\n */" },
#endif
		{ "DisplayName", "Check Property Value" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that checks if a property on the asset matches an expected value.\nUses reflection to access any exposed property." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the property to check */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the property to check" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedValue_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The expected value as a string.\n\x09 * For booleans: \"true\" or \"false\"\n\x09 * For numbers: numeric string like \"42\" or \"3.14\"\n\x09 * For enums: the enum value name\n\x09 * For objects: the object path or \"None\" for null\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The expected value as a string.\nFor booleans: \"true\" or \"false\"\nFor numbers: numeric string like \"42\" or \"3.14\"\nFor enums: the enum value name\nFor objects: the object path or \"None\" for null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonMode_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How to compare the property value to the expected value */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to compare the property value to the expected value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaseSensitive_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether string comparisons should be case-sensitive */" },
#endif
		{ "EditCondition", "ComparisonMode == EPropertyComparisonMode::Equals || ComparisonMode == EPropertyComparisonMode::NotEquals || ComparisonMode == EPropertyComparisonMode::Contains" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether string comparisons should be case-sensitive" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonMode;
	static void NewProp_bCaseSensitive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaseSensitive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQueryCheckPropertyValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQueryCheckPropertyValue, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_ExpectedValue = { "ExpectedValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQueryCheckPropertyValue, ExpectedValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedValue_MetaData), NewProp_ExpectedValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_ComparisonMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_ComparisonMode = { "ComparisonMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQueryCheckPropertyValue, ComparisonMode), Z_Construct_UEnum_EscapeAssetHelper_EPropertyComparisonMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonMode_MetaData), NewProp_ComparisonMode_MetaData) }; // 2215170155
void Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_bCaseSensitive_SetBit(void* Obj)
{
	((UAssetValidatorQueryCheckPropertyValue*)Obj)->bCaseSensitive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_bCaseSensitive = { "bCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetValidatorQueryCheckPropertyValue), &Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_bCaseSensitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaseSensitive_MetaData), NewProp_bCaseSensitive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_ExpectedValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_ComparisonMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_ComparisonMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::NewProp_bCaseSensitive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQueryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::ClassParams = {
	&UAssetValidatorQueryCheckPropertyValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryCheckPropertyValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQueryCheckPropertyValue.OuterSingleton, Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQueryCheckPropertyValue.OuterSingleton;
}
UAssetValidatorQueryCheckPropertyValue::UAssetValidatorQueryCheckPropertyValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQueryCheckPropertyValue);
UAssetValidatorQueryCheckPropertyValue::~UAssetValidatorQueryCheckPropertyValue() {}
// ********** End Class UAssetValidatorQueryCheckPropertyValue *************************************

// ********** Begin Class UAssetValidatorQueryAssetInExpectedFolder ********************************
void UAssetValidatorQueryAssetInExpectedFolder::StaticRegisterNativesUAssetValidatorQueryAssetInExpectedFolder()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQueryAssetInExpectedFolder;
UClass* UAssetValidatorQueryAssetInExpectedFolder::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQueryAssetInExpectedFolder;
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryAssetInExpectedFolder.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQueryAssetInExpectedFolder"),
			Z_Registration_Info_UClass_UAssetValidatorQueryAssetInExpectedFolder.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQueryAssetInExpectedFolder,
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
	return Z_Registration_Info_UClass_UAssetValidatorQueryAssetInExpectedFolder.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_NoRegister()
{
	return UAssetValidatorQueryAssetInExpectedFolder::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Query that checks if an asset is in the expected folder path.\n * Useful for enforcing folder organization conventions.\n */" },
#endif
		{ "DisplayName", "Asset In Expected Folder" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueries.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Query that checks if an asset is in the expected folder path.\nUseful for enforcing folder organization conventions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedFolderPath_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The expected folder path. Supports tokens:\n\x09 * {AssetClass} - The asset's class name\n\x09 * {AssetType} - Simplified type name (e.g., \"Textures\", \"Materials\")\n\x09 * Example: \"/Game/Art/{AssetType}\" would expect textures in \"/Game/Art/Textures\"\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The expected folder path. Supports tokens:\n{AssetClass} - The asset's class name\n{AssetType} - Simplified type name (e.g., \"Textures\", \"Materials\")\nExample: \"/Game/Art/{AssetType}\" would expect textures in \"/Game/Art/Textures\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExactMatch_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, asset must be in this exact folder. If false, subfolders are allowed. */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, asset must be in this exact folder. If false, subfolders are allowed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaseSensitive_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the comparison should be case-sensitive */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueries.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the comparison should be case-sensitive" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedFolderPath;
	static void NewProp_bExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
	static void NewProp_bCaseSensitive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaseSensitive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQueryAssetInExpectedFolder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::NewProp_ExpectedFolderPath = { "ExpectedFolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorQueryAssetInExpectedFolder, ExpectedFolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedFolderPath_MetaData), NewProp_ExpectedFolderPath_MetaData) };
void Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::NewProp_bExactMatch_SetBit(void* Obj)
{
	((UAssetValidatorQueryAssetInExpectedFolder*)Obj)->bExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetValidatorQueryAssetInExpectedFolder), &Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExactMatch_MetaData), NewProp_bExactMatch_MetaData) };
void Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::NewProp_bCaseSensitive_SetBit(void* Obj)
{
	((UAssetValidatorQueryAssetInExpectedFolder*)Obj)->bCaseSensitive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::NewProp_bCaseSensitive = { "bCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetValidatorQueryAssetInExpectedFolder), &Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::NewProp_bCaseSensitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaseSensitive_MetaData), NewProp_bCaseSensitive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::NewProp_ExpectedFolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::NewProp_bExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::NewProp_bCaseSensitive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorQueryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::ClassParams = {
	&UAssetValidatorQueryAssetInExpectedFolder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryAssetInExpectedFolder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQueryAssetInExpectedFolder.OuterSingleton, Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQueryAssetInExpectedFolder.OuterSingleton;
}
UAssetValidatorQueryAssetInExpectedFolder::UAssetValidatorQueryAssetInExpectedFolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQueryAssetInExpectedFolder);
UAssetValidatorQueryAssetInExpectedFolder::~UAssetValidatorQueryAssetInExpectedFolder() {}
// ********** End Class UAssetValidatorQueryAssetInExpectedFolder **********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueries_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPropertyComparisonMode_StaticEnum, TEXT("EPropertyComparisonMode"), &Z_Registration_Info_UEnum_EPropertyComparisonMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2215170155U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetValidatorQueryCheckAssetTag, UAssetValidatorQueryCheckAssetTag::StaticClass, TEXT("UAssetValidatorQueryCheckAssetTag"), &Z_Registration_Info_UClass_UAssetValidatorQueryCheckAssetTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQueryCheckAssetTag), 2347715513U) },
		{ Z_Construct_UClass_UAssetValidatorQuerySourcePathBase, UAssetValidatorQuerySourcePathBase::StaticClass, TEXT("UAssetValidatorQuerySourcePathBase"), &Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQuerySourcePathBase), 1335320840U) },
		{ Z_Construct_UClass_UAssetValidatorQuerySourceFilenameStartsWith, UAssetValidatorQuerySourceFilenameStartsWith::StaticClass, TEXT("UAssetValidatorQuerySourceFilenameStartsWith"), &Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameStartsWith, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQuerySourceFilenameStartsWith), 2686557980U) },
		{ Z_Construct_UClass_UAssetValidatorQuerySourceFilenameEndsWith, UAssetValidatorQuerySourceFilenameEndsWith::StaticClass, TEXT("UAssetValidatorQuerySourceFilenameEndsWith"), &Z_Registration_Info_UClass_UAssetValidatorQuerySourceFilenameEndsWith, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQuerySourceFilenameEndsWith), 480142843U) },
		{ Z_Construct_UClass_UAssetValidatorQuerySourcePathContains, UAssetValidatorQuerySourcePathContains::StaticClass, TEXT("UAssetValidatorQuerySourcePathContains"), &Z_Registration_Info_UClass_UAssetValidatorQuerySourcePathContains, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQuerySourcePathContains), 266282218U) },
		{ Z_Construct_UClass_UAssetValidatorQuerySourceExtensionMatches, UAssetValidatorQuerySourceExtensionMatches::StaticClass, TEXT("UAssetValidatorQuerySourceExtensionMatches"), &Z_Registration_Info_UClass_UAssetValidatorQuerySourceExtensionMatches, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQuerySourceExtensionMatches), 2743543098U) },
		{ Z_Construct_UClass_UAssetValidatorQueryDestinationPathContains, UAssetValidatorQueryDestinationPathContains::StaticClass, TEXT("UAssetValidatorQueryDestinationPathContains"), &Z_Registration_Info_UClass_UAssetValidatorQueryDestinationPathContains, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQueryDestinationPathContains), 3301877438U) },
		{ Z_Construct_UClass_UAssetValidatorQueryAssetClassMatches, UAssetValidatorQueryAssetClassMatches::StaticClass, TEXT("UAssetValidatorQueryAssetClassMatches"), &Z_Registration_Info_UClass_UAssetValidatorQueryAssetClassMatches, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQueryAssetClassMatches), 1178647745U) },
		{ Z_Construct_UClass_UAssetValidatorQueryAssetNameMatches, UAssetValidatorQueryAssetNameMatches::StaticClass, TEXT("UAssetValidatorQueryAssetNameMatches"), &Z_Registration_Info_UClass_UAssetValidatorQueryAssetNameMatches, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQueryAssetNameMatches), 1418384338U) },
		{ Z_Construct_UClass_UAssetValidatorQueryCheckPropertyValue, UAssetValidatorQueryCheckPropertyValue::StaticClass, TEXT("UAssetValidatorQueryCheckPropertyValue"), &Z_Registration_Info_UClass_UAssetValidatorQueryCheckPropertyValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQueryCheckPropertyValue), 1271326838U) },
		{ Z_Construct_UClass_UAssetValidatorQueryAssetInExpectedFolder, UAssetValidatorQueryAssetInExpectedFolder::StaticClass, TEXT("UAssetValidatorQueryAssetInExpectedFolder"), &Z_Registration_Info_UClass_UAssetValidatorQueryAssetInExpectedFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQueryAssetInExpectedFolder), 3355333395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueries_h__Script_EscapeAssetHelper_3615799794(TEXT("/Script/EscapeAssetHelper"),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueries_h__Script_EscapeAssetHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueries_h__Script_EscapeAssetHelper_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueries_h__Script_EscapeAssetHelper_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueries_h__Script_EscapeAssetHelper_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
