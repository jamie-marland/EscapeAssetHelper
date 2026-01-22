#pragma once

#include "CoreMinimal.h"
#include "AssetNaming/AssetNamingTypes.h"
#include "AssetNamingParser.generated.h"

/**
 * Utility class for parsing and composing asset names according to the convention:
 * Prefix_BaseAssetName_Variant_Suffix
 */
UCLASS()
class ESCAPEASSETHELPER_API UAssetNamingParser : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Parse an asset name into its components (Blueprint callable version without convention)
	 * @param AssetName The name to parse
	 * @return Parsed name components
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static FParsedAssetName ParseAssetName(const FString& AssetName);

	/**
	 * Parse an asset name into its components using a naming convention
	 * @param AssetName The name to parse
	 * @param Convention Naming convention to help identify prefix/suffix
	 * @return Parsed name components
	 */
	static FParsedAssetName ParseAssetNameWithConvention(const FString& AssetName, const FAssetNamingConvention& Convention);

	/**
	 * Compose a full asset name from parsed components
	 * @param ParsedName The parsed name components
	 * @return The composed name string
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static FString ComposeName(const FParsedAssetName& ParsedName);

	/**
	 * Convert a string to PascalCase
	 * @param Input The string to convert
	 * @return The PascalCase version of the string
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static FString ToPascalCase(const FString& Input);

	/**
	 * Check if a string is in PascalCase
	 * @param Input The string to check
	 * @return True if the string is in PascalCase
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static bool IsPascalCase(const FString& Input);

	/**
	 * Check if a variant string is valid (allows numbers, single letters, or PascalCase)
	 * @param Variant The variant string to check
	 * @return True if the variant is valid
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static bool IsValidVariant(const FString& Variant);

	/**
	 * Check if a given string is a known prefix (registered in settings)
	 * @param PotentialPrefix The string to check (with or without trailing underscore)
	 * @return True if this is a registered prefix
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static bool IsKnownPrefix(const FString& PotentialPrefix);

	/**
	 * Check if a given string is a known suffix (registered in settings)
	 * @param PotentialSuffix The string to check (with or without leading underscore)
	 * @return True if this is a registered suffix
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static bool IsKnownSuffix(const FString& PotentialSuffix);

	/**
	 * Generate a suggested name from the current name and a convention
	 * @param CurrentName The current asset name
	 * @param Convention The naming convention to apply
	 * @return The suggested corrected name
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static FString GenerateSuggestedName(const FString& CurrentName, const FAssetNamingConvention& Convention);

	/**
	 * Generate multiple alternative name suggestions from the current name and a convention.
	 * Returns up to 3 suggestions:
	 * 1. Standard fix (prefix + PascalCase + default suffix if required)
	 * 2. Keep original suffix if valid
	 * 3. Without variant (if present)
	 * @param CurrentName The current asset name
	 * @param Convention The naming convention to apply
	 * @return Array of suggested names (unique, non-empty)
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static TArray<FString> GenerateAlternativeSuggestions(const FString& CurrentName, const FAssetNamingConvention& Convention);

	/**
	 * Extract the source filename (without path and extension) from an imported asset
	 * @param Asset The asset to get the source filename from
	 * @param OutFilename The extracted filename
	 * @return True if a source filename was found
	 */
	static bool GetSourceFilename(const UObject* Asset, FString& OutFilename);

	/**
	 * Check if a base name contains any numeric digits
	 * @param BaseName The base name to check
	 * @return True if the base name contains numbers
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static bool ContainsNumbers(const FString& BaseName);

	/**
	 * Convert all numbers in a string to their word equivalents (e.g., "Item1" -> "ItemOne")
	 * @param Input The string to convert
	 * @return The string with numbers replaced by words
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	static FString ConvertNumbersToWords(const FString& Input);

	/**
	 * Convert a single digit to its word equivalent
	 * @param Digit The digit character (0-9)
	 * @return The word representation of the digit
	 */
	static FString DigitToWord(TCHAR Digit);

private:
	/** Helper to clean up a potential prefix/suffix by removing underscore */
	static FString CleanPrefix(const FString& Prefix);
	static FString CleanSuffix(const FString& Suffix);

	/** Check if a name part is likely a variant (short, numeric, or common variant word) */
	static bool IsLikelyVariant(const FString& Part);
};
