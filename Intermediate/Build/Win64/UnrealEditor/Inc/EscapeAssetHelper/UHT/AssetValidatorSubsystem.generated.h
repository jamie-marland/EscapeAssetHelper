// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetValidator/AssetValidatorSubsystem.h"

#ifdef ESCAPEASSETHELPER_AssetValidatorSubsystem_generated_h
#error "AssetValidatorSubsystem.generated.h already included, missing '#pragma once' in AssetValidatorSubsystem.h"
#endif
#define ESCAPEASSETHELPER_AssetValidatorSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FAssetData;
struct FAssetValidatorResult;

// ********** Begin ScriptStruct FAssetValidatorResult *********************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetValidatorResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAssetValidatorResult;
// ********** End ScriptStruct FAssetValidatorResult ***********************************************

// ********** Begin Class UAssetValidatorSubsystem *************************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoesAssetPassValidation); \
	DECLARE_FUNCTION(execApplyRulesToAsset); \
	DECLARE_FUNCTION(execValidateAssets); \
	DECLARE_FUNCTION(execValidateAsset);


ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorSubsystem_NoRegister();

#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetValidatorSubsystem(); \
	friend struct Z_Construct_UClass_UAssetValidatorSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetValidatorSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetValidatorSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeAssetHelper"), Z_Construct_UClass_UAssetValidatorSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAssetValidatorSubsystem)


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetValidatorSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetValidatorSubsystem(UAssetValidatorSubsystem&&) = delete; \
	UAssetValidatorSubsystem(const UAssetValidatorSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetValidatorSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetValidatorSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetValidatorSubsystem) \
	NO_API virtual ~UAssetValidatorSubsystem();


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h_37_PROLOG
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h_40_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetValidatorSubsystem;

// ********** End Class UAssetValidatorSubsystem ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetValidator_AssetValidatorSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
