// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetValidator/AssetValidatorQueryBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetValidatorQueryBase() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryBase();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryBase_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetValidatorQueryBase Function Test ***********************************
struct AssetValidatorQueryBase_eventTest_Parms
{
	UFactory* Factory;
	UObject* Asset;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AssetValidatorQueryBase_eventTest_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAssetValidatorQueryBase_Test = FName(TEXT("Test"));
bool UAssetValidatorQueryBase::Test(UFactory* Factory, UObject* Asset)
{
	UFunction* Func = FindFunctionChecked(NAME_UAssetValidatorQueryBase_Test);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AssetValidatorQueryBase_eventTest_Parms Parms;
		Parms.Factory=Factory;
		Parms.Asset=Asset;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return Test_Implementation(Factory, Asset);
	}
}
struct Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Test whether the query condition is met for the given asset.\n\x09 * @param Factory The factory used to import/create the asset (may be null for non-import operations)\n\x09 * @param Asset The asset to test\n\x09 * @return True if the query condition is satisfied\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueryBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Test whether the query condition is met for the given asset.\n@param Factory The factory used to import/create the asset (may be null for non-import operations)\n@param Asset The asset to test\n@return True if the query condition is satisfied" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Factory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorQueryBase_eventTest_Parms, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorQueryBase_eventTest_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetValidatorQueryBase_eventTest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetValidatorQueryBase_eventTest_Parms), &Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::NewProp_Factory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetValidatorQueryBase, nullptr, "Test", Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::PropPointers), sizeof(AssetValidatorQueryBase_eventTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AssetValidatorQueryBase_eventTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetValidatorQueryBase_Test()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetValidatorQueryBase_Test_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetValidatorQueryBase::execTest)
{
	P_GET_OBJECT(UFactory,Z_Param_Factory);
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Test_Implementation(Z_Param_Factory,Z_Param_Asset);
	P_NATIVE_END;
}
// ********** End Class UAssetValidatorQueryBase Function Test *************************************

// ********** Begin Class UAssetValidatorQueryBase *************************************************
void UAssetValidatorQueryBase::StaticRegisterNativesUAssetValidatorQueryBase()
{
	UClass* Class = UAssetValidatorQueryBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Test", &UAssetValidatorQueryBase::execTest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorQueryBase;
UClass* UAssetValidatorQueryBase::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorQueryBase;
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorQueryBase"),
			Z_Registration_Info_UClass_UAssetValidatorQueryBase.InnerSingleton,
			StaticRegisterNativesUAssetValidatorQueryBase,
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
	return Z_Registration_Info_UClass_UAssetValidatorQueryBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorQueryBase_NoRegister()
{
	return UAssetValidatorQueryBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorQueryBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for all asset validator queries.\n * Queries are conditions that determine whether validation rules should be applied.\n * Subclass this to create custom query conditions.\n */" },
#endif
		{ "DisplayName", "Asset Validator Query Base" },
		{ "IncludePath", "AssetValidator/AssetValidatorQueryBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorQueryBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for all asset validator queries.\nQueries are conditions that determine whether validation rules should be applied.\nSubclass this to create custom query conditions." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetValidatorQueryBase_Test, "Test" }, // 405622031
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorQueryBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetValidatorQueryBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorQueryBase_Statics::ClassParams = {
	&UAssetValidatorQueryBase::StaticClass,
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
	0x003030A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorQueryBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorQueryBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorQueryBase()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorQueryBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorQueryBase.OuterSingleton, Z_Construct_UClass_UAssetValidatorQueryBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorQueryBase.OuterSingleton;
}
UAssetValidatorQueryBase::UAssetValidatorQueryBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorQueryBase);
UAssetValidatorQueryBase::~UAssetValidatorQueryBase() {}
// ********** End Class UAssetValidatorQueryBase ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetValidatorQueryBase, UAssetValidatorQueryBase::StaticClass, TEXT("UAssetValidatorQueryBase"), &Z_Registration_Info_UClass_UAssetValidatorQueryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorQueryBase), 3885797912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h__Script_EscapeAssetHelper_3514476888(TEXT("/Script/EscapeAssetHelper"),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h__Script_EscapeAssetHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h__Script_EscapeAssetHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
