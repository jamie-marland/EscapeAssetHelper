#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Text/STextBlock.h"
#include "AssetNaming/AssetNamingTypes.h"

/** Delegate for when user confirms with a new name */
DECLARE_DELEGATE_OneParam(FOnAssetNameConfirmed, const FString& /*NewName*/);

/**
 * Dialog widget for naming assets according to naming conventions
 */
class SAssetNamingDialog : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SAssetNamingDialog)
		: _Asset(nullptr)
		, _Convention(nullptr)
	{
	}
		/** The asset being named */
		SLATE_ARGUMENT(UObject*, Asset)
		/** The naming convention to apply */
		SLATE_ARGUMENT(const FAssetNamingConvention*, Convention)
		/** Called when the user confirms the new name */
		SLATE_EVENT(FOnAssetNameConfirmed, OnConfirm)
		/** Called when the user cancels */
		SLATE_EVENT(FSimpleDelegate, OnCancel)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

private:
	/** Get the composed asset name from current field values */
	FString GetComposedName() const;

	/** Parse the original name and fill in the text fields */
	void ParseAndFillFields();

	/** Update the preview text */
	void UpdatePreview();

	/** Handle text changes in input fields */
	void OnTextChanged(const FText& NewText);

	/** Handle base name text changes - auto-remove spaces and PascalCase */
	void OnBaseNameTextChanged(const FText& NewText);

	/** Handle base name text committed - auto-clean spaces and PascalCase */
	void OnBaseNameTextCommitted(const FText& NewText, ETextCommit::Type CommitType);

	/** Handle variant text changes - auto-format for valid variants */
	void OnVariantTextChanged(const FText& NewText);

	/** Handle variant text committed - auto-clean for valid variant format */
	void OnVariantTextCommitted(const FText& NewText, ETextCommit::Type CommitType);

	/** Flag to prevent recursive text updates */
	bool bIsUpdatingBaseName = false;
	bool bIsUpdatingVariant = false;

	/** Handle confirm button click */
	FReply OnConfirmClicked();

	/** Handle cancel button click */
	FReply OnCancelClicked();

	/** Handle style guide button click */
	FReply OnStyleGuideClicked();

	/** Validate the current name and show warnings */
	void ValidateCurrentName();

	/** Get the format tooltip */
	FText GetFormatTooltip() const;

private:
	/** The asset being named */
	TWeakObjectPtr<UObject> Asset;

	/** The naming convention */
	const FAssetNamingConvention* Convention;

	/** Original asset name */
	FString OriginalName;

	/** Source filename if available */
	FString SourceFilename;

	/** Text input boxes */
	TSharedPtr<SEditableTextBox> PrefixTextBox;
	TSharedPtr<SEditableTextBox> BaseNameTextBox;
	TSharedPtr<SEditableTextBox> VariantTextBox;
	TSharedPtr<SEditableTextBox> SuffixTextBox;

	/** Preview and validation text */
	TSharedPtr<STextBlock> PreviewText;
	TSharedPtr<STextBlock> ValidationText;

	/** Delegates */
	FOnAssetNameConfirmed OnConfirm;
	FSimpleDelegate OnCancel;
};
