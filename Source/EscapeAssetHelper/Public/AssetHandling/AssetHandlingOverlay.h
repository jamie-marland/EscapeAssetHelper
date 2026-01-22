#pragma once

#include "CoreMinimal.h"
#include "AssetRegistry/AssetData.h"

class FContentBrowserModule;

/**
 * Validation status for an asset
 */
enum class EAssetStatusType : uint8
{
	/** Asset passes naming convention validation */
	Valid,
	/** Asset fails naming convention validation */
	Invalid,
	/** Asset is explicitly ignored from validation */
	Ignored,
	/** No naming convention defined for this asset type */
	NoConvention
};

/**
 * Content Browser overlay for showing asset validation status.
 * Displays symbols on asset thumbnails:
 * - Green checkmark: Passes naming convention
 * - Red X: Fails naming convention
 * - Gray dash: Ignored from validation
 * - Gray dot: No convention defined
 */
class ESCAPEASSETHELPER_API FAssetHandlingOverlay
{
public:
	FAssetHandlingOverlay();
	~FAssetHandlingOverlay();

	/** Initialize the overlay system and register with Content Browser */
	void Initialize();

	/** Shutdown the overlay system and unregister hooks */
	void Shutdown();

	/** Check if the overlay system is initialized */
	bool IsInitialized() const { return bIsInitialized; }

	/**
	 * Get the validation status for an asset
	 * @param AssetData The asset to check
	 * @return The validation status
	 */
	EAssetStatusType GetAssetStatus(const FAssetData& AssetData) const;

	/**
	 * Generate the overlay widget for an asset
	 * @param AssetData The asset to generate overlay for
	 * @return Widget to display as overlay, or null widget if disabled
	 */
	TSharedRef<SWidget> GenerateOverlayWidget(const FAssetData& AssetData) const;

	/** Invalidate cache for a specific asset */
	void InvalidateCacheForAsset(FName AssetPath);

	/** Clear entire status cache */
	void ClearCache();

private:
	/** Register the overlay generator with Content Browser */
	void RegisterOverlayHooks();

	/** Unregister overlay hooks from Content Browser */
	void UnregisterOverlayHooks();

	/** Called when an asset is renamed */
	void OnAssetRenamed(const FAssetData& AssetData, const FString& OldPath);

private:
	/** Whether the overlay system is initialized */
	bool bIsInitialized = false;

	/** Handle for the Content Browser extra state generator delegate */
	FDelegateHandle ExtraStateGeneratorHandle;

	/** Handle for asset renamed delegate */
	FDelegateHandle AssetRenamedHandle;

	/** Cache of asset status to avoid re-validation */
	mutable TMap<FName, EAssetStatusType> StatusCache;
};
