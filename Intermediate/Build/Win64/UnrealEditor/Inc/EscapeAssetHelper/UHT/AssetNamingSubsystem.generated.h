// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetNaming/AssetNamingSubsystem.h"

#ifdef ESCAPEASSETHELPER_AssetNamingSubsystem_generated_h
#error "AssetNamingSubsystem.generated.h already included, missing '#pragma once' in AssetNamingSubsystem.h"
#endif
#define ESCAPEASSETHELPER_AssetNamingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FAssetData;
struct FAssetValidationResult;
struct FBatchValidationResult;

// ********** Begin Class UAssetNamingSubsystem ****************************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAutoFixAssets); \
	DECLARE_FUNCTION(execAutoFixAssetName); \
	DECLARE_FUNCTION(execValidateAssets); \
	DECLARE_FUNCTION(execValidateAsset);


ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetNamingSubsystem_NoRegister();

#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetNamingSubsystem(); \
	friend struct Z_Construct_UClass_UAssetNamingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetNamingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetNamingSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeAssetHelper"), Z_Construct_UClass_UAssetNamingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAssetNamingSubsystem)


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetNamingSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetNamingSubsystem(UAssetNamingSubsystem&&) = delete; \
	UAssetNamingSubsystem(const UAssetNamingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetNamingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetNamingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetNamingSubsystem) \
	NO_API virtual ~UAssetNamingSubsystem();


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h_18_PROLOG
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h_21_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetNamingSubsystem;

// ********** End Class UAssetNamingSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
