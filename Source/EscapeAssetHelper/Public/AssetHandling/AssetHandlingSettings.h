#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AssetNaming/AssetNamingTypes.h"
#include "AssetValidator/AssetValidatorTypes.h"
#include "AssetValidator/AssetValidatorRuleBase.h"
#include "AssetHandlingSettings.generated.h"

/**
 * Unified settings for the Escape Asset Helper plugin.
 * All plugin configuration is centralized here with categories for:
 * - Asset Handling: Global behavior (ignore, validation triggers, overlay, source control)
 * - Asset Naming: Naming convention configuration
 * - Asset Validator: Validation rules configuration
 */
UCLASS(config=Editor, DefaultConfig, DisplayName="Escape Asset Helper")
class ESCAPEASSETHELPER_API UAssetHandlingSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UAssetHandlingSettings();

	// UObject interface
	virtual void PostInitProperties() override;

	// UDeveloperSettings interface
	virtual FName GetContainerName() const override { return FName("Project"); }
	virtual FName GetCategoryName() const override { return FName("Plugins"); }
	virtual FName GetSectionName() const override { return FName("Escape Asset Helper"); }

#if WITH_EDITOR
	virtual FText GetSectionText() const override;
	virtual FText GetSectionDescription() const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	// ============================================================================
	// ASSET HANDLING - Global/Shared Behavior
	// ============================================================================

	// -------------------- Ignore System --------------------

	/** Metadata tag name used to mark assets as ignored from all validation */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Ignore System",
		meta=(DisplayName="Ignore Metadata Tag", ToolTip="The metadata tag applied to assets to exclude them from naming and validation checks. Assets with this tag will show as 'Ignored' in the overlay."))
	FName IgnoreMetadataTag = TEXT("EscapeAssetHelper_Ignored");

	/** Directories to completely ignore (paths relative to /Game/) */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Ignore System",
		meta=(DisplayName="Ignored Directories", RelativeToGameContentDir, ToolTip="List of directories whose assets are excluded from all validation. Useful for third-party content or work-in-progress folders."))
	TArray<FDirectoryPath> IgnoredDirectories;

	// -------------------- Validation --------------------

	/** Validate when an asset is renamed (applies to both naming and validator) */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Validation",
		meta=(DisplayName="Validate On Rename", ToolTip="When enabled, assets are validated against naming conventions when renamed in the Content Browser."))
	bool bValidateOnRename = true;

	/** Validate when an asset is saved (applies to both naming and validator) */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Validation",
		meta=(DisplayName="Validate On Save", ToolTip="When enabled, assets are validated against naming conventions when saved. Invalid names will be logged to the Message Log."))
	bool bValidateOnSave = true;

	/** Automatically fix naming convention issues without prompting (use with caution!) */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Validation",
		meta=(DisplayName="Auto-Fix Without Prompt (Naming Conventions)", ToolTip="When enabled, naming convention violations are automatically corrected without showing a confirmation dialog. Use with caution as this renames assets immediately."))
	bool bAutoFixNamingWithoutPrompt = false;

	/** Automatically fix validator rule issues without prompting (use with caution!) */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Validation",
		meta=(DisplayName="Auto-Fix Without Prompt (Validator Rules)", ToolTip="When enabled, validator rule actions are automatically applied without prompting. Use with caution as this modifies asset properties immediately."))
	bool bAutoFixValidatorWithoutPrompt = false;

	// -------------------- Source Control --------------------

	/** How to handle source control submissions with incorrectly named assets */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Source Control",
		meta=(DisplayName="Source Control Validation Mode", ToolTip="Controls behavior when submitting assets with invalid names to source control: Disabled (no check), WarnOnly (log warnings but allow), or Block (prevent submission)."))
	ESourceControlValidationMode SourceControlMode = ESourceControlValidationMode::WarnOnly;

	// -------------------- Overlay --------------------

	/** Enable the Content Browser status overlay */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Overlay",
		meta=(DisplayName="Enable Overlay", ToolTip="Show validation status symbols on asset thumbnails in the Content Browser. Displays checkmarks, X marks, or other symbols based on naming convention compliance."))
	bool bEnableOverlay = true;

	/** Symbol to show for valid assets (passes naming convention) */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Overlay",
		meta=(DisplayName="Valid Symbol", ToolTip="Unicode character or text displayed on assets that pass naming convention validation. Default is a checkmark."))
	FString ValidSymbol = TEXT("\u2713");

	/** Color for valid assets */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Overlay",
		meta=(DisplayName="Valid Color", ToolTip="Color of the overlay symbol for assets that pass naming convention validation."))
	FLinearColor ValidColor = FLinearColor(0.0f, 0.8f, 0.0f, 1.0f);

	/** Symbol to show for invalid assets (fails naming convention) */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Overlay",
		meta=(DisplayName="Invalid Symbol", ToolTip="Unicode character or text displayed on assets that fail naming convention validation. Default is an X mark."))
	FString InvalidSymbol = TEXT("\u2717");

	/** Color for invalid assets */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Overlay",
		meta=(DisplayName="Invalid Color", ToolTip="Color of the overlay symbol for assets that fail naming convention validation."))
	FLinearColor InvalidColor = FLinearColor(0.9f, 0.01875f, 0.01875f, 1.0f);

	/** Symbol to show for ignored assets */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Overlay",
		meta=(DisplayName="Ignored Symbol", ToolTip="Unicode character or text displayed on assets marked as ignored from validation. Default is a dash."))
	FString IgnoredSymbol = TEXT("-");

	/** Color for ignored assets */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Overlay",
		meta=(DisplayName="Ignored Color", ToolTip="Color of the overlay symbol for assets marked as ignored from validation."))
	FLinearColor IgnoredColor = FLinearColor(0.036458f, 0.036458f, 0.036458f, 0.8f);

	/** Symbol to show for assets with no convention defined */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Overlay",
		meta=(DisplayName="No Convention Symbol", ToolTip="Unicode character or text displayed on assets that have no naming convention defined. Default is a tilde."))
	FString NoConventionSymbol = TEXT("~");

	/** Color for assets with no convention */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Overlay",
		meta=(DisplayName="No Convention Color", ToolTip="Color of the overlay symbol for assets with no naming convention defined."))
	FLinearColor NoConventionColor = FLinearColor(1.0f, 0.414523f, 0.0f, 1.0f);

	/** Font size for overlay symbols */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Overlay",
		meta=(DisplayName="Font Size", ClampMin="8", ClampMax="24", ToolTip="Size of the overlay symbol text on asset thumbnails (8-24 pixels)."))
	int32 OverlayFontSize = 16;

	// -------------------- Documentation --------------------

	/** URL for the asset naming style guide */
	UPROPERTY(Config, EditAnywhere, Category="Asset Handling|Documentation",
		meta=(DisplayName="Style Guide URL", ToolTip="URL to your team's asset naming style guide. Opened via the Style Guide button in the naming dialog and context menus."))
	FString StyleGuideURL = TEXT("https://github.com/Allar/ue5-style-guide");

	// ============================================================================
	// ASSET NAMING - Naming Convention Configuration
	// ============================================================================

	/**
	 * Mapping of asset classes to their naming conventions.
	 * The plugin will use class inheritance to find the most specific match.
	 * Abstract classes are allowed to set conventions for all derived types.
	 */
	UPROPERTY(Config, EditAnywhere, Category="Asset Naming",
		meta=(AllowAbstract="true", DisplayName="Naming Conventions", ToolTip="Define naming conventions (prefix, suffixes) for each asset class. Inheritance is respected: a convention for UTexture applies to UTexture2D unless a more specific rule exists."))
	TMap<TSubclassOf<UObject>, FAssetNamingConvention> NamingConventions;

	/** Whether base asset names must be PascalCase (applies to all conventions) */
	UPROPERTY(Config, EditAnywhere, Category="Asset Naming",
		meta=(DisplayName="Require PascalCase", ToolTip="When enabled, asset base names must use PascalCase format (e.g., 'MyTexture' not 'mytexture' or 'my_texture'). Applies globally to all conventions."))
	bool bRequirePascalCase = true;

	// -------------------- Import Behavior --------------------

	/** Show the naming dialog when assets are imported */
	UPROPERTY(Config, EditAnywhere, Category="Asset Naming|Import",
		meta=(DisplayName="Show Import Dialog", ToolTip="When enabled, shows a dialog to review and correct asset names during import. Allows you to customize the name before the asset is created."))
	bool bShowImportDialog = true;

	/** If true, automatically fix names without showing dialog (requires bShowImportDialog = false) */
	UPROPERTY(Config, EditAnywhere, Category="Asset Naming|Import",
		meta=(DisplayName="Auto-Fix On Import", EditCondition="!bShowImportDialog", ToolTip="When enabled (and Show Import Dialog is disabled), automatically renames imported assets to match naming conventions without user interaction."))
	bool bAutoFixOnImport = false;

	// ============================================================================
	// ASSET VALIDATOR - Validation Rules Configuration
	// ============================================================================

	/** Enable or disable the Asset Validator system */
	UPROPERTY(Config, EditAnywhere, Category="Asset Validator",
		meta=(DisplayName="Enable Asset Validator", ToolTip="Master switch for the Asset Validator system. When disabled, no validation rules are executed on import or save."))
	bool bEnableAssetValidator = true;

	/** Enable verbose logging for debugging rule execution */
	UPROPERTY(Config, EditAnywhere, Category="Asset Validator",
		meta=(DisplayName="Verbose Logging", ToolTip="When enabled, logs detailed information about rule execution, property changes, and validation results to the Output Log. Useful for debugging rules."))
	bool bVerboseLogging = true;

	/** Automatically save assets after applying validation rules */
	UPROPERTY(Config, EditAnywhere, Category="Asset Validator",
		meta=(DisplayName="Save After Applying Rules", ToolTip="When enabled, assets are automatically saved after validation rules modify their properties. Disable if you prefer to save manually."))
	bool bSaveAfterApplyingRules = true;

	/**
	 * Mapping of asset classes to their validation rules.
	 * Rules are applied in order to all assets of the specified class (and subclasses).
	 */
	UPROPERTY(Config, EditAnywhere, Category="Asset Validator",
		meta=(AllowAbstract="false", DisplayName="Validation Rules", ToolTip="Define validation rules for each asset class. Each rule contains queries (conditions) and actions (modifications). Rules are applied in order during import."))
	TMap<TSubclassOf<UObject>, FAssetValidatorRulesArray> ValidationRules;

	// ============================================================================
	// UTILITY FUNCTIONS
	// ============================================================================

	/** Get the singleton instance */
	static const UAssetHandlingSettings* Get();

	/** Get mutable singleton instance */
	static UAssetHandlingSettings* GetMutable();

	/** Get documentation URL from plugin descriptor */
	FString GetDocumentationURL() const;

	/**
	 * Get the naming convention for a specific class, checking inheritance chain.
	 * Returns the most specific matching convention.
	 * @param Class The class to look up
	 * @return Pointer to the convention, or nullptr if none found
	 */
	const FAssetNamingConvention* GetConventionForClass(const UClass* Class) const;

	/**
	 * Get the naming convention for a specific asset, handling Blueprints specially.
	 * For Blueprints: checks GeneratedClass -> ParentClass -> asset's direct class.
	 * For other assets: checks asset's direct class.
	 * @param Asset The asset to look up
	 * @return Pointer to the convention, or nullptr if none found
	 */
	const FAssetNamingConvention* GetConventionForAsset(const UObject* Asset) const;

public:
	// UObject interface
	virtual void BeginDestroy() override;

private:
	/** Cached class-to-convention mapping for faster lookups */
	mutable TMap<const UClass*, const FAssetNamingConvention*> CachedConventionLookups;

	/** Invalidate the cached lookups when settings change */
	void InvalidateCache() const;

#if WITH_EDITOR
	/** Check for conflicting settings and log warnings */
	void ValidateSettings() const;

	/** Handle for Blueprint compilation delegate */
	FDelegateHandle OnBlueprintCompiledHandle;

	/** Called when a Blueprint is compiled - invalidates cache for affected classes */
	void OnBlueprintCompiled();

	/** Register Blueprint compilation hook */
	void RegisterBlueprintCompilationHook();

	/** Unregister Blueprint compilation hook */
	void UnregisterBlueprintCompilationHook();
#endif
};
