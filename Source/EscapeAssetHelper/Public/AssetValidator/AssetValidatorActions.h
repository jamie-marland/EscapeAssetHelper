#pragma once

#include "CoreMinimal.h"
#include "AssetValidator/AssetValidatorActionBase.h"
#include "AssetValidatorActions.generated.h"

class UAssetValidatorSubsystem;

/** Log verbosity level for the Log Message action */
UENUM(BlueprintType)
enum class EAssetValidatorLogVerbosity : uint8
{
	Log			UMETA(DisplayName = "Log"),
	Warning		UMETA(DisplayName = "Warning"),
	Error		UMETA(DisplayName = "Error"),
	Display		UMETA(DisplayName = "Display"),
	Verbose		UMETA(DisplayName = "Verbose")
};

/** Notification severity for visual styling */
UENUM(BlueprintType)
enum class EAssetValidatorNotificationSeverity : uint8
{
	Info			UMETA(DisplayName = "Info"),
	Success			UMETA(DisplayName = "Success"),
	Warning			UMETA(DisplayName = "Warning"),
	Error			UMETA(DisplayName = "Error")
};

/**
 * Action that sets metadata tags on an asset.
 * Useful for marking assets as processed or storing custom metadata.
 */
UCLASS(DisplayName = "Set Asset Tags")
class ESCAPEASSETHELPER_API UAssetValidatorActionSetAssetTags : public UAssetValidatorActionBase
{
	GENERATED_BODY()

public:
	virtual bool Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/**
	 * Map of metadata tags to set on the asset.
	 * Key = tag name, Value = tag value.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator",
		meta = (ExposeOnSpawn, MultiLine))
	TMap<FName, FString> AssetTags;
};

/**
 * Action that removes metadata tags from an asset.
 */
UCLASS(DisplayName = "Remove Asset Tags")
class ESCAPEASSETHELPER_API UAssetValidatorActionRemoveAssetTags : public UAssetValidatorActionBase
{
	GENERATED_BODY()

public:
	virtual bool Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/**
	 * List of metadata tag keys to remove from the asset.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator",
		meta = (ExposeOnSpawn))
	TArray<FName> TagsToRemove;
};

/**
 * Action that logs a message to the output log.
 * Useful for debugging or creating audit trails.
 */
UCLASS(DisplayName = "Log Message")
class ESCAPEASSETHELPER_API UAssetValidatorActionLogMessage : public UAssetValidatorActionBase
{
	GENERATED_BODY()

public:
	virtual bool Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/**
	 * Message to log. Supports format tokens:
	 * {AssetName} - The asset's name
	 * {AssetPath} - The asset's full path
	 * {AssetClass} - The asset's class name
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString Message = TEXT("Asset validated: {AssetName}");

	/** Log verbosity level */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	EAssetValidatorLogVerbosity Verbosity = EAssetValidatorLogVerbosity::Log;
};

/**
 * Action that marks the asset as needing to be saved.
 * Useful after modifying asset properties programmatically.
 */
UCLASS(DisplayName = "Mark Asset Modified")
class ESCAPEASSETHELPER_API UAssetValidatorActionMarkModified : public UAssetValidatorActionBase
{
	GENERATED_BODY()

public:
	virtual bool Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;
};

/**
 * Action that sets a property value on the asset using reflection.
 * Powerful action for modifying any exposed property.
 */
UCLASS(DisplayName = "Set Property Value")
class ESCAPEASSETHELPER_API UAssetValidatorActionSetPropertyValue : public UAssetValidatorActionBase
{
	GENERATED_BODY()

public:
	virtual bool Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/** The name of the property to set */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FName PropertyName;

	/**
	 * The value to set as a string.
	 * For booleans: "true" or "false"
	 * For numbers: numeric string like "42" or "3.14"
	 * For enums: the enum value name
	 * For objects: the object path
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString PropertyValue;
};

/**
 * Action that shows a notification toast to the user.
 * Useful for notifying users about asset validation status.
 */
UCLASS(DisplayName = "Show Notification")
class ESCAPEASSETHELPER_API UAssetValidatorActionShowNotification : public UAssetValidatorActionBase
{
	GENERATED_BODY()

public:
	virtual bool Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/**
	 * Message to display. Supports format tokens:
	 * {AssetName} - The asset's name
	 * {AssetPath} - The asset's full path
	 * {AssetClass} - The asset's class name
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator", meta = (MultiLine))
	FString Message = TEXT("Validation applied to: {AssetName}");

	/** Visual severity of the notification */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	EAssetValidatorNotificationSeverity Severity = EAssetValidatorNotificationSeverity::Info;

	/** How long the notification should stay visible (in seconds) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator", meta = (ClampMin = "1.0", ClampMax = "30.0"))
	float ExpireDuration = 5.0f;
};

/**
 * Action that moves an asset to a specified folder.
 * Useful for organizing assets according to project conventions.
 */
UCLASS(DisplayName = "Move Asset")
class ESCAPEASSETHELPER_API UAssetValidatorActionMoveAsset : public UAssetValidatorActionBase
{
	GENERATED_BODY()

public:
	virtual bool Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override;

	/**
	 * Target folder path. Supports tokens:
	 * {AssetClass} - The asset's class name
	 * {AssetType} - Simplified type name (e.g., "Textures", "Materials")
	 * {AssetName} - The asset's name
	 * Example: "/Game/Art/{AssetType}" moves textures to "/Game/Art/Textures"
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	FString TargetFolderPath = TEXT("/Game/");

	/** If true, creates the target folder if it doesn't exist */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	bool bCreateFolderIfMissing = true;

	/** If true, shows a confirmation dialog before moving */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	bool bShowConfirmation = true;
};
