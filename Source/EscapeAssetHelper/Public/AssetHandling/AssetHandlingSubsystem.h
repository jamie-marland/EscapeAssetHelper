#pragma once

#include "CoreMinimal.h"
#include "EditorSubsystem.h"
#include "Logging/MessageLog.h"
#include "AssetHandlingSubsystem.generated.h"

struct FAssetData;
struct FNotificationButtonInfo;
class SNotificationItem;

/**
 * Central subsystem for shared asset handling functionality.
 * Provides ignore checking, documentation access, and notification helpers.
 */
UCLASS(BlueprintType)
class ESCAPEASSETHELPER_API UAssetHandlingSubsystem : public UEditorSubsystem
{
	GENERATED_BODY()

public:
	// UEditorSubsystem interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// ==================== Ignore System ====================

	/**
	 * Check if an asset is marked as ignored from validation.
	 * Checks both metadata tag and directory ignore list.
	 * @param Asset The asset to check
	 * @return True if the asset is ignored
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Handling|Ignore")
	bool IsAssetIgnored(const UObject* Asset) const;

	/**
	 * Set whether an asset should be ignored from validation.
	 * Applies metadata tag to the asset.
	 * @param Asset The asset to modify
	 * @param bIgnored Whether to ignore the asset
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Handling|Ignore")
	void SetAssetIgnored(UObject* Asset, bool bIgnored);

	/**
	 * Check if an asset path is in an ignored directory.
	 * @param AssetPath The asset path to check (e.g., "/Game/Characters/Hero")
	 * @return True if the path is in an ignored directory
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Handling|Ignore")
	bool IsPathIgnored(const FString& AssetPath) const;

	/**
	 * Check if an asset is ignored by its package name without loading the asset.
	 * Useful for checking during asset enumeration.
	 * @param PackageName The package name to check
	 * @return True if the asset is ignored via metadata or directory
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Handling|Ignore")
	bool IsAssetIgnoredByPackageName(FName PackageName) const;

	/**
	 * Check if asset data represents an ignored asset.
	 * Will load the asset for accurate metadata check if needed.
	 * @param AssetData The asset data to check
	 * @return True if the asset is ignored
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Handling|Ignore")
	bool IsAssetDataIgnored(const FAssetData& AssetData) const;

	// ==================== Documentation ====================

	/** Open the style guide URL in the default browser */
	UFUNCTION(BlueprintCallable, Category = "Asset Handling|Documentation")
	void OpenStyleGuide();

	/** Open the plugin documentation URL in the default browser */
	UFUNCTION(BlueprintCallable, Category = "Asset Handling|Documentation")
	void OpenDocumentation();

	/** Open any URL in the default browser */
	UFUNCTION(BlueprintCallable, Category = "Asset Handling|Documentation")
	void OpenURL(const FString& URL);

	// ==================== Notifications ====================

	/**
	 * Show a simple toast notification.
	 * @param Message The message to display
	 * @param ExpireDuration How long to show the notification (default 3.0 seconds)
	 */
	UFUNCTION(BlueprintCallable, Category = "Asset Handling|Notifications")
	void ShowToast(const FText& Message, float ExpireDuration = 3.0f);

	/**
	 * Show a toast notification with a hyperlink to open the Message Log.
	 * @param Message The message to display
	 * @param LogCategory The Message Log category to open when link is clicked
	 * @param ExpireDuration How long to show the notification
	 */
	void ShowToastWithMessageLogLink(const FText& Message, const FName& LogCategory, float ExpireDuration = 5.0f);

	/**
	 * Show a toast notification with action buttons.
	 * @param Message The message to display
	 * @param Buttons Array of button configurations
	 * @return The notification item for manual management (e.g., dismissal)
	 */
	TSharedPtr<SNotificationItem> ShowToastWithButtons(const FText& Message, const TArray<FNotificationButtonInfo>& Buttons);

	/**
	 * Log a message to the specified Message Log category.
	 * @param Category The Message Log category (e.g., "AssetNaming", "AssetValidator")
	 * @param Severity Message severity (Info, Warning, Error)
	 * @param Message The message text
	 * @param OptionalAsset Optional asset to link in the message
	 */
	void LogToMessageLog(const FName& Category, EMessageSeverity::Type Severity, const FText& Message, UObject* OptionalAsset = nullptr);

	/**
	 * Create a tokenized message with optional asset link and action.
	 * @param Severity Message severity
	 * @param Message The message text
	 * @param OptionalAsset Optional asset to link
	 * @param ActionLabel Label for clickable action (empty to skip)
	 * @param Action Delegate to execute on action click
	 * @return The created tokenized message
	 */
	TSharedRef<FTokenizedMessage> CreateTokenizedMessage(
		EMessageSeverity::Type Severity,
		const FText& Message,
		UObject* OptionalAsset = nullptr,
		const FText& ActionLabel = FText::GetEmpty(),
		const FOnActionTokenExecuted& Action = FOnActionTokenExecuted());

	/**
	 * Open a Message Log category panel.
	 * @param Category The category to open
	 */
	void OpenMessageLog(const FName& Category);

private:
	/** Get the settings object */
	const class UAssetHandlingSettings* GetSettings() const;
};
