// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetValidator/AssetValidatorRuleBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetValidatorRuleBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionBase_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryBase_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorRule();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorRule_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorRuleBase();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorRuleBase_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetValidatorRuleBase Function Apply ***********************************
struct AssetValidatorRuleBase_eventApply_Parms
{
	UFactory* Factory;
	UObject* Asset;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AssetValidatorRuleBase_eventApply_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAssetValidatorRuleBase_Apply = FName(TEXT("Apply"));
bool UAssetValidatorRuleBase::Apply(UFactory* Factory, UObject* Asset)
{
	UFunction* Func = FindFunctionChecked(NAME_UAssetValidatorRuleBase_Apply);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AssetValidatorRuleBase_eventApply_Parms Parms;
		Parms.Factory=Factory;
		Parms.Asset=Asset;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return Apply_Implementation(Factory, Asset);
	}
}
struct Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply this rule to the given asset.\n\x09 * @param Factory The factory used to import/create the asset (may be null)\n\x09 * @param Asset The asset to apply the rule to\n\x09 * @return True if the rule was applied successfully\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorRuleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply this rule to the given asset.\n@param Factory The factory used to import/create the asset (may be null)\n@param Asset The asset to apply the rule to\n@return True if the rule was applied successfully" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorRuleBase_eventApply_Parms, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorRuleBase_eventApply_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetValidatorRuleBase_eventApply_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetValidatorRuleBase_eventApply_Parms), &Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::NewProp_Factory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetValidatorRuleBase, nullptr, "Apply", Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::PropPointers), sizeof(AssetValidatorRuleBase_eventApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AssetValidatorRuleBase_eventApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetValidatorRuleBase_Apply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetValidatorRuleBase_Apply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetValidatorRuleBase::execApply)
{
	P_GET_OBJECT(UFactory,Z_Param_Factory);
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Apply_Implementation(Z_Param_Factory,Z_Param_Asset);
	P_NATIVE_END;
}
// ********** End Class UAssetValidatorRuleBase Function Apply *************************************

// ********** Begin Class UAssetValidatorRuleBase **************************************************
void UAssetValidatorRuleBase::StaticRegisterNativesUAssetValidatorRuleBase()
{
	UClass* Class = UAssetValidatorRuleBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Apply", &UAssetValidatorRuleBase::execApply },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorRuleBase;
UClass* UAssetValidatorRuleBase::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorRuleBase;
	if (!Z_Registration_Info_UClass_UAssetValidatorRuleBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorRuleBase"),
			Z_Registration_Info_UClass_UAssetValidatorRuleBase.InnerSingleton,
			StaticRegisterNativesUAssetValidatorRuleBase,
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
	return Z_Registration_Info_UClass_UAssetValidatorRuleBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorRuleBase_NoRegister()
{
	return UAssetValidatorRuleBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorRuleBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Abstract base class for asset validator rules.\n * Rules are data assets that combine queries and actions for asset validation.\n * Can be saved and reused across projects.\n */" },
#endif
		{ "DisplayName", "Asset Validator Rule Base" },
		{ "IncludePath", "AssetValidator/AssetValidatorRuleBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorRuleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abstract base class for asset validator rules.\nRules are data assets that combine queries and actions for asset validation.\nCan be saved and reused across projects." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetValidatorRuleBase_Apply, "Apply" }, // 2959239185
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorRuleBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetValidatorRuleBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorRuleBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorRuleBase_Statics::ClassParams = {
	&UAssetValidatorRuleBase::StaticClass,
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
	0x001020A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorRuleBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorRuleBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorRuleBase()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorRuleBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorRuleBase.OuterSingleton, Z_Construct_UClass_UAssetValidatorRuleBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorRuleBase.OuterSingleton;
}
UAssetValidatorRuleBase::UAssetValidatorRuleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorRuleBase);
UAssetValidatorRuleBase::~UAssetValidatorRuleBase() {}
// ********** End Class UAssetValidatorRuleBase ****************************************************

// ********** Begin Class UAssetValidatorRule ******************************************************
void UAssetValidatorRule::StaticRegisterNativesUAssetValidatorRule()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorRule;
UClass* UAssetValidatorRule::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorRule;
	if (!Z_Registration_Info_UClass_UAssetValidatorRule.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorRule"),
			Z_Registration_Info_UClass_UAssetValidatorRule.InnerSingleton,
			StaticRegisterNativesUAssetValidatorRule,
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
	return Z_Registration_Info_UClass_UAssetValidatorRule.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorRule_NoRegister()
{
	return UAssetValidatorRule::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Concrete implementation of an asset validator rule.\n * Contains a list of queries (conditions) and actions (operations).\n * Queries can be combined with AND or OR logic.\n */" },
#endif
		{ "DisplayName", "Asset Validator Rule" },
		{ "IncludePath", "AssetValidator/AssetValidatorRuleBase.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorRuleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Concrete implementation of an asset validator rule.\nContains a list of queries (conditions) and actions (operations).\nQueries can be combined with AND or OR logic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Queries_Inner_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Queries that determine if this rule should apply.\n\x09 * These are conditions that are tested against the asset.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorRuleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries that determine if this rule should apply.\nThese are conditions that are tested against the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Queries_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Queries that determine if this rule should apply.\n\x09 * These are conditions that are tested against the asset.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorRuleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Queries that determine if this rule should apply.\nThese are conditions that are tested against the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Actions to apply when queries pass.\n\x09 * These operations are performed on the asset.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorRuleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actions to apply when queries pass.\nThese operations are performed on the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Actions to apply when queries pass.\n\x09 * These operations are performed on the asset.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorRuleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actions to apply when queries pass.\nThese operations are performed on the asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresAll_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, ALL queries must pass (AND logic).\n\x09 * If false, ANY query passing triggers actions (OR logic).\n\x09 */" },
#endif
		{ "DisplayName", "Require All Queries" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorRuleBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, ALL queries must pass (AND logic).\nIf false, ANY query passing triggers actions (OR logic)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Queries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Queries;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static void NewProp_bRequiresAll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresAll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_Queries_Inner = { "Queries", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetValidatorQueryBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Queries_Inner_MetaData), NewProp_Queries_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_Queries = { "Queries", nullptr, (EPropertyFlags)0x011500800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorRule, Queries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Queries_MetaData), NewProp_Queries_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetValidatorActionBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x011500800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorRule, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
void Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_bRequiresAll_SetBit(void* Obj)
{
	((UAssetValidatorRule*)Obj)->bRequiresAll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_bRequiresAll = { "bRequiresAll", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetValidatorRule), &Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_bRequiresAll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresAll_MetaData), NewProp_bRequiresAll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_Queries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_Queries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorRule_Statics::NewProp_bRequiresAll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorRuleBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorRule_Statics::ClassParams = {
	&UAssetValidatorRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorRule_Statics::PropPointers),
	0,
	0x009020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorRule()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorRule.OuterSingleton, Z_Construct_UClass_UAssetValidatorRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorRule.OuterSingleton;
}
UAssetValidatorRule::UAssetValidatorRule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorRule);
UAssetValidatorRule::~UAssetValidatorRule() {}
// ********** End Class UAssetValidatorRule ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorRuleBase_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetValidatorRuleBase, UAssetValidatorRuleBase::StaticClass, TEXT("UAssetValidatorRuleBase"), &Z_Registration_Info_UClass_UAssetValidatorRuleBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorRuleBase), 3272543911U) },
		{ Z_Construct_UClass_UAssetValidatorRule, UAssetValidatorRule::StaticClass, TEXT("UAssetValidatorRule"), &Z_Registration_Info_UClass_UAssetValidatorRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorRule), 3956285078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorRuleBase_h__Script_EscapeAssetHelper_1350494597(TEXT("/Script/EscapeAssetHelper"),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorRuleBase_h__Script_EscapeAssetHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorRuleBase_h__Script_EscapeAssetHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
