// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetNaming/AssetNamingParser.h"
#include "AssetNaming/AssetNamingTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAssetNamingParser() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetNamingParser();
ESCAPEASSETHELPER_API UClass* Z_Construct_UClass_UAssetNamingParser_NoRegister();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FAssetNamingConvention();
ESCAPEASSETHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FParsedAssetName();
UPackage* Z_Construct_UPackage__Script_EscapeAssetHelper();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAssetNamingParser Function ComposeName **********************************
struct Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics
{
	struct AssetNamingParser_eventComposeName_Parms
	{
		FParsedAssetName ParsedName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Compose a full asset name from parsed components\n\x09 * @param ParsedName The parsed name components\n\x09 * @return The composed name string\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compose a full asset name from parsed components\n@param ParsedName The parsed name components\n@return The composed name string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParsedName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParsedName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::NewProp_ParsedName = { "ParsedName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventComposeName_Parms, ParsedName), Z_Construct_UScriptStruct_FParsedAssetName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParsedName_MetaData), NewProp_ParsedName_MetaData) }; // 1016641064
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventComposeName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::NewProp_ParsedName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "ComposeName", Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::AssetNamingParser_eventComposeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::AssetNamingParser_eventComposeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_ComposeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_ComposeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execComposeName)
{
	P_GET_STRUCT_REF(FParsedAssetName,Z_Param_Out_ParsedName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAssetNamingParser::ComposeName(Z_Param_Out_ParsedName);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function ComposeName ************************************

// ********** Begin Class UAssetNamingParser Function ContainsNumbers ******************************
struct Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics
{
	struct AssetNamingParser_eventContainsNumbers_Parms
	{
		FString BaseName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if a base name contains any numeric digits\n\x09 * @param BaseName The base name to check\n\x09 * @return True if the base name contains numbers\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a base name contains any numeric digits\n@param BaseName The base name to check\n@return True if the base name contains numbers" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventContainsNumbers_Parms, BaseName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseName_MetaData), NewProp_BaseName_MetaData) };
void Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetNamingParser_eventContainsNumbers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetNamingParser_eventContainsNumbers_Parms), &Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::NewProp_BaseName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "ContainsNumbers", Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::AssetNamingParser_eventContainsNumbers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::AssetNamingParser_eventContainsNumbers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execContainsNumbers)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_BaseName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetNamingParser::ContainsNumbers(Z_Param_BaseName);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function ContainsNumbers ********************************

// ********** Begin Class UAssetNamingParser Function ConvertNumbersToWords ************************
struct Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics
{
	struct AssetNamingParser_eventConvertNumbersToWords_Parms
	{
		FString Input;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert all numbers in a string to their word equivalents (e.g., \"Item1\" -> \"ItemOne\")\n\x09 * @param Input The string to convert\n\x09 * @return The string with numbers replaced by words\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert all numbers in a string to their word equivalents (e.g., \"Item1\" -> \"ItemOne\")\n@param Input The string to convert\n@return The string with numbers replaced by words" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventConvertNumbersToWords_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventConvertNumbersToWords_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "ConvertNumbersToWords", Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::AssetNamingParser_eventConvertNumbersToWords_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::AssetNamingParser_eventConvertNumbersToWords_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execConvertNumbersToWords)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAssetNamingParser::ConvertNumbersToWords(Z_Param_Input);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function ConvertNumbersToWords **************************

// ********** Begin Class UAssetNamingParser Function GenerateAlternativeSuggestions ***************
struct Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics
{
	struct AssetNamingParser_eventGenerateAlternativeSuggestions_Parms
	{
		FString CurrentName;
		FAssetNamingConvention Convention;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generate multiple alternative name suggestions from the current name and a convention.\n\x09 * Returns up to 3 suggestions:\n\x09 * 1. Standard fix (prefix + PascalCase + default suffix if required)\n\x09 * 2. Keep original suffix if valid\n\x09 * 3. Without variant (if present)\n\x09 * @param CurrentName The current asset name\n\x09 * @param Convention The naming convention to apply\n\x09 * @return Array of suggested names (unique, non-empty)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate multiple alternative name suggestions from the current name and a convention.\nReturns up to 3 suggestions:\n1. Standard fix (prefix + PascalCase + default suffix if required)\n2. Keep original suffix if valid\n3. Without variant (if present)\n@param CurrentName The current asset name\n@param Convention The naming convention to apply\n@return Array of suggested names (unique, non-empty)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Convention_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Convention;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::NewProp_CurrentName = { "CurrentName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventGenerateAlternativeSuggestions_Parms, CurrentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentName_MetaData), NewProp_CurrentName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::NewProp_Convention = { "Convention", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventGenerateAlternativeSuggestions_Parms, Convention), Z_Construct_UScriptStruct_FAssetNamingConvention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Convention_MetaData), NewProp_Convention_MetaData) }; // 3713468478
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventGenerateAlternativeSuggestions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::NewProp_CurrentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::NewProp_Convention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "GenerateAlternativeSuggestions", Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::AssetNamingParser_eventGenerateAlternativeSuggestions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::AssetNamingParser_eventGenerateAlternativeSuggestions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execGenerateAlternativeSuggestions)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CurrentName);
	P_GET_STRUCT_REF(FAssetNamingConvention,Z_Param_Out_Convention);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UAssetNamingParser::GenerateAlternativeSuggestions(Z_Param_CurrentName,Z_Param_Out_Convention);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function GenerateAlternativeSuggestions *****************

// ********** Begin Class UAssetNamingParser Function GenerateSuggestedName ************************
struct Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics
{
	struct AssetNamingParser_eventGenerateSuggestedName_Parms
	{
		FString CurrentName;
		FAssetNamingConvention Convention;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generate a suggested name from the current name and a convention\n\x09 * @param CurrentName The current asset name\n\x09 * @param Convention The naming convention to apply\n\x09 * @return The suggested corrected name\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate a suggested name from the current name and a convention\n@param CurrentName The current asset name\n@param Convention The naming convention to apply\n@return The suggested corrected name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Convention_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Convention;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::NewProp_CurrentName = { "CurrentName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventGenerateSuggestedName_Parms, CurrentName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentName_MetaData), NewProp_CurrentName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::NewProp_Convention = { "Convention", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventGenerateSuggestedName_Parms, Convention), Z_Construct_UScriptStruct_FAssetNamingConvention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Convention_MetaData), NewProp_Convention_MetaData) }; // 3713468478
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventGenerateSuggestedName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::NewProp_CurrentName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::NewProp_Convention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "GenerateSuggestedName", Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::AssetNamingParser_eventGenerateSuggestedName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::AssetNamingParser_eventGenerateSuggestedName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execGenerateSuggestedName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CurrentName);
	P_GET_STRUCT_REF(FAssetNamingConvention,Z_Param_Out_Convention);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAssetNamingParser::GenerateSuggestedName(Z_Param_CurrentName,Z_Param_Out_Convention);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function GenerateSuggestedName **************************

// ********** Begin Class UAssetNamingParser Function IsKnownPrefix ********************************
struct Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics
{
	struct AssetNamingParser_eventIsKnownPrefix_Parms
	{
		FString PotentialPrefix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if a given string is a known prefix (registered in settings)\n\x09 * @param PotentialPrefix The string to check (with or without trailing underscore)\n\x09 * @return True if this is a registered prefix\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a given string is a known prefix (registered in settings)\n@param PotentialPrefix The string to check (with or without trailing underscore)\n@return True if this is a registered prefix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotentialPrefix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PotentialPrefix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::NewProp_PotentialPrefix = { "PotentialPrefix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventIsKnownPrefix_Parms, PotentialPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotentialPrefix_MetaData), NewProp_PotentialPrefix_MetaData) };
void Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetNamingParser_eventIsKnownPrefix_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetNamingParser_eventIsKnownPrefix_Parms), &Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::NewProp_PotentialPrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "IsKnownPrefix", Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::AssetNamingParser_eventIsKnownPrefix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::AssetNamingParser_eventIsKnownPrefix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execIsKnownPrefix)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PotentialPrefix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetNamingParser::IsKnownPrefix(Z_Param_PotentialPrefix);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function IsKnownPrefix **********************************

// ********** Begin Class UAssetNamingParser Function IsKnownSuffix ********************************
struct Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics
{
	struct AssetNamingParser_eventIsKnownSuffix_Parms
	{
		FString PotentialSuffix;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if a given string is a known suffix (registered in settings)\n\x09 * @param PotentialSuffix The string to check (with or without leading underscore)\n\x09 * @return True if this is a registered suffix\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a given string is a known suffix (registered in settings)\n@param PotentialSuffix The string to check (with or without leading underscore)\n@return True if this is a registered suffix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotentialSuffix_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PotentialSuffix;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::NewProp_PotentialSuffix = { "PotentialSuffix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventIsKnownSuffix_Parms, PotentialSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotentialSuffix_MetaData), NewProp_PotentialSuffix_MetaData) };
void Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetNamingParser_eventIsKnownSuffix_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetNamingParser_eventIsKnownSuffix_Parms), &Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::NewProp_PotentialSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "IsKnownSuffix", Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::AssetNamingParser_eventIsKnownSuffix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::AssetNamingParser_eventIsKnownSuffix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execIsKnownSuffix)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PotentialSuffix);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetNamingParser::IsKnownSuffix(Z_Param_PotentialSuffix);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function IsKnownSuffix **********************************

// ********** Begin Class UAssetNamingParser Function IsPascalCase *********************************
struct Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics
{
	struct AssetNamingParser_eventIsPascalCase_Parms
	{
		FString Input;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if a string is in PascalCase\n\x09 * @param Input The string to check\n\x09 * @return True if the string is in PascalCase\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a string is in PascalCase\n@param Input The string to check\n@return True if the string is in PascalCase" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventIsPascalCase_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
void Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetNamingParser_eventIsPascalCase_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetNamingParser_eventIsPascalCase_Parms), &Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "IsPascalCase", Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::AssetNamingParser_eventIsPascalCase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::AssetNamingParser_eventIsPascalCase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_IsPascalCase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_IsPascalCase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execIsPascalCase)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetNamingParser::IsPascalCase(Z_Param_Input);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function IsPascalCase ***********************************

// ********** Begin Class UAssetNamingParser Function IsValidVariant *******************************
struct Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics
{
	struct AssetNamingParser_eventIsValidVariant_Parms
	{
		FString Variant;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Check if a variant string is valid (allows numbers, single letters, or PascalCase)\n\x09 * @param Variant The variant string to check\n\x09 * @return True if the variant is valid\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a variant string is valid (allows numbers, single letters, or PascalCase)\n@param Variant The variant string to check\n@return True if the variant is valid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Variant;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventIsValidVariant_Parms, Variant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variant_MetaData), NewProp_Variant_MetaData) };
void Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AssetNamingParser_eventIsValidVariant_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AssetNamingParser_eventIsValidVariant_Parms), &Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::NewProp_Variant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "IsValidVariant", Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::AssetNamingParser_eventIsValidVariant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::AssetNamingParser_eventIsValidVariant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_IsValidVariant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_IsValidVariant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execIsValidVariant)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Variant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UAssetNamingParser::IsValidVariant(Z_Param_Variant);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function IsValidVariant *********************************

// ********** Begin Class UAssetNamingParser Function ParseAssetName *******************************
struct Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics
{
	struct AssetNamingParser_eventParseAssetName_Parms
	{
		FString AssetName;
		FParsedAssetName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Parse an asset name into its components (Blueprint callable version without convention)\n\x09 * @param AssetName The name to parse\n\x09 * @return Parsed name components\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parse an asset name into its components (Blueprint callable version without convention)\n@param AssetName The name to parse\n@return Parsed name components" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventParseAssetName_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetName_MetaData), NewProp_AssetName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventParseAssetName_Parms, ReturnValue), Z_Construct_UScriptStruct_FParsedAssetName, METADATA_PARAMS(0, nullptr) }; // 1016641064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::NewProp_AssetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "ParseAssetName", Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::AssetNamingParser_eventParseAssetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::AssetNamingParser_eventParseAssetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_ParseAssetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_ParseAssetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execParseAssetName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FParsedAssetName*)Z_Param__Result=UAssetNamingParser::ParseAssetName(Z_Param_AssetName);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function ParseAssetName *********************************

// ********** Begin Class UAssetNamingParser Function ToPascalCase *********************************
struct Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics
{
	struct AssetNamingParser_eventToPascalCase_Parms
	{
		FString Input;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Asset Naming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Convert a string to PascalCase\n\x09 * @param Input The string to convert\n\x09 * @return The PascalCase version of the string\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert a string to PascalCase\n@param Input The string to convert\n@return The PascalCase version of the string" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventToPascalCase_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AssetNamingParser_eventToPascalCase_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAssetNamingParser, nullptr, "ToPascalCase", Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::AssetNamingParser_eventToPascalCase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::AssetNamingParser_eventToPascalCase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAssetNamingParser_ToPascalCase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetNamingParser_ToPascalCase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAssetNamingParser::execToPascalCase)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UAssetNamingParser::ToPascalCase(Z_Param_Input);
	P_NATIVE_END;
}
// ********** End Class UAssetNamingParser Function ToPascalCase ***********************************

// ********** Begin Class UAssetNamingParser *******************************************************
void UAssetNamingParser::StaticRegisterNativesUAssetNamingParser()
{
	UClass* Class = UAssetNamingParser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComposeName", &UAssetNamingParser::execComposeName },
		{ "ContainsNumbers", &UAssetNamingParser::execContainsNumbers },
		{ "ConvertNumbersToWords", &UAssetNamingParser::execConvertNumbersToWords },
		{ "GenerateAlternativeSuggestions", &UAssetNamingParser::execGenerateAlternativeSuggestions },
		{ "GenerateSuggestedName", &UAssetNamingParser::execGenerateSuggestedName },
		{ "IsKnownPrefix", &UAssetNamingParser::execIsKnownPrefix },
		{ "IsKnownSuffix", &UAssetNamingParser::execIsKnownSuffix },
		{ "IsPascalCase", &UAssetNamingParser::execIsPascalCase },
		{ "IsValidVariant", &UAssetNamingParser::execIsValidVariant },
		{ "ParseAssetName", &UAssetNamingParser::execParseAssetName },
		{ "ToPascalCase", &UAssetNamingParser::execToPascalCase },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAssetNamingParser;
UClass* UAssetNamingParser::GetPrivateStaticClass()
{
	using TClass = UAssetNamingParser;
	if (!Z_Registration_Info_UClass_UAssetNamingParser.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AssetNamingParser"),
			Z_Registration_Info_UClass_UAssetNamingParser.InnerSingleton,
			StaticRegisterNativesUAssetNamingParser,
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
	return Z_Registration_Info_UClass_UAssetNamingParser.InnerSingleton;
}
UClass* Z_Construct_UClass_UAssetNamingParser_NoRegister()
{
	return UAssetNamingParser::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAssetNamingParser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Utility class for parsing and composing asset names according to the convention:\n * Prefix_BaseAssetName_Variant_Suffix\n */" },
#endif
		{ "IncludePath", "AssetNaming/AssetNamingParser.h" },
		{ "ModuleRelativePath", "Public/AssetNaming/AssetNamingParser.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Utility class for parsing and composing asset names according to the convention:\nPrefix_BaseAssetName_Variant_Suffix" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetNamingParser_ComposeName, "ComposeName" }, // 692108148
		{ &Z_Construct_UFunction_UAssetNamingParser_ContainsNumbers, "ContainsNumbers" }, // 3131953303
		{ &Z_Construct_UFunction_UAssetNamingParser_ConvertNumbersToWords, "ConvertNumbersToWords" }, // 2027308250
		{ &Z_Construct_UFunction_UAssetNamingParser_GenerateAlternativeSuggestions, "GenerateAlternativeSuggestions" }, // 3884527495
		{ &Z_Construct_UFunction_UAssetNamingParser_GenerateSuggestedName, "GenerateSuggestedName" }, // 359686548
		{ &Z_Construct_UFunction_UAssetNamingParser_IsKnownPrefix, "IsKnownPrefix" }, // 3925807314
		{ &Z_Construct_UFunction_UAssetNamingParser_IsKnownSuffix, "IsKnownSuffix" }, // 3278373778
		{ &Z_Construct_UFunction_UAssetNamingParser_IsPascalCase, "IsPascalCase" }, // 2418774718
		{ &Z_Construct_UFunction_UAssetNamingParser_IsValidVariant, "IsValidVariant" }, // 2521031499
		{ &Z_Construct_UFunction_UAssetNamingParser_ParseAssetName, "ParseAssetName" }, // 3139585775
		{ &Z_Construct_UFunction_UAssetNamingParser_ToPascalCase, "ToPascalCase" }, // 2105373335
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetNamingParser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetNamingParser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_EscapeAssetHelper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetNamingParser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetNamingParser_Statics::ClassParams = {
	&UAssetNamingParser::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetNamingParser_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetNamingParser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetNamingParser()
{
	if (!Z_Registration_Info_UClass_UAssetNamingParser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetNamingParser.OuterSingleton, Z_Construct_UClass_UAssetNamingParser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetNamingParser.OuterSingleton;
}
UAssetNamingParser::UAssetNamingParser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetNamingParser);
UAssetNamingParser::~UAssetNamingParser() {}
// ********** End Class UAssetNamingParser *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h__Script_EscapeAssetHelper_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetNamingParser, UAssetNamingParser::StaticClass, TEXT("UAssetNamingParser"), &Z_Registration_Info_UClass_UAssetNamingParser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetNamingParser), 2177395490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h__Script_EscapeAssetHelper_2523140429(TEXT("/Script/EscapeAssetHelper"),
	Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h__Script_EscapeAssetHelper_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginProject_Plugins_EscapeAssetHelper_Source_EscapeAssetHelper_Public_AssetNaming_AssetNamingParser_h__Script_EscapeAssetHelper_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
