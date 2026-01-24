// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetValidator/AssetValidatorActionBase.h"

#ifdef ESCAPEASSETHELPER_AssetValidatorActionBase_generated_h
#error "AssetValidatorActionBase.generated.h already included, missing '#pragma once' in AssetValidatorActionBase.h"
#endif
#define ESCAPEASSETHELPER_AssetValidatorActionBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UFactory;
class UObject;

// ********** Begin Class UAssetValidatorActionBase ************************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApply);


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h_18_CALLBACK_WRAPPERS
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionBase_NoRegister();

#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetValidatorActionBase(); \
	friend struct Z_Construct_UClass_UAssetValidatorActionBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorActionBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetValidatorActionBase, UEditorUtilityObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/EscapeAssetHelper"), Z_Construct_UClass_UAssetValidatorActionBase_NoRegister) \
	DECLARE_SERIALIZER(UAssetValidatorActionBase)


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetValidatorActionBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetValidatorActionBase(UAssetValidatorActionBase&&) = delete; \
	UAssetValidatorActionBase(const UAssetValidatorActionBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetValidatorActionBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetValidatorActionBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetValidatorActionBase) \
	NO_API virtual ~UAssetValidatorActionBase();


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h_15_PROLOG
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h_18_CALLBACK_WRAPPERS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetValidatorActionBase;

// ********** End Class UAssetValidatorActionBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorActionBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
