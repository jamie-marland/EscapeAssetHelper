// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetValidator/AssetValidatorQueryBase.h"

#ifdef ESCAPEASSETHELPER_AssetValidatorQueryBase_generated_h
#error "AssetValidatorQueryBase.generated.h already included, missing '#pragma once' in AssetValidatorQueryBase.h"
#endif
#define ESCAPEASSETHELPER_AssetValidatorQueryBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAssetValidatorSubsystem;
class UObject;

// ********** Begin Class UAssetValidatorQueryBase *************************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTest);


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h_22_CALLBACK_WRAPPERS
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryBase_NoRegister();

#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetValidatorQueryBase(); \
	friend struct Z_Construct_UClass_UAssetValidatorQueryBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorQueryBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetValidatorQueryBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EscapeAssetHelper"), Z_Construct_UClass_UAssetValidatorQueryBase_NoRegister) \
	DECLARE_SERIALIZER(UAssetValidatorQueryBase)


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetValidatorQueryBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetValidatorQueryBase(UAssetValidatorQueryBase&&) = delete; \
	UAssetValidatorQueryBase(const UAssetValidatorQueryBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetValidatorQueryBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetValidatorQueryBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetValidatorQueryBase) \
	NO_API virtual ~UAssetValidatorQueryBase();


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h_19_PROLOG
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h_22_CALLBACK_WRAPPERS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetValidatorQueryBase;

// ********** End Class UAssetValidatorQueryBase ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorQueryBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
