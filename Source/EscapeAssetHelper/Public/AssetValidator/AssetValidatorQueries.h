#pragma once

#include "CoreMinimal.h"
#include "AssetValidator/AssetValidatorQueryBase.h"
#include "AssetValidatorQueries.generated.h"

class UAssetValidatorSubsystem;

/**
 * Query that checks if an asset has a specific metadata tag.
 * Returns true if the tag exists and optionally matches a specific value.
 */
UCLASS(DisplayName = "Check Asset Tag")
class ESCAPEASSETHELPER_API UAssetValidatorQueryCheckAssetTag : public UAssetValidatorQueryBase
{
	GENERATED_BODY()

public:
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/** The metadata tag key to check */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator",
		meta = (ExposeOnSpawn))
	FName AssetTagKey;

	/**
	 * The expected tag value. If empty, only checks for tag existence.
	 * If set, the tag must match this exact value.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator",
		meta = (ExposeOnSpawn))
	FString AssetTagValue;
};

/**
 * Abstract base class for source path queries.
 * Provides helper for accessing asset import data.
 */
UCLASS(Abstract)
class ESCAPEASSETHELPER_API UAssetValidatorQuerySourcePathBase : public UAssetValidatorQueryBase
{
	GENERATED_BODY()

public:
	/** Whether the comparison should be case-sensitive */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	bool bCaseSensitive = false;

protected:
	/**
	 * Get the source file path for an asset.
	 * Uses reflection to access AssetImportData property.
	 * @param Asset The asset to get the source path for
	 * @param OutPath The output source file path
	 * @return True if a source path was found
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Validator")
	bool GetSourcePath(const UObject* Asset, FString& OutPath) const;
};

/**
 * Query that checks if the source filename starts with a specific string.
 */
UCLASS(DisplayName = "Source Filename Starts With")
class ESCAPEASSETHELPER_API UAssetValidatorQuerySourceFilenameStartsWith : public UAssetValidatorQuerySourcePathBase
{
	GENERATED_BODY()

public:
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/** The string the filename should start with */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString StartsWith;
};

/**
 * Query that checks if the source filename ends with a specific string.
 * Useful for detecting texture suffixes like "_d", "_n", etc.
 */
UCLASS(DisplayName = "Source Filename Ends With")
class ESCAPEASSETHELPER_API UAssetValidatorQuerySourceFilenameEndsWith : public UAssetValidatorQuerySourcePathBase
{
	GENERATED_BODY()

public:
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/** The string the filename should end with */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString EndsWith;
};

/**
 * Query that checks if the source path contains a specific substring.
 */
UCLASS(DisplayName = "Source Path Contains")
class ESCAPEASSETHELPER_API UAssetValidatorQuerySourcePathContains : public UAssetValidatorQuerySourcePathBase
{
	GENERATED_BODY()

public:
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/** The substring to search for in the source path */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString Contains;
};

/**
 * Query that checks if the source file extension matches one of the valid extensions.
 */
UCLASS(DisplayName = "Source Extension Matches")
class ESCAPEASSETHELPER_API UAssetValidatorQuerySourceExtensionMatches : public UAssetValidatorQuerySourcePathBase
{
	GENERATED_BODY()

public:
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/**
	 * Comma-delimited list of valid extensions to match.
	 * Example: "png,jpg,tga" or ".png,.jpg,.tga"
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString ValidExtensions;
};

/**
 * Query that checks if the asset's destination path (in project) contains a specific string.
 */
UCLASS(DisplayName = "Destination Path Contains")
class ESCAPEASSETHELPER_API UAssetValidatorQueryDestinationPathContains : public UAssetValidatorQueryBase
{
	GENERATED_BODY()

public:
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/** The substring to search for in the asset's project path */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString Contains;

	/** Whether the comparison should be case-sensitive */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	bool bCaseSensitive = false;
};

/**
 * Query that checks if the asset is of a specific class or subclass.
 */
UCLASS(DisplayName = "Asset Class Matches")
class ESCAPEASSETHELPER_API UAssetValidatorQueryAssetClassMatches : public UAssetValidatorQueryBase
{
	GENERATED_BODY()

public:
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/** The class the asset should be or derive from */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator",
		meta = (AllowAbstract = "true"))
	TSubclassOf<UObject> AssetClass;

	/** If true, asset must be exactly this class. If false, subclasses also match. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	bool bExactMatch = false;
};

/**
 * Query that checks if the asset name matches a pattern (supports wildcards).
 */
UCLASS(DisplayName = "Asset Name Matches")
class ESCAPEASSETHELPER_API UAssetValidatorQueryAssetNameMatches : public UAssetValidatorQueryBase
{
	GENERATED_BODY()

public:
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/**
	 * Pattern to match against the asset name.
	 * Supports wildcards: * matches any characters, ? matches single character.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString Pattern;

	/** Whether the comparison should be case-sensitive */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	bool bCaseSensitive = false;
};

/** Comparison mode for property value queries */
UENUM(BlueprintType)
enum class EPropertyComparisonMode : uint8
{
	/** Property value must equal the expected value */
	Equals			UMETA(DisplayName = "Equals"),
	/** Property value must not equal the expected value */
	NotEquals		UMETA(DisplayName = "Not Equals"),
	/** Property value must contain the expected string (string properties only) */
	Contains		UMETA(DisplayName = "Contains"),
	/** Property value must be less than the expected value (numeric properties only) */
	LessThan		UMETA(DisplayName = "Less Than"),
	/** Property value must be greater than the expected value (numeric properties only) */
	GreaterThan		UMETA(DisplayName = "Greater Than"),
	/** Property value must be less than or equal to expected (numeric properties only) */
	LessOrEqual		UMETA(DisplayName = "Less Or Equal"),
	/** Property value must be greater than or equal to expected (numeric properties only) */
	GreaterOrEqual	UMETA(DisplayName = "Greater Or Equal")
};

/**
 * Query that checks if a property on the asset matches an expected value.
 * Uses reflection to access any exposed property.
 */
UCLASS(DisplayName = "Check Property Value")
class ESCAPEASSETHELPER_API UAssetValidatorQueryCheckPropertyValue : public UAssetValidatorQueryBase
{
	GENERATED_BODY()

public:
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/** The name of the property to check */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FName PropertyName;

	/**
	 * The expected value as a string.
	 * For booleans: "true" or "false"
	 * For numbers: numeric string like "42" or "3.14"
	 * For enums: the enum value name
	 * For objects: the object path or "None" for null
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString ExpectedValue;

	/** How to compare the property value to the expected value */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	EPropertyComparisonMode ComparisonMode = EPropertyComparisonMode::Equals;

	/** Whether string comparisons should be case-sensitive */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator",
		meta = (EditCondition = "ComparisonMode == EPropertyComparisonMode::Equals || ComparisonMode == EPropertyComparisonMode::NotEquals || ComparisonMode == EPropertyComparisonMode::Contains"))
	bool bCaseSensitive = false;
};

/**
 * Query that checks if an asset is in the expected folder path.
 * Useful for enforcing folder organization conventions.
 */
UCLASS(DisplayName = "Asset In Expected Folder")
class ESCAPEASSETHELPER_API UAssetValidatorQueryAssetInExpectedFolder : public UAssetValidatorQueryBase
{
	GENERATED_BODY()

public:
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/**
	 * The expected folder path. Supports tokens:
	 * {AssetClass} - The asset's class name
	 * {AssetType} - Simplified type name (e.g., "Textures", "Materials")
	 * Example: "/Game/Art/{AssetType}" would expect textures in "/Game/Art/Textures"
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString ExpectedFolderPath;

	/** If true, asset must be in this exact folder. If false, subfolders are allowed. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	bool bExactMatch = false;

	/** Whether the comparison should be case-sensitive */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	bool bCaseSensitive = false;
};
