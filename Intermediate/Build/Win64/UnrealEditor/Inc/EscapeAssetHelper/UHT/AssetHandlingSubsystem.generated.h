// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetHandling/AssetHandlingSubsystem.h"

#ifdef ESCAPEASSETHELPER_AssetHandlingSubsystem_generated_h
#error "AssetHandlingSubsystem.generated.h already included, missing '#pragma once' in AssetHandlingSubsystem.h"
#endif
#define ESCAPEASSETHELPER_AssetHandlingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FAssetData;

// ********** Begin Class UAssetHandlingSubsystem **************************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execShowToast); \
	DECLARE_FUNCTION(execOpenURL); \
	DECLARE_FUNCTION(execOpenDocumentation); \
	DECLARE_FUNCTION(execOpenStyleGuide); \
	DECLARE_FUNCTION(execIsAssetDataIgnored); \
	DECLARE_FUNCTION(execIsAssetIgnoredByPackageName); \
	DECLARE_FUNCTION(execIsPathIgnored); \
	DECLARE_FUNCTION(execSetAssetIgnored); \
	DECLARE_FUNCTION(execIsAssetIgnored);


ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetHandlingSubsystem_NoRegister();

#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetHandlingSubsystem(); \
	friend struct Z_Construct_UClass_UAssetHandlingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetHandlingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetHandlingSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeAssetHelper"), Z_Construct_UClass_UAssetHandlingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UAssetHandlingSubsystem)


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetHandlingSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetHandlingSubsystem(UAssetHandlingSubsystem&&) = delete; \
	UAssetHandlingSubsystem(const UAssetHandlingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetHandlingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetHandlingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetHandlingSubsystem) \
	NO_API virtual ~UAssetHandlingSubsystem();


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h_16_PROLOG
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetHandlingSubsystem;

// ********** End Class UAssetHandlingSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
