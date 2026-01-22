#pragma once

#include "CoreMinimal.h"
#include "AssetNamingTypes.generated.h"

/**
 * Source control validation mode for asset naming
 */
UENUM(BlueprintType)
enum class ESourceControlValidationMode : uint8
{
	Disabled	UMETA(DisplayName = "Disabled"),
	WarnOnly	UMETA(DisplayName = "Warn Only"),
	Block		UMETA(DisplayName = "Block Submit")
};

/**
 * Severity level for validation results
 */
UENUM(BlueprintType)
enum class EAssetValidationSeverity : uint8
{
	None		UMETA(DisplayName = "Valid"),
	Warning		UMETA(DisplayName = "Warning"),
	Error		UMETA(DisplayName = "Error")
};

/**
 * Parsed components of an asset name following the convention:
 * Prefix_BaseAssetName_Variant_Suffix
 */
USTRUCT(BlueprintType)
struct ESCAPEASSETHELPER_API FParsedAssetName
{
	GENERATED_BODY()

	/** The prefix (e.g., "BP", "M", "T") without trailing underscore */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Naming")
	FString Prefix;

	/** The core asset name in PascalCase */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Naming")
	FString BaseAssetName;

	/** Optional variant identifier (e.g., "01", "Red", "Large") */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Naming")
	FString Variant;

	/** The suffix (e.g., "D", "N") without leading underscore */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Naming")
	FString Suffix;

	/** Whether the parsing was successful */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Asset Naming")
	bool bIsValid = false;

	/** Compose the full asset name from components */
	FString ComposeName() const;

	/** Check if this matches a given naming convention */
	bool MatchesConvention(const FString& ExpectedPrefix, const TArray<FString>& ValidSuffixes) const;
};

/**
 * Naming convention rules for a specific asset class
 */
USTRUCT(BlueprintType)
struct ESCAPEASSETHELPER_API FAssetNamingConvention
{
	GENERATED_BODY()

	/** Prefix to prepend to asset names (e.g., "BP", "M", "T"). Underscore is added automatically. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Naming", meta = (DisplayName = "Prefix"))
	FString Prefix;

	/** Valid suffixes for this asset type (e.g., "D", "N" for textures). Underscore is added automatically. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Naming", meta = (DisplayName = "Valid Suffixes"))
	TArray<FString> ValidSuffixes;

	/**
	 * Suffix aliases that redirect to a valid suffix. Key = alias (e.g., "Albedo"), Value = canonical suffix (e.g., "D").
	 * Underscores are handled automatically.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Naming", meta = (DisplayName = "Suffix Aliases"))
	TMap<FString, FString> SuffixAliases;

	/** Default suffix to suggest when creating new assets. Underscore is added automatically. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Naming", meta = (DisplayName = "Default Suffix"))
	FString DefaultSuffix;

	/** Whether a suffix from ValidSuffixes is required */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Naming")
	bool bSuffixRequired = false;

	/** Get the prefix with trailing underscore */
	FString GetPrefixWithUnderscore() const;

	/** Get the prefix without the trailing underscore */
	FString GetPrefixWithoutUnderscore() const;

	/** Get the default suffix with leading underscore */
	FString GetDefaultSuffixWithUnderscore() const;

	/** Get the default suffix without the leading underscore */
	FString GetDefaultSuffixWithoutUnderscore() const;

	/** Check if a suffix is valid for this convention (includes aliases) */
	bool IsSuffixValid(const FString& Suffix) const;

	/** Get the canonical suffix for a given suffix (resolves aliases). Returns empty if not valid. */
	FString GetCanonicalSuffix(const FString& Suffix) const;

	/** Normalize a prefix/suffix by removing underscores */
	static FString NormalizeIdentifier(const FString& Identifier);
};

/**
 * Result of validating an asset's name
 */
USTRUCT(BlueprintType)
struct ESCAPEASSETHELPER_API FAssetValidationResult
{
	GENERATED_BODY()

	/** Whether the asset name is valid according to conventions */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	bool bIsValid = true;

	/** The current name of the asset */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	FString CurrentName;

	/** The suggested corrected name */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	FString SuggestedName;

	/** List of validation errors/issues found */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	TArray<FString> ValidationErrors;

	/** Severity of the validation result */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	EAssetValidationSeverity Severity = EAssetValidationSeverity::None;

	/** The asset class that was validated */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	TSubclassOf<UObject> AssetClass;
};

/**
 * Result of batch validation for multiple assets
 */
USTRUCT(BlueprintType)
struct ESCAPEASSETHELPER_API FBatchValidationResult
{
	GENERATED_BODY()

	/** Individual results for each asset */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	TArray<FAssetValidationResult> Results;

	/** Total number of assets validated */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	int32 TotalAssets = 0;

	/** Number of valid assets */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	int32 ValidAssets = 0;

	/** Number of invalid assets */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Validation")
	int32 InvalidAssets = 0;

	/** Get only the invalid results */
	TArray<FAssetValidationResult> GetInvalidResults() const;
};
