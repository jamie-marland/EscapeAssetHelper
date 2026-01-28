#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogEscapeAssetHelper, Log, All);

class FAssetHandlingOverlay;

/**
 * Escape Asset Helper module - Comprehensive asset management plugin
 *
 * Subsections:
 * - Asset Naming: Validates and enforces asset naming conventions
 * - Asset Validator: Rules engine with queries and actions
 * - Asset Status: Visual status overlay in Content Browser
 */
class FEscapeAssetHelperModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/** Clear the overlay status cache (call when settings change) */
	void ClearOverlayCache();

private:
	/** Extends the Content Browser context menu with validation actions */
	TSharedRef<FExtender> OnExtendContentBrowserAssetMenu(const TArray<FAssetData>& SelectedAssets);

	/** Register menu extensions */
	void RegisterMenus();

	/** Load plugin default config into GConfig before settings CDO is created */
	void LoadPluginConfig();

	/** Handle for the content browser extender delegate */
	FDelegateHandle ContentBrowserExtenderDelegateHandle;

	/** Asset handling overlay system */
	TUniquePtr<FAssetHandlingOverlay> StatusOverlay;
};
