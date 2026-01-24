// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetNaming/AssetNamingParser.h"

#ifdef ESCAPEASSETHELPER_AssetNamingParser_generated_h
#error "AssetNamingParser.generated.h already included, missing '#pragma once' in AssetNamingParser.h"
#endif
#define ESCAPEASSETHELPER_AssetNamingParser_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FAssetNamingConvention;
struct FParsedAssetName;

// ********** Begin Class UAssetNamingParser *******************************************************
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertNumbersToWords); \
	DECLARE_FUNCTION(execContainsNumbers); \
	DECLARE_FUNCTION(execGenerateAlternativeSuggestions); \
	DECLARE_FUNCTION(execGenerateSuggestedName); \
	DECLARE_FUNCTION(execIsKnownSuffix); \
	DECLARE_FUNCTION(execIsKnownPrefix); \
	DECLARE_FUNCTION(execIsValidVariant); \
	DECLARE_FUNCTION(execIsPascalCase); \
	DECLARE_FUNCTION(execToPascalCase); \
	DECLARE_FUNCTION(execComposeName); \
	DECLARE_FUNCTION(execParseAssetName);


ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetNamingParser_NoRegister();

#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetNamingParser(); \
	friend struct Z_Construct_UClass_UAssetNamingParser_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetNamingParser_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetNamingParser, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EscapeAssetHelper"), Z_Construct_UClass_UAssetNamingParser_NoRegister) \
	DECLARE_SERIALIZER(UAssetNamingParser)


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetNamingParser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetNamingParser(UAssetNamingParser&&) = delete; \
	UAssetNamingParser(const UAssetNamingParser&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetNamingParser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetNamingParser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetNamingParser) \
	NO_API virtual ~UAssetNamingParser();


#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h_11_PROLOG
#define FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h_14_INCLASS_NO_PURE_DECLS \
	FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetNamingParser;

// ********** End Class UAssetNamingParser *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
