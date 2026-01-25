// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetValidator/AssetValidatorActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetValidatorActions() {}

// ********** Begin Cross Module References ********************************************************
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionBase();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionLogMessage();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionLogMessage_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionMarkModified();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionMarkModified_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionMoveAsset();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionMoveAsset_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionSetAssetTags();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionSetAssetTags_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionSetPropertyValue();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_NoRegister();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionShowNotification();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionShowNotification_NoRegister();
ESCAPEASSETHELPER_API UEnum* Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity();
ESCAPEASSETHELPER_API UEnum* Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAssetValidatorLogVerbosity ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetValidatorLogVerbosity;
static UEnum* EAssetValidatorLogVerbosity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAssetValidatorLogVerbosity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAssetValidatorLogVerbosity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("EAssetValidatorLogVerbosity"));
	}
	return Z_Registration_Info_UEnum_EAssetValidatorLogVerbosity.OuterSingleton;
}
template<> ESCAPEASSETHELPER_API UEnum* StaticEnum<EAssetValidatorLogVerbosity>()
{
	return EAssetValidatorLogVerbosity_StaticEnum();
}
struct Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Log verbosity level for the Log Message action */" },
#endif
		{ "Display.DisplayName", "Display" },
		{ "Display.Name", "EAssetValidatorLogVerbosity::Display" },
		{ "Error.DisplayName", "Error" },
		{ "Error.Name", "EAssetValidatorLogVerbosity::Error" },
		{ "Log.DisplayName", "Log" },
		{ "Log.Name", "EAssetValidatorLogVerbosity::Log" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Log verbosity level for the Log Message action" },
#endif
		{ "Verbose.DisplayName", "Verbose" },
		{ "Verbose.Name", "EAssetValidatorLogVerbosity::Verbose" },
		{ "Warning.DisplayName", "Warning" },
		{ "Warning.Name", "EAssetValidatorLogVerbosity::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAssetValidatorLogVerbosity::Log", (int64)EAssetValidatorLogVerbosity::Log },
		{ "EAssetValidatorLogVerbosity::Warning", (int64)EAssetValidatorLogVerbosity::Warning },
		{ "EAssetValidatorLogVerbosity::Error", (int64)EAssetValidatorLogVerbosity::Error },
		{ "EAssetValidatorLogVerbosity::Display", (int64)EAssetValidatorLogVerbosity::Display },
		{ "EAssetValidatorLogVerbosity::Verbose", (int64)EAssetValidatorLogVerbosity::Verbose },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	"EAssetValidatorLogVerbosity",
	"EAssetValidatorLogVerbosity",
	Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity()
{
	if (!Z_Registration_Info_UEnum_EAssetValidatorLogVerbosity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetValidatorLogVerbosity.InnerSingleton, Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAssetValidatorLogVerbosity.InnerSingleton;
}
// ********** End Enum EAssetValidatorLogVerbosity *************************************************

// ********** Begin Enum EAssetValidatorNotificationSeverity ***************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetValidatorNotificationSeverity;
static UEnum* EAssetValidatorNotificationSeverity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAssetValidatorNotificationSeverity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAssetValidatorNotificationSeverity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity, (UObject*)Z_Construct_UPackage__Script_EscapeAssetHelper(), TEXT("EAssetValidatorNotificationSeverity"));
	}
	return Z_Registration_Info_UEnum_EAssetValidatorNotificationSeverity.OuterSingleton;
}
template<> ESCAPEASSETHELPER_API UEnum* StaticEnum<EAssetValidatorNotificationSeverity>()
{
	return EAssetValidatorNotificationSeverity_StaticEnum();
}
struct Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Notification severity for visual styling */" },
#endif
		{ "Error.DisplayName", "Error" },
		{ "Error.Name", "EAssetValidatorNotificationSeverity::Error" },
		{ "Info.DisplayName", "Info" },
		{ "Info.Name", "EAssetValidatorNotificationSeverity::Info" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "EAssetValidatorNotificationSeverity::Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notification severity for visual styling" },
#endif
		{ "Warning.DisplayName", "Warning" },
		{ "Warning.Name", "EAssetValidatorNotificationSeverity::Warning" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAssetValidatorNotificationSeverity::Info", (int64)EAssetValidatorNotificationSeverity::Info },
		{ "EAssetValidatorNotificationSeverity::Success", (int64)EAssetValidatorNotificationSeverity::Success },
		{ "EAssetValidatorNotificationSeverity::Warning", (int64)EAssetValidatorNotificationSeverity::Warning },
		{ "EAssetValidatorNotificationSeverity::Error", (int64)EAssetValidatorNotificationSeverity::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
	nullptr,
	"EAssetValidatorNotificationSeverity",
	"EAssetValidatorNotificationSeverity",
	Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity()
{
	if (!Z_Registration_Info_UEnum_EAssetValidatorNotificationSeverity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetValidatorNotificationSeverity.InnerSingleton, Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAssetValidatorNotificationSeverity.InnerSingleton;
}
// ********** End Enum EAssetValidatorNotificationSeverity *****************************************

// ********** Begin Class UAssetValidatorActionSetAssetTags ****************************************
void UAssetValidatorActionSetAssetTags::StaticRegisterNativesUAssetValidatorActionSetAssetTags()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorActionSetAssetTags;
UClass* UAssetValidatorActionSetAssetTags::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorActionSetAssetTags;
	if (!Z_Registration_Info_UClass_UAssetValidatorActionSetAssetTags.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorActionSetAssetTags"),
			Z_Registration_Info_UClass_UAssetValidatorActionSetAssetTags.InnerSingleton,
			StaticRegisterNativesUAssetValidatorActionSetAssetTags,
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
	return Z_Registration_Info_UClass_UAssetValidatorActionSetAssetTags.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorActionSetAssetTags_NoRegister()
{
	return UAssetValidatorActionSetAssetTags::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Action that sets metadata tags on an asset.\n * Useful for marking assets as processed or storing custom metadata.\n */" },
#endif
		{ "DisplayName", "Set Asset Tags" },
		{ "IncludePath", "AssetValidator/AssetValidatorActions.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action that sets metadata tags on an asset.\nUseful for marking assets as processed or storing custom metadata." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetTags_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Map of metadata tags to set on the asset.\n\x09 * Key = tag name, Value = tag value.\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
		{ "MultiLine", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of metadata tags to set on the asset.\nKey = tag name, Value = tag value." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetTags_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AssetTags_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AssetTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorActionSetAssetTags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::NewProp_AssetTags_ValueProp = { "AssetTags", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::NewProp_AssetTags_Key_KeyProp = { "AssetTags_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::NewProp_AssetTags = { "AssetTags", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorActionSetAssetTags, AssetTags), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetTags_MetaData), NewProp_AssetTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::NewProp_AssetTags_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::NewProp_AssetTags_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::NewProp_AssetTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::ClassParams = {
	&UAssetValidatorActionSetAssetTags::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorActionSetAssetTags()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorActionSetAssetTags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorActionSetAssetTags.OuterSingleton, Z_Construct_UClass_UAssetValidatorActionSetAssetTags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorActionSetAssetTags.OuterSingleton;
}
UAssetValidatorActionSetAssetTags::UAssetValidatorActionSetAssetTags(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorActionSetAssetTags);
UAssetValidatorActionSetAssetTags::~UAssetValidatorActionSetAssetTags() {}
// ********** End Class UAssetValidatorActionSetAssetTags ******************************************

// ********** Begin Class UAssetValidatorActionRemoveAssetTags *************************************
void UAssetValidatorActionRemoveAssetTags::StaticRegisterNativesUAssetValidatorActionRemoveAssetTags()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorActionRemoveAssetTags;
UClass* UAssetValidatorActionRemoveAssetTags::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorActionRemoveAssetTags;
	if (!Z_Registration_Info_UClass_UAssetValidatorActionRemoveAssetTags.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorActionRemoveAssetTags"),
			Z_Registration_Info_UClass_UAssetValidatorActionRemoveAssetTags.InnerSingleton,
			StaticRegisterNativesUAssetValidatorActionRemoveAssetTags,
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
	return Z_Registration_Info_UClass_UAssetValidatorActionRemoveAssetTags.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_NoRegister()
{
	return UAssetValidatorActionRemoveAssetTags::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Action that removes metadata tags from an asset.\n */" },
#endif
		{ "DisplayName", "Remove Asset Tags" },
		{ "IncludePath", "AssetValidator/AssetValidatorActions.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action that removes metadata tags from an asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagsToRemove_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of metadata tag keys to remove from the asset.\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of metadata tag keys to remove from the asset." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TagsToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TagsToRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorActionRemoveAssetTags>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::NewProp_TagsToRemove_Inner = { "TagsToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::NewProp_TagsToRemove = { "TagsToRemove", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorActionRemoveAssetTags, TagsToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagsToRemove_MetaData), NewProp_TagsToRemove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::NewProp_TagsToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::NewProp_TagsToRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::ClassParams = {
	&UAssetValidatorActionRemoveAssetTags::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorActionRemoveAssetTags.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorActionRemoveAssetTags.OuterSingleton, Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorActionRemoveAssetTags.OuterSingleton;
}
UAssetValidatorActionRemoveAssetTags::UAssetValidatorActionRemoveAssetTags(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorActionRemoveAssetTags);
UAssetValidatorActionRemoveAssetTags::~UAssetValidatorActionRemoveAssetTags() {}
// ********** End Class UAssetValidatorActionRemoveAssetTags ***************************************

// ********** Begin Class UAssetValidatorActionLogMessage ******************************************
void UAssetValidatorActionLogMessage::StaticRegisterNativesUAssetValidatorActionLogMessage()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorActionLogMessage;
UClass* UAssetValidatorActionLogMessage::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorActionLogMessage;
	if (!Z_Registration_Info_UClass_UAssetValidatorActionLogMessage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorActionLogMessage"),
			Z_Registration_Info_UClass_UAssetValidatorActionLogMessage.InnerSingleton,
			StaticRegisterNativesUAssetValidatorActionLogMessage,
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
	return Z_Registration_Info_UClass_UAssetValidatorActionLogMessage.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorActionLogMessage_NoRegister()
{
	return UAssetValidatorActionLogMessage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Action that logs a message to the output log.\n * Useful for debugging or creating audit trails.\n */" },
#endif
		{ "DisplayName", "Log Message" },
		{ "IncludePath", "AssetValidator/AssetValidatorActions.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action that logs a message to the output log.\nUseful for debugging or creating audit trails." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Message to log. Supports format tokens:\n\x09 * {AssetName} - The asset's name\n\x09 * {AssetPath} - The asset's full path\n\x09 * {AssetClass} - The asset's class name\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message to log. Supports format tokens:\n{AssetName} - The asset's name\n{AssetPath} - The asset's full path\n{AssetClass} - The asset's class name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Verbosity_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Log verbosity level */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Log verbosity level" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Verbosity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Verbosity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorActionLogMessage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorActionLogMessage, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::NewProp_Verbosity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::NewProp_Verbosity = { "Verbosity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorActionLogMessage, Verbosity), Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorLogVerbosity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Verbosity_MetaData), NewProp_Verbosity_MetaData) }; // 498825240
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::NewProp_Verbosity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::NewProp_Verbosity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::ClassParams = {
	&UAssetValidatorActionLogMessage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorActionLogMessage()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorActionLogMessage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorActionLogMessage.OuterSingleton, Z_Construct_UClass_UAssetValidatorActionLogMessage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorActionLogMessage.OuterSingleton;
}
UAssetValidatorActionLogMessage::UAssetValidatorActionLogMessage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorActionLogMessage);
UAssetValidatorActionLogMessage::~UAssetValidatorActionLogMessage() {}
// ********** End Class UAssetValidatorActionLogMessage ********************************************

// ********** Begin Class UAssetValidatorActionMarkModified ****************************************
void UAssetValidatorActionMarkModified::StaticRegisterNativesUAssetValidatorActionMarkModified()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorActionMarkModified;
UClass* UAssetValidatorActionMarkModified::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorActionMarkModified;
	if (!Z_Registration_Info_UClass_UAssetValidatorActionMarkModified.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorActionMarkModified"),
			Z_Registration_Info_UClass_UAssetValidatorActionMarkModified.InnerSingleton,
			StaticRegisterNativesUAssetValidatorActionMarkModified,
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
	return Z_Registration_Info_UClass_UAssetValidatorActionMarkModified.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorActionMarkModified_NoRegister()
{
	return UAssetValidatorActionMarkModified::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorActionMarkModified_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Action that marks the asset as needing to be saved.\n * Useful after modifying asset properties programmatically.\n */" },
#endif
		{ "DisplayName", "Mark Asset Modified" },
		{ "IncludePath", "AssetValidator/AssetValidatorActions.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action that marks the asset as needing to be saved.\nUseful after modifying asset properties programmatically." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorActionMarkModified>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetValidatorActionMarkModified_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionMarkModified_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorActionMarkModified_Statics::ClassParams = {
	&UAssetValidatorActionMarkModified::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionMarkModified_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorActionMarkModified_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorActionMarkModified()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorActionMarkModified.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorActionMarkModified.OuterSingleton, Z_Construct_UClass_UAssetValidatorActionMarkModified_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorActionMarkModified.OuterSingleton;
}
UAssetValidatorActionMarkModified::UAssetValidatorActionMarkModified(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorActionMarkModified);
UAssetValidatorActionMarkModified::~UAssetValidatorActionMarkModified() {}
// ********** End Class UAssetValidatorActionMarkModified ******************************************

// ********** Begin Class UAssetValidatorActionSetPropertyValue ************************************
void UAssetValidatorActionSetPropertyValue::StaticRegisterNativesUAssetValidatorActionSetPropertyValue()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorActionSetPropertyValue;
UClass* UAssetValidatorActionSetPropertyValue::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorActionSetPropertyValue;
	if (!Z_Registration_Info_UClass_UAssetValidatorActionSetPropertyValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorActionSetPropertyValue"),
			Z_Registration_Info_UClass_UAssetValidatorActionSetPropertyValue.InnerSingleton,
			StaticRegisterNativesUAssetValidatorActionSetPropertyValue,
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
	return Z_Registration_Info_UClass_UAssetValidatorActionSetPropertyValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_NoRegister()
{
	return UAssetValidatorActionSetPropertyValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Action that sets a property value on the asset using reflection.\n * Powerful action for modifying any exposed property.\n */" },
#endif
		{ "DisplayName", "Set Property Value" },
		{ "IncludePath", "AssetValidator/AssetValidatorActions.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action that sets a property value on the asset using reflection.\nPowerful action for modifying any exposed property." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The name of the property to set */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the property to set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValue_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The value to set as a string.\n\x09 * For booleans: \"true\" or \"false\"\n\x09 * For numbers: numeric string like \"42\" or \"3.14\"\n\x09 * For enums: the enum value name\n\x09 * For objects: the object path\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The value to set as a string.\nFor booleans: \"true\" or \"false\"\nFor numbers: numeric string like \"42\" or \"3.14\"\nFor enums: the enum value name\nFor objects: the object path" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorActionSetPropertyValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorActionSetPropertyValue, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorActionSetPropertyValue, PropertyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyValue_MetaData), NewProp_PropertyValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::NewProp_PropertyValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::ClassParams = {
	&UAssetValidatorActionSetPropertyValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorActionSetPropertyValue()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorActionSetPropertyValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorActionSetPropertyValue.OuterSingleton, Z_Construct_UClass_UAssetValidatorActionSetPropertyValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorActionSetPropertyValue.OuterSingleton;
}
UAssetValidatorActionSetPropertyValue::UAssetValidatorActionSetPropertyValue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorActionSetPropertyValue);
UAssetValidatorActionSetPropertyValue::~UAssetValidatorActionSetPropertyValue() {}
// ********** End Class UAssetValidatorActionSetPropertyValue **************************************

// ********** Begin Class UAssetValidatorActionShowNotification ************************************
void UAssetValidatorActionShowNotification::StaticRegisterNativesUAssetValidatorActionShowNotification()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorActionShowNotification;
UClass* UAssetValidatorActionShowNotification::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorActionShowNotification;
	if (!Z_Registration_Info_UClass_UAssetValidatorActionShowNotification.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorActionShowNotification"),
			Z_Registration_Info_UClass_UAssetValidatorActionShowNotification.InnerSingleton,
			StaticRegisterNativesUAssetValidatorActionShowNotification,
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
	return Z_Registration_Info_UClass_UAssetValidatorActionShowNotification.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorActionShowNotification_NoRegister()
{
	return UAssetValidatorActionShowNotification::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Action that shows a notification toast to the user.\n * Useful for notifying users about asset validation status.\n */" },
#endif
		{ "DisplayName", "Show Notification" },
		{ "IncludePath", "AssetValidator/AssetValidatorActions.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action that shows a notification toast to the user.\nUseful for notifying users about asset validation status." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Message to display. Supports format tokens:\n\x09 * {AssetName} - The asset's name\n\x09 * {AssetPath} - The asset's full path\n\x09 * {AssetClass} - The asset's class name\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
		{ "MultiLine", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Message to display. Supports format tokens:\n{AssetName} - The asset's name\n{AssetPath} - The asset's full path\n{AssetClass} - The asset's class name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Visual severity of the notification */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Visual severity of the notification" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpireDuration_MetaData[] = {
		{ "Category", "Asset Validator" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How long the notification should stay visible (in seconds) */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long the notification should stay visible (in seconds)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Severity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExpireDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorActionShowNotification>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorActionShowNotification, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorActionShowNotification, Severity), Z_Construct_UEnum_EscapeAssetHelper_EAssetValidatorNotificationSeverity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Severity_MetaData), NewProp_Severity_MetaData) }; // 3143284366
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::NewProp_ExpireDuration = { "ExpireDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorActionShowNotification, ExpireDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpireDuration_MetaData), NewProp_ExpireDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::NewProp_Severity_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::NewProp_Severity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::NewProp_ExpireDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::ClassParams = {
	&UAssetValidatorActionShowNotification::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorActionShowNotification()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorActionShowNotification.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorActionShowNotification.OuterSingleton, Z_Construct_UClass_UAssetValidatorActionShowNotification_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorActionShowNotification.OuterSingleton;
}
UAssetValidatorActionShowNotification::UAssetValidatorActionShowNotification(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorActionShowNotification);
UAssetValidatorActionShowNotification::~UAssetValidatorActionShowNotification() {}
// ********** End Class UAssetValidatorActionShowNotification **************************************

// ********** Begin Class UAssetValidatorActionMoveAsset *******************************************
void UAssetValidatorActionMoveAsset::StaticRegisterNativesUAssetValidatorActionMoveAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetValidatorActionMoveAsset;
UClass* UAssetValidatorActionMoveAsset::GetPrivateStaticClass()
{
	using TClass = UAssetValidatorActionMoveAsset;
	if (!Z_Registration_Info_UClass_UAssetValidatorActionMoveAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetValidatorActionMoveAsset"),
			Z_Registration_Info_UClass_UAssetValidatorActionMoveAsset.InnerSingleton,
			StaticRegisterNativesUAssetValidatorActionMoveAsset,
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
	return Z_Registration_Info_UClass_UAssetValidatorActionMoveAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetValidatorActionMoveAsset_NoRegister()
{
	return UAssetValidatorActionMoveAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Action that moves an asset to a specified folder.\n * Useful for organizing assets according to project conventions.\n */" },
#endif
		{ "DisplayName", "Move Asset" },
		{ "IncludePath", "AssetValidator/AssetValidatorActions.h" },
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action that moves an asset to a specified folder.\nUseful for organizing assets according to project conventions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetFolderPath_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Target folder path. Supports tokens:\n\x09 * {AssetClass} - The asset's class name\n\x09 * {AssetType} - Simplified type name (e.g., \"Textures\", \"Materials\")\n\x09 * {AssetName} - The asset's name\n\x09 * Example: \"/Game/Art/{AssetType}\" moves textures to \"/Game/Art/Textures\"\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Target folder path. Supports tokens:\n{AssetClass} - The asset's class name\n{AssetType} - Simplified type name (e.g., \"Textures\", \"Materials\")\n{AssetName} - The asset's name\nExample: \"/Game/Art/{AssetType}\" moves textures to \"/Game/Art/Textures\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateFolderIfMissing_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, creates the target folder if it doesn't exist */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, creates the target folder if it doesn't exist" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowConfirmation_MetaData[] = {
		{ "Category", "Asset Validator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, shows a confirmation dialog before moving */" },
#endif
		{ "ModuleRelativePath", "Public/AssetValidator/AssetValidatorActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, shows a confirmation dialog before moving" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetFolderPath;
	static void NewProp_bCreateFolderIfMissing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateFolderIfMissing;
	static void NewProp_bShowConfirmation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConfirmation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetValidatorActionMoveAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::NewProp_TargetFolderPath = { "TargetFolderPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAssetValidatorActionMoveAsset, TargetFolderPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetFolderPath_MetaData), NewProp_TargetFolderPath_MetaData) };
void Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::NewProp_bCreateFolderIfMissing_SetBit(void* Obj)
{
	((UAssetValidatorActionMoveAsset*)Obj)->bCreateFolderIfMissing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::NewProp_bCreateFolderIfMissing = { "bCreateFolderIfMissing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetValidatorActionMoveAsset), &Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::NewProp_bCreateFolderIfMissing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateFolderIfMissing_MetaData), NewProp_bCreateFolderIfMissing_MetaData) };
void Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::NewProp_bShowConfirmation_SetBit(void* Obj)
{
	((UAssetValidatorActionMoveAsset*)Obj)->bShowConfirmation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::NewProp_bShowConfirmation = { "bShowConfirmation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAssetValidatorActionMoveAsset), &Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::NewProp_bShowConfirmation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowConfirmation_MetaData), NewProp_bShowConfirmation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::NewProp_TargetFolderPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::NewProp_bCreateFolderIfMissing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::NewProp_bShowConfirmation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetValidatorActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::ClassParams = {
	&UAssetValidatorActionMoveAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetValidatorActionMoveAsset()
{
	if (!Z_Registration_Info_UClass_UAssetValidatorActionMoveAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetValidatorActionMoveAsset.OuterSingleton, Z_Construct_UClass_UAssetValidatorActionMoveAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetValidatorActionMoveAsset.OuterSingleton;
}
UAssetValidatorActionMoveAsset::UAssetValidatorActionMoveAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetValidatorActionMoveAsset);
UAssetValidatorActionMoveAsset::~UAssetValidatorActionMoveAsset() {}
// ********** End Class UAssetValidatorActionMoveAsset *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActions_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAssetValidatorLogVerbosity_StaticEnum, TEXT("EAssetValidatorLogVerbosity"), &Z_Registration_Info_UEnum_EAssetValidatorLogVerbosity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 498825240U) },
		{ EAssetValidatorNotificationSeverity_StaticEnum, TEXT("EAssetValidatorNotificationSeverity"), &Z_Registration_Info_UEnum_EAssetValidatorNotificationSeverity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3143284366U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetValidatorActionSetAssetTags, UAssetValidatorActionSetAssetTags::StaticClass, TEXT("UAssetValidatorActionSetAssetTags"), &Z_Registration_Info_UClass_UAssetValidatorActionSetAssetTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorActionSetAssetTags), 1824315870U) },
		{ Z_Construct_UClass_UAssetValidatorActionRemoveAssetTags, UAssetValidatorActionRemoveAssetTags::StaticClass, TEXT("UAssetValidatorActionRemoveAssetTags"), &Z_Registration_Info_UClass_UAssetValidatorActionRemoveAssetTags, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorActionRemoveAssetTags), 1194616810U) },
		{ Z_Construct_UClass_UAssetValidatorActionLogMessage, UAssetValidatorActionLogMessage::StaticClass, TEXT("UAssetValidatorActionLogMessage"), &Z_Registration_Info_UClass_UAssetValidatorActionLogMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorActionLogMessage), 3821811340U) },
		{ Z_Construct_UClass_UAssetValidatorActionMarkModified, UAssetValidatorActionMarkModified::StaticClass, TEXT("UAssetValidatorActionMarkModified"), &Z_Registration_Info_UClass_UAssetValidatorActionMarkModified, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorActionMarkModified), 1384165544U) },
		{ Z_Construct_UClass_UAssetValidatorActionSetPropertyValue, UAssetValidatorActionSetPropertyValue::StaticClass, TEXT("UAssetValidatorActionSetPropertyValue"), &Z_Registration_Info_UClass_UAssetValidatorActionSetPropertyValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorActionSetPropertyValue), 2833276337U) },
		{ Z_Construct_UClass_UAssetValidatorActionShowNotification, UAssetValidatorActionShowNotification::StaticClass, TEXT("UAssetValidatorActionShowNotification"), &Z_Registration_Info_UClass_UAssetValidatorActionShowNotification, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorActionShowNotification), 3314913171U) },
		{ Z_Construct_UClass_UAssetValidatorActionMoveAsset, UAssetValidatorActionMoveAsset::StaticClass, TEXT("UAssetValidatorActionMoveAsset"), &Z_Registration_Info_UClass_UAssetValidatorActionMoveAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetValidatorActionMoveAsset), 3145862824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActions_h__Script_EscapeAssetHelper_300929534(TEXT("/Script/EscapeAssetHelper"),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActions_h__Script_EscapeAssetHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActions_h__Script_EscapeAssetHelper_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActions_h__Script_EscapeAssetHelper_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActions_h__Script_EscapeAssetHelper_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
