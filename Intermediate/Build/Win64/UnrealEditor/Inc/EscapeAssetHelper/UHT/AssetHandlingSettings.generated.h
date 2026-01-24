// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetHandling/AssetHandlingSettings.h"

#ifdef ESCAPEASSETHELPER_AssetHandlingSettings_generated_h
#error "AssetHandlingSettings.generated.h already included, missing '#pragma once' in AssetHandlingSettings.h"
#endif
#define ESCAPEASSETHELPER_AssetHandlingSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetHandlingSettings ***************************************************
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetHandlingSettings_NoRegister();

#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetHandlingSettings(); \
	friend struct Z_Construct_UClass_UAssetHandlingSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetHandlingSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetHandlingSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeAssetHelper"), Z_Construct_UClass_UAssetHandlingSettings_NoRegister) \
	DECLARE_SERIALIZER(UAssetHandlingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetHandlingSettings(UAssetHandlingSettings&&) = delete; \
	UAssetHandlingSettings(const UAssetHandlingSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetHandlingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetHandlingSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetHandlingSettings) \
	NO_API virtual ~UAssetHandlingSettings();


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h_17_PROLOG
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h_20_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetHandlingSettings;

// ********** End Class UAssetHandlingSettings *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetHandling_AssetHandlingSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
