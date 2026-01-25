#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "AssetValidator/AssetValidatorActions.h"
#include "AssetValidator/AssetValidatorQueries.h"
#include "AssetValidator/AssetValidatorRuleBase.h"
#include "AssetValidatorSubsystem.generated.h"

/** Result of validating an asset against rules */
USTRUCT(BlueprintType)
struct ESCAPEASSETHELPER_API FAssetValidatorResult
{
	GENERATED_BODY()

	/** Whether the asset passes all applicable rules */
	UPROPERTY(BlueprintReadOnly, Category = "Asset Validator")
	bool bPassesValidation = true;

	/** The asset that was validated */
	UPROPERTY(BlueprintReadOnly, Category = "Asset Validator")
	TWeakObjectPtr<UObject> Asset;

	/** Rules that matched this asset (queries passed) */
	UPROPERTY(BlueprintReadOnly, Category = "Asset Validator")
	TArray<TObjectPtr<UAssetValidatorRuleBase>> MatchingRules;

	/** Description of what would be changed if actions are applied */
	UPROPERTY(BlueprintReadOnly, Category = "Asset Validator")
	TArray<FString> PendingChanges;
};

/**
 * Editor subsystem that manages asset validation rules.
 * Validates assets on rename/save and provides notification with fix options.
 */
UCLASS(BlueprintType, CollapseCategories)
class ESCAPEASSETHELPER_API UAssetValidatorSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

public:
	// Begin UEditorSubsystem Interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	// End UEditorSubsystem Interface

	/**
	 * Validate an asset against all applicable rules.
	 * Does not apply actions, just checks if rules would match.
	 * @param Asset The asset to validate
	 * @return Validation result with matching rules and pending changes
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Validator")
	FAssetValidatorResult ValidateAsset(UObject* Asset);

	/**
	 * Validate multiple assets.
	 * @param Assets The assets to validate
	 * @return Array of validation results
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Validator")
	TArray<FAssetValidatorResult> ValidateAssets(const TArray<FAssetData>& Assets);

	/**
	 * Apply all matching rules to an asset.
	 * @param Asset The asset to apply rules to
	 * @return The number of rules that were applied
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Validator")
	int32 ApplyRulesToAsset(UObject* Asset);

	/**
	 * Check if an asset passes all validation rules.
	 * @param Asset The asset to check
	 * @return True if the asset passes all rules or has no applicable rules
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Validator")
	bool DoesAssetPassValidation(UObject* Asset);

	/**
	 * Show a notification for validation results with optional fix button.
	 * @param Result The validation result to show
	 * @param bShowFixButton Whether to show a button to apply fixes
	 */
	void ShowValidationNotification(const FAssetValidatorResult& Result, bool bShowFixButton = true);

	/**
	 * Get any editor subsystem by class. Use this in Blueprint actions to access
	 * editor functionality without triggering the "Editor Utilities only" warning.
	 * @param SubsystemClass The subsystem class to get
	 * @return The subsystem instance, or nullptr if not available
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Validator", meta = (DeterminesOutputType = "SubsystemClass"))
	UEditorSubsystem* GetEditorSubsystemByClass(TSubclassOf<UEditorSubsystem> SubsystemClass) const;

private:
	/** Handle asset pre-save event */
	void OnAssetPreSave(UObject* Asset, FObjectPreSaveContext SaveContext);

	/** Handle asset renamed event */
	void OnAssetRenamed(const FAssetData& AssetData, const FString& OldObjectPath);

	/** Dismiss any existing notification for an asset */
	void DismissNotificationForAsset(FName AssetPath);

	/** Delegate handles for cleanup */
	FDelegateHandle OnAssetPreSaveHandle;
	FDelegateHandle OnAssetRenamedHandle;

	/** Track active notifications to avoid duplicates and allow dismissal */
	TMap<FName, TWeakPtr<SNotificationItem>> ActiveNotifications;
};
