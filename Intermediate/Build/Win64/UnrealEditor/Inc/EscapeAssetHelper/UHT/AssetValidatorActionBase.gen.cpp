// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetValidator/AssetValidatorActionBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetValidatorActionBase() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionBase();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionBase_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetValidatorActionBase Function Apply *********************************
struct AssetValidatorActionBase_eventApply_Parms
{
	UFactory* Factory;
	UObject* Asset;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AssetValidatorActionBase_eventApply_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAssetValidatorActionBase_Apply = FName(TEXT("Apply"));
bool UAssetValidatorActionBase::Apply(UFactory* Factory, UObject* Asset)
{
	UFunction* Func = FindFunctionChecked(NAME_UAssetValidatorActionBase_Apply);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		AssetValidatorActionBase_eventApply_Parms Parms;
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
struct Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Apply the action to the given asset.\n\x09 * @param Factory The factory used to import/create the asset (may be null for non-import operations)\n\x09 * @param Asset The asset to apply the action to\n\x09 * @return True if the action was applied successfully\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply the action to the given asset.\n@param Factory The factory used to import/create the asset (may be null for non-import operations)\n@param Asset The asset to apply the action to\n@return True if the action was applied successfully" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorActionBase_eventApply_Parms, Factory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetValidatorActionBase_eventApply_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetValidatorActionBase_eventApply_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetValidatorActionBase_eventApply_Parms), &Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::NewProp_Factory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::NewProp_Asset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetValidatorActionBase, nullptr, "Apply", Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::PropPointers), sizeof(AssetValidatorActionBase_eventApply_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(AssetValidatorActionBase_eventApply_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetValidatorActionBase_Apply()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetValidatorActionBase_Apply_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetValidatorActionBase::execApply)
{
	P_GET_OBJECT(UFactory,Z_Param_Factory);
	P_GET_OBJECT(UObject,Z_Param_Asset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Apply_Implementation(Z_Param_Factory,Z_Param_Asset);
	P_NATIVE_END;
}
// ********** End Class UAssetValidatorActionBase Function Apply ***********************************

// ********** Begin Class UAssetValidatorActionBase ************************************************
void UAssetValidatorActionBase::StaticRegisterNativesUAssetValidatorActionBase()
{
	UClass* Class = UAssetValidatorActionBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Apply", &UAssetValidatorActionBase::execApply },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorActionBase;
UClass* UAssetValidatorActionBase::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorActionBase;
	if (!Z_Registration_Info_UClass_UAssetValidatorActionBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorActionBase"),
			Z_Registration_Info_UClass_UAssetValidatorActionBase.InnerSingleton,
			StaticRegisterNativesUAssetValidatorActionBase,
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
	return Z_Registration_Info_UClass_UAssetValidatorActionBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorActionBase_NoRegister()
{
	return UAssetValidatorActionBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorActionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for all asset validator actions.\n * Actions are operations that are applied to assets when query conditions are met.\n * Subclass this to create custom actions.\n */" },
#endif
		{ "DisplayName", "Asset Validator Action Base" },
		{ "IncludePath", "AssetValidator/AssetValidatorActionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for all asset validator actions.\nActions are operations that are applied to assets when query conditions are met.\nSubclass this to create custom actions." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetValidatorActionBase_Apply, "Apply" }, // 2571286923
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorActionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetValidatorActionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorActionBase_Statics::ClassParams = {
	&UAssetValidatorActionBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorActionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorActionBase()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorActionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorActionBase.OuterSingleton, Z_Construct_UClass_UAssetValidatorActionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorActionBase.OuterSingleton;
}
UAssetValidatorActionBase::UAssetValidatorActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorActionBase);
UAssetValidatorActionBase::~UAssetValidatorActionBase() {}
// ********** End Class UAssetValidatorActionBase **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetValidatorActionBase, UAssetValidatorActionBase::StaticClass, TEXT("UAssetValidatorActionBase"), &Z_Registration_Info_UClass_UAssetValidatorActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorActionBase), 1493381019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h__Script_EscapeAssetHelper_2381283043(TEXT("/Script/EscapeAssetHelper"),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h__Script_EscapeAssetHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h__Script_EscapeAssetHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
