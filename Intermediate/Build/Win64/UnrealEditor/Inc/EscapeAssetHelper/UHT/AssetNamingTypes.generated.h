// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetNaming/AssetNamingTypes.h"

#ifdef ESCAPEASSETHELPER_AssetNamingTypes_generated_h
#error "AssetNamingTypes.generated.h already included, missing '#pragma once' in AssetNamingTypes.h"
#endif
#define ESCAPEASSETHELPER_AssetNamingTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FParsedAssetName **************************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FParsedAssetName_Statics; \
	static class UScriptStruct* StaticStruct();


struct FParsedAssetName;
// ********** End ScriptStruct FParsedAssetName ****************************************************

// ********** Begin ScriptStruct FAssetNamingConvention ********************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetNamingConvention_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAssetNamingConvention;
// ********** End ScriptStruct FAssetNamingConvention **********************************************

// ********** Begin ScriptStruct FAssetValidationResult ********************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetValidationResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FAssetValidationResult;
// ********** End ScriptStruct FAssetValidationResult **********************************************

// ********** Begin ScriptStruct FBatchValidationResult ********************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBatchValidationResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FBatchValidationResult;
// ********** End ScriptStruct FBatchValidationResult **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingTypes_h

// ********** Begin Enum ESourceControlValidationMode **********************************************
#define FOREACH_ENUM_ESOURCECONTROLVALIDATIONMODE(op) \
	op(ESourceControlValidationMode::Disabled) \
	op(ESourceControlValidationMode::WarnOnly) \
	op(ESourceControlValidationMode::Block) 

enum class ESourceControlValidationMode : uint8;
template<> struct TIsUEnumClass<ESourceControlValidationMode> { enum { Value = true }; };
template<> ESCAPEASSETHELPER_API UEnum* StaticEnum<ESourceControlValidationMode>();
// ********** End Enum ESourceControlValidationMode ************************************************

// ********** Begin Enum EAssetValidationSeverity **************************************************
#define FOREACH_ENUM_EASSETVALIDATIONSEVERITY(op) \
	op(EAssetValidationSeverity::None) \
	op(EAssetValidationSeverity::Warning) \
	op(EAssetValidationSeverity::Error) 

enum class EAssetValidationSeverity : uint8;
template<> struct TIsUEnumClass<EAssetValidationSeverity> { enum { Value = true }; };
template<> ESCAPEASSETHELPER_API UEnum* StaticEnum<EAssetValidationSeverity>();
// ********** End Enum EAssetValidationSeverity ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
