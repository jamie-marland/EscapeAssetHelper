#include "AssetNaming/SAssetNamingDialog.h"
#include "AssetNaming/AssetNamingParser.h"
#include "AssetHandling/AssetHandlingSettings.h"
#include "AssetHandling/AssetHandlingSubsystem.h"
#include "Editor.h"

#include "Widgets/Input/SEditableTextBox.h"
#include "Misc/App.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Layout/SUniformGridPanel.h"
#include "Styling/AppStyle.h"
#include "Framework/Application/SlateApplication.h"

void SAssetNamingDialog::Construct(const FArguments& InArgs)
{
	Asset = InArgs._Asset;
	Convention = InArgs._Convention;
	OnConfirm = InArgs._OnConfirm;
	OnCancel = InArgs._OnCancel;

	if (Asset.IsValid())
	{
		OriginalName = Asset->GetName();
		UAssetNamingParser::GetSourceFilename(Asset.Get(), SourceFilename);
	}

	ChildSlot
	[
		SNew(SBox)
		.MinDesiredWidth(450.0f)
		.Padding(FMargin(16.0f))
		[
			SNew(SVerticalBox)

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 16)
			[
				SNew(SVerticalBox)
				+ SVerticalBox::Slot()
				.AutoHeight()
				[
					SNew(STextBlock)
					.Font(FCoreStyle::GetDefaultFontStyle("Bold", 14))
					.Text(FText::FromString(TEXT("Name Your Asset")))
				]
				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(0, 4, 0, 0)
				[
					SNew(STextBlock)
					.Font(FCoreStyle::GetDefaultFontStyle("Regular", 10))
					.ColorAndOpacity(FSlateColor::UseSubduedForeground())
					.Text(FText::FromString(TEXT("Format: Prefix_BaseAssetName_Variant_Suffix")))
					.ToolTipText(GetFormatTooltip())
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 8)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString(TEXT("Asset Type: ")))
					.ColorAndOpacity(FSlateColor::UseSubduedForeground())
				]
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SNew(STextBlock)
					.Text(Asset.IsValid() ? FText::FromString(Asset->GetClass()->GetName()) : FText::FromString(TEXT("Unknown")))
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 8)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString(TEXT("Original Name: ")))
					.ColorAndOpacity(FSlateColor::UseSubduedForeground())
				]
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SNew(STextBlock)
					.Text(FText::FromString(OriginalName))
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 16)
			[
				SNew(SHorizontalBox)
				.Visibility(SourceFilename.IsEmpty() ? EVisibility::Collapsed : EVisibility::Visible)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(STextBlock)
					.Text(FText::FromString(TEXT("Source File: ")))
					.ColorAndOpacity(FSlateColor::UseSubduedForeground())
				]
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SNew(STextBlock)
					.Text(FText::FromString(SourceFilename))
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 8)
			[
				SNew(SSeparator)
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 8)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				.Padding(0, 0, 8, 0)
				[
					SNew(SBox)
					.MinDesiredWidth(100.0f)
					[
						SNew(STextBlock)
						.Text(FText::FromString(TEXT("Prefix")))
					]
				]
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SAssignNew(PrefixTextBox, SEditableTextBox)
					.OnTextChanged(this, &SAssetNamingDialog::OnTextChanged)
					.ToolTipText(FText::FromString(TEXT("Asset type prefix like BP, M, T, SM")))
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 8)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				.Padding(0, 0, 8, 0)
				[
					SNew(SBox)
					.MinDesiredWidth(100.0f)
					[
						SNew(STextBlock)
						.Text(FText::FromString(TEXT("Base Name")))
					]
				]
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SAssignNew(BaseNameTextBox, SEditableTextBox)
					.OnTextChanged(this, &SAssetNamingDialog::OnBaseNameTextChanged)
					.OnTextCommitted(this, &SAssetNamingDialog::OnBaseNameTextCommitted)
					.ToolTipText(FText::FromString(TEXT("Core asset name in PascalCase. Spaces are auto-removed.")))
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 8)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				.Padding(0, 0, 8, 0)
				[
					SNew(SBox)
					.MinDesiredWidth(100.0f)
					[
						SNew(STextBlock)
						.Text(FText::FromString(TEXT("Variant (opt)")))
					]
				]
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SAssignNew(VariantTextBox, SEditableTextBox)
					.OnTextChanged(this, &SAssetNamingDialog::OnVariantTextChanged)
					.OnTextCommitted(this, &SAssetNamingDialog::OnVariantTextCommitted)
					.ToolTipText(FText::FromString(TEXT("Optional variant. Use 01, 02 for sequences.")))
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 16)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				.Padding(0, 0, 8, 0)
				[
					SNew(SBox)
					.MinDesiredWidth(100.0f)
					[
						SNew(STextBlock)
						.Text(FText::FromString(TEXT("Suffix")))
					]
				]
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SAssignNew(SuffixTextBox, SEditableTextBox)
					.OnTextChanged(this, &SAssetNamingDialog::OnTextChanged)
					.ToolTipText(FText::FromString(TEXT("Asset suffix: D for Diffuse, N for Normal, etc.")))
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 8)
			[
				SNew(SSeparator)
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 8)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.VAlign(VAlign_Center)
				[
					SNew(STextBlock)
					.Text(FText::FromString(TEXT("Preview: ")))
					.Font(FCoreStyle::GetDefaultFontStyle("Bold", 11))
				]
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				.VAlign(VAlign_Center)
				[
					SAssignNew(PreviewText, STextBlock)
					.Font(FCoreStyle::GetDefaultFontStyle("Bold", 11))
					.ColorAndOpacity(FLinearColor(0.2f, 0.8f, 0.2f))
				]
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			.Padding(0, 0, 0, 16)
			[
				SAssignNew(ValidationText, STextBlock)
				.Font(FCoreStyle::GetDefaultFontStyle("Italic", 9))
				.ColorAndOpacity(FLinearColor(1.0f, 0.7f, 0.0f))
				.AutoWrapText(true)
			]

			+ SVerticalBox::Slot()
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(0, 0, 8, 0)
				[
					SNew(SButton)
					.Text(FText::FromString(TEXT("Style Guide")))
					.ToolTipText(FText::FromString(TEXT("Open the asset naming style guide")))
					.OnClicked(this, &SAssetNamingDialog::OnStyleGuideClicked)
				]
				+ SHorizontalBox::Slot()
				.FillWidth(1.0f)
				[
					SNullWidget::NullWidget
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				.Padding(0, 0, 8, 0)
				[
					SNew(SButton)
					.Text(FText::FromString(TEXT("Cancel")))
					.OnClicked(this, &SAssetNamingDialog::OnCancelClicked)
				]
				+ SHorizontalBox::Slot()
				.AutoWidth()
				[
					SNew(SButton)
					.Text(FText::FromString(TEXT("Confirm")))
					.OnClicked(this, &SAssetNamingDialog::OnConfirmClicked)
					.ButtonStyle(FAppStyle::Get(), "PrimaryButton")
				]
			]
		]
	];

	ParseAndFillFields();
	UpdatePreview();
}

FString SAssetNamingDialog::GetComposedName() const
{
	TArray<FString> Parts;

	FString Prefix = PrefixTextBox->GetText().ToString().TrimStartAndEnd();
	FString BaseName = BaseNameTextBox->GetText().ToString().TrimStartAndEnd();
	FString Variant = VariantTextBox->GetText().ToString().TrimStartAndEnd();
	FString Suffix = SuffixTextBox->GetText().ToString().TrimStartAndEnd();

	if (!Prefix.IsEmpty())
	{
		Parts.Add(Prefix);
	}

	if (!BaseName.IsEmpty())
	{
		Parts.Add(BaseName);
	}

	if (!Variant.IsEmpty())
	{
		Parts.Add(Variant);
	}

	if (!Suffix.IsEmpty())
	{
		Parts.Add(Suffix);
	}

	return FString::Join(Parts, TEXT("_"));
}

void SAssetNamingDialog::ParseAndFillFields()
{
	FString NameToParse = !SourceFilename.IsEmpty() ? SourceFilename : OriginalName;
	NameToParse = FPaths::GetBaseFilename(NameToParse);

	TArray<FString> Parts;
	NameToParse.ParseIntoArray(Parts, TEXT("_"), true);

	FString ParsedPrefix, ParsedBaseName, ParsedVariant, ParsedSuffix;

	auto IsValidPrefix = [this](const FString& PotentialPrefix) -> bool
	{
		if (Convention && !Convention->Prefix.IsEmpty())
		{
			FString ExpectedPrefix = Convention->GetPrefixWithoutUnderscore();
			if (PotentialPrefix.Equals(ExpectedPrefix, ESearchCase::IgnoreCase))
			{
				return true;
			}
		}
		return UAssetNamingParser::IsKnownPrefix(PotentialPrefix);
	};

	auto IsLikelyVariant = [](const FString& Str) -> bool
	{
		return Str.Len() <= 3 || Str.IsNumeric() || FCString::IsNumeric(*Str);
	};

	if (Parts.Num() == 0)
	{
	}
	else if (Parts.Num() == 1)
	{
		ParsedBaseName = Parts[0];
	}
	else
	{
		int32 StartIndex = 0;
		int32 EndIndex = Parts.Num();

		if (IsValidPrefix(Parts[0]))
		{
			ParsedPrefix = Parts[0];
			StartIndex = 1;
		}

		if (EndIndex > StartIndex && Convention && Convention->IsSuffixValid(Parts.Last()))
		{
			ParsedSuffix = Parts.Last();
			EndIndex--;
		}
		else if (EndIndex > StartIndex && UAssetNamingParser::IsKnownSuffix(Parts.Last()))
		{
			ParsedSuffix = Parts.Last();
			EndIndex--;
		}

		if (EndIndex > StartIndex + 1)
		{
			FString PotentialVariant = Parts[EndIndex - 1];
			if (IsLikelyVariant(PotentialVariant))
			{
				ParsedVariant = PotentialVariant;
				EndIndex--;
			}
		}

		if (EndIndex > StartIndex)
		{
			TArray<FString> BaseNameParts;
			for (int32 i = StartIndex; i < EndIndex; i++)
			{
				BaseNameParts.Add(Parts[i]);
			}
			ParsedBaseName = FString::Join(BaseNameParts, TEXT(""));
		}
	}

	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();

	if (Convention && !Convention->Prefix.IsEmpty())
	{
		PrefixTextBox->SetText(FText::FromString(Convention->GetPrefixWithoutUnderscore()));
	}
	else if (!ParsedPrefix.IsEmpty())
	{
		PrefixTextBox->SetText(FText::FromString(ParsedPrefix));
	}

	if (!ParsedBaseName.IsEmpty())
	{
		FString BaseName = UAssetNamingParser::ConvertNumbersToWords(ParsedBaseName);
		if (Settings && Settings->bRequirePascalCase)
		{
			BaseName = UAssetNamingParser::ToPascalCase(BaseName);
		}
		BaseNameTextBox->SetText(FText::FromString(BaseName));
	}

	if (!ParsedVariant.IsEmpty())
	{
		VariantTextBox->SetText(FText::FromString(ParsedVariant));
	}

	if (!ParsedSuffix.IsEmpty())
	{
		SuffixTextBox->SetText(FText::FromString(ParsedSuffix));
	}
	else if (Convention && !Convention->DefaultSuffix.IsEmpty() && Convention->bSuffixRequired)
	{
		SuffixTextBox->SetText(FText::FromString(Convention->GetDefaultSuffixWithoutUnderscore()));
	}
}

void SAssetNamingDialog::UpdatePreview()
{
	FString ComposedName = GetComposedName();
	PreviewText->SetText(FText::FromString(ComposedName));

	ValidateCurrentName();
}

void SAssetNamingDialog::OnTextChanged(const FText& NewText)
{
	UpdatePreview();
}

void SAssetNamingDialog::OnBaseNameTextChanged(const FText& NewText)
{
	if (bIsUpdatingBaseName)
	{
		return;
	}

	FString BaseName = NewText.ToString();
	if (BaseName.Contains(TEXT(" ")))
	{
		bIsUpdatingBaseName = true;
		BaseName = UAssetNamingParser::ToPascalCase(BaseName);
		BaseNameTextBox->SetText(FText::FromString(BaseName));
		bIsUpdatingBaseName = false;
	}

	UpdatePreview();
}

void SAssetNamingDialog::OnBaseNameTextCommitted(const FText& NewText, ETextCommit::Type CommitType)
{
	FString BaseName = NewText.ToString();
	bool bNeedsUpdate = false;

	if (UAssetNamingParser::ContainsNumbers(BaseName))
	{
		BaseName = UAssetNamingParser::ConvertNumbersToWords(BaseName);
		bNeedsUpdate = true;
	}

	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();
	if (BaseName.Contains(TEXT(" ")) || BaseName.Contains(TEXT("-")) || BaseName.Contains(TEXT(".")))
	{
		BaseName = UAssetNamingParser::ToPascalCase(BaseName);
		bNeedsUpdate = true;
	}
	else if (Settings && Settings->bRequirePascalCase && !UAssetNamingParser::IsPascalCase(BaseName))
	{
		BaseName = UAssetNamingParser::ToPascalCase(BaseName);
		bNeedsUpdate = true;
	}

	if (bNeedsUpdate)
	{
		BaseNameTextBox->SetText(FText::FromString(BaseName));
	}

	UpdatePreview();
}

void SAssetNamingDialog::OnVariantTextChanged(const FText& NewText)
{
	if (bIsUpdatingVariant)
	{
		return;
	}

	FString Variant = NewText.ToString();
	if (Variant.Contains(TEXT(" ")) || Variant.Contains(TEXT("-")))
	{
		bIsUpdatingVariant = true;
		Variant = UAssetNamingParser::ToPascalCase(Variant);
		VariantTextBox->SetText(FText::FromString(Variant));
		bIsUpdatingVariant = false;
	}

	UpdatePreview();
}

void SAssetNamingDialog::OnVariantTextCommitted(const FText& NewText, ETextCommit::Type CommitType)
{
	FString Variant = NewText.ToString().TrimStartAndEnd();

	if (Variant.IsEmpty())
	{
		UpdatePreview();
		return;
	}

	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();

	if (Variant.Contains(TEXT(" ")) || Variant.Contains(TEXT("-")) || Variant.Contains(TEXT(".")))
	{
		Variant = UAssetNamingParser::ToPascalCase(Variant);
		VariantTextBox->SetText(FText::FromString(Variant));
	}
	else if (Settings && Settings->bRequirePascalCase && !UAssetNamingParser::IsValidVariant(Variant))
	{
		bool bIsAllLower = true;
		for (TCHAR Char : Variant)
		{
			if (!FChar::IsLower(Char) && !FChar::IsDigit(Char))
			{
				bIsAllLower = false;
				break;
			}
		}

		if (bIsAllLower && Variant.Len() > 1)
		{
			Variant = UAssetNamingParser::ToPascalCase(Variant);
			VariantTextBox->SetText(FText::FromString(Variant));
		}
	}

	UpdatePreview();
}

FReply SAssetNamingDialog::OnConfirmClicked()
{
	FString NewName = GetComposedName();
	if (NewName.IsEmpty())
	{
		return FReply::Handled();
	}

	OnConfirm.ExecuteIfBound(NewName);
	return FReply::Handled();
}

FReply SAssetNamingDialog::OnCancelClicked()
{
	OnCancel.ExecuteIfBound();
	return FReply::Handled();
}

FReply SAssetNamingDialog::OnStyleGuideClicked()
{
	if (GEditor)
	{
		if (UAssetHandlingSubsystem* Subsystem = GEditor->GetEditorSubsystem<UAssetHandlingSubsystem>())
		{
			Subsystem->OpenStyleGuide();
		}
	}
	return FReply::Handled();
}

void SAssetNamingDialog::ValidateCurrentName()
{
	TArray<FString> Warnings;

	FString Prefix = PrefixTextBox->GetText().ToString().TrimStartAndEnd();
	FString BaseName = BaseNameTextBox->GetText().ToString().TrimStartAndEnd();
	FString Variant = VariantTextBox->GetText().ToString().TrimStartAndEnd();
	FString Suffix = SuffixTextBox->GetText().ToString().TrimStartAndEnd();

	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();

	if (Convention && !Convention->Prefix.IsEmpty())
	{
		FString ExpectedPrefix = Convention->GetPrefixWithoutUnderscore();
		if (!Prefix.Equals(ExpectedPrefix, ESearchCase::IgnoreCase))
		{
			Warnings.Add(FString::Printf(TEXT("Expected prefix: %s_"), *ExpectedPrefix));
		}
	}

	if (BaseName.IsEmpty())
	{
		Warnings.Add(TEXT("Base name is required"));
	}
	else
	{
		if (UAssetNamingParser::ContainsNumbers(BaseName))
		{
			Warnings.Add(TEXT("Base name should not contain numbers"));
		}

		if (Settings && Settings->bRequirePascalCase && !UAssetNamingParser::IsPascalCase(BaseName))
		{
			Warnings.Add(TEXT("Base name should be PascalCase"));
		}
	}

	if (Settings && Settings->bRequirePascalCase && !Variant.IsEmpty())
	{
		if (!UAssetNamingParser::IsValidVariant(Variant))
		{
			Warnings.Add(TEXT("Variant should be PascalCase, numeric, or a single letter"));
		}
	}

	if (Convention && Convention->bSuffixRequired && Suffix.IsEmpty())
	{
		Warnings.Add(FString::Printf(TEXT("Suffix required. Valid: %s"), *FString::Join(Convention->ValidSuffixes, TEXT(", "))));
	}
	else if (Convention && !Suffix.IsEmpty() && Convention->ValidSuffixes.Num() > 0)
	{
		if (!Convention->IsSuffixValid(Suffix))
		{
			Warnings.Add(FString::Printf(TEXT("Invalid suffix. Valid: %s"), *FString::Join(Convention->ValidSuffixes, TEXT(", "))));
		}
	}

	if (Warnings.Num() > 0)
	{
		ValidationText->SetText(FText::FromString(FString::Join(Warnings, TEXT("\n"))));
		ValidationText->SetVisibility(EVisibility::Visible);
		PreviewText->SetColorAndOpacity(FLinearColor(1.0f, 0.7f, 0.0f));
	}
	else
	{
		ValidationText->SetVisibility(EVisibility::Collapsed);
		PreviewText->SetColorAndOpacity(FLinearColor(0.2f, 0.8f, 0.2f));
	}
}

FText SAssetNamingDialog::GetFormatTooltip() const
{
	FString Tooltip = TEXT("Asset naming format:\n\n");
	Tooltip += TEXT("Prefix: Asset type identifier (BP_, M_, T_, etc.)\n");
	Tooltip += TEXT("BaseAssetName: Core name in PascalCase (no spaces)\n");
	Tooltip += TEXT("Variant: Optional variant - use 01, 02 (not 1, 2) for sequences\n");
	Tooltip += TEXT("Suffix: Asset subtype - for textures: D=Diffuse, N=Normal, R=Roughness, M=Metallic/Mask/Noise, S=Specular, E=Emissive");

	if (Convention)
	{
		Tooltip += TEXT("\n\n--- Current Convention ---\n");
		Tooltip += FString::Printf(TEXT("Prefix: %s\n"), *Convention->GetPrefixWithoutUnderscore());
		if (Convention->ValidSuffixes.Num() > 0)
		{
			Tooltip += FString::Printf(TEXT("Valid Suffixes: %s"), *FString::Join(Convention->ValidSuffixes, TEXT(", ")));
		}
	}

	return FText::FromString(Tooltip);
}
