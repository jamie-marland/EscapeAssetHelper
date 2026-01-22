#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "AssetNaming/AssetNamingTypes.h"
#include "ISourceControlChangelist.h"
#include "Misc/DataValidation.h"
#include "AssetNamingSubsystem.generated.h"

class UFactory;
class SWindow;
struct FAssetData;

/**
 * Editor subsystem that manages asset naming validation.
 * Hooks into import, rename, save, and source control events to enforce naming conventions.
 */
UCLASS(BlueprintType)
class ESCAPEASSETHELPER_API UAssetNamingSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

public:
	// UEditorSubsystem interface
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// ==================== Public Validation API ====================

	/**
	 * Validate an asset's name against the configured naming conventions.
	 * @param Asset The asset to validate
	 * @return Validation result with errors and suggested name
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	FAssetValidationResult ValidateAsset(UObject* Asset) const;

	/**
	 * Validate multiple assets and show results in Message Log.
	 * @param Assets The assets to validate
	 * @return Batch validation result
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	FBatchValidationResult ValidateAssets(const TArray<FAssetData>& Assets);

	/** Delegate type for async validation completion */
	DECLARE_DELEGATE_OneParam(FOnAsyncValidationComplete, const FBatchValidationResult& /*Result*/);

	/**
	 * Validate multiple assets asynchronously.
	 * Progress is shown via a slow task dialog and results are delivered via callback.
	 * @param Assets The assets to validate
	 * @param OnComplete Callback when validation completes with results
	 */
	void ValidateAssetsAsync(const TArray<FAssetData>& Assets, FOnAsyncValidationComplete OnComplete);

	/**
	 * Automatically fix an asset's name to match conventions.
	 * @param Asset The asset to fix
	 * @return True if the asset was successfully renamed
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	bool AutoFixAssetName(UObject* Asset);

	/**
	 * Automatically fix multiple assets' names.
	 * @param Assets The assets to fix
	 * @return Number of assets successfully renamed
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Naming")
	int32 AutoFixAssets(const TArray<FAssetData>& Assets);

	// ==================== Import Dialog ====================

	/**
	 * Show the naming dialog for an asset.
	 * @param Asset The asset to rename
	 * @param OnComplete Callback when dialog is closed (receives final name)
	 */
	void ShowNamingDialogForAsset(UObject* Asset, TFunction<void(FString)> OnComplete);

private:
	// ==================== Event Handlers ====================

	/** Called after an asset is imported */
	void OnAssetPostImport(UFactory* Factory, UObject* CreatedObject);

	/** Called when an asset is renamed */
	void OnAssetRenamed(const FAssetData& AssetData, const FString& OldObjectPath);

	/** Called before a package is saved */
	void OnPackagePreSave(UPackage* Package, FObjectPreSaveContext Context);

	// ==================== Message Log ====================

	/** Log a validation warning to the Message Log with auto-fix action */
	void LogValidationWarning(const FAssetValidationResult& Result, UObject* Asset);

	/** Log a validation error to the Message Log */
	void LogValidationError(const FAssetValidationResult& Result, UObject* Asset);

	// ==================== Utility ====================

	/** Get the settings object */
	const class UAssetHandlingSettings* GetSettings() const;

	/** Rename an asset using the AssetTools module */
	bool RenameAsset(UObject* Asset, const FString& NewName);

	/** Check if we should validate this asset based on settings and ignore flags */
	bool ShouldValidateAsset(const UObject* Asset) const;

	/**
	 * Check if an asset with the given name exists and show warning dialog if so.
	 * @param PackagePath The package path where the asset would be created/renamed
	 * @param TargetName The target name to check
	 * @param CurrentName The current name (for display in warning), empty if from dialog
	 * @return True if user wants to proceed (no collision or user accepted), false to cancel
	 */
	bool CheckNameCollisionAndWarn(const FString& PackagePath, const FString& TargetName, const FString& CurrentName) const;

	/**
	 * Check if a rename would result in a path that exceeds Windows MAX_PATH (260 chars).
	 * Shows a warning dialog if the path would be too long.
	 * @param PackagePath The package path where the asset would be renamed
	 * @param NewName The new name for the asset
	 * @return True if path length is acceptable, false if too long
	 */
	bool CheckPathLengthAndWarn(const FString& PackagePath, const FString& NewName) const;

private:
	/** Handle for the post-import delegate */
	FDelegateHandle PostImportDelegateHandle;

	/** Handle for the asset renamed delegate */
	FDelegateHandle AssetRenamedDelegateHandle;

	/** Handle for the pre-save delegate */
	FDelegateHandle PreSaveDelegateHandle;

	/** Track assets currently being processed to avoid recursion */
	TSet<FName> AssetsBeingProcessed;

	/** Flag to temporarily disable validation (e.g., during auto-fix) */
	bool bValidationEnabled = true;

	// ==================== Source Control ====================

	/** Register with source control for pre-submit validation */
	void RegisterSourceControlHooks();

	/** Unregister source control hooks */
	void UnregisterSourceControlHooks();

	/** Callback for source control pre-submit validation (matches UE5 delegate signature) */
	void OnPreSubmitDataValidation(FSourceControlChangelistPtr Changelist, EDataValidationResult& OutResult, TArray<FText>& OutErrors, TArray<FText>& OutWarnings);

	/** Validate files before source control submit */
	bool ValidateFilesForSourceControl(const TArray<FString>& InFiles, TArray<FText>& OutErrors, TArray<FText>& OutWarnings);
};
