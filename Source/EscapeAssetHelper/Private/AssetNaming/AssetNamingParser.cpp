#include "AssetNaming/AssetNamingParser.h"
#include "AssetHandling/AssetHandlingSettings.h"
#include "EditorFramework/AssetImportData.h"

FParsedAssetName UAssetNamingParser::ParseAssetName(const FString& AssetName)
{
	FParsedAssetName Result;
	Result.bIsValid = false;

	if (AssetName.IsEmpty())
	{
		return Result;
	}

	TArray<FString> Parts;
	AssetName.ParseIntoArray(Parts, TEXT("_"), true);

	if (Parts.Num() == 0)
	{
		// No parts means name is only underscores - JM
		Result.BaseAssetName = AssetName;
		Result.bIsValid = false;
		return Result;
	}

	int32 StartIndex = 0;
	int32 EndIndex = Parts.Num();

	if (Parts.Num() > 0)
	{
		FString PotentialPrefix = Parts[0];
		if (IsKnownPrefix(PotentialPrefix))
		{
			Result.Prefix = Parts[0];
			StartIndex = 1;
		}
	}

	if (Parts.Num() > StartIndex)
	{
		FString PotentialSuffix = Parts.Last();
		if (IsKnownSuffix(PotentialSuffix))
		{
			Result.Suffix = Parts.Last();
			EndIndex = Parts.Num() - 1;
		}
	}

	int32 RemainingParts = EndIndex - StartIndex;
	if (RemainingParts >= 2)
	{
		FString LastPart = Parts[EndIndex - 1];
		if (IsLikelyVariant(LastPart))
		{
			Result.Variant = LastPart;
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
		Result.BaseAssetName = FString::Join(BaseNameParts, TEXT("_"));
	}

	Result.bIsValid = !Result.BaseAssetName.IsEmpty();
	return Result;
}

FParsedAssetName UAssetNamingParser::ParseAssetNameWithConvention(const FString& AssetName, const FAssetNamingConvention& Convention)
{
	FParsedAssetName Result;
	Result.bIsValid = false;

	if (AssetName.IsEmpty())
	{
		return Result;
	}

	TArray<FString> Parts;
	AssetName.ParseIntoArray(Parts, TEXT("_"), true);

	if (Parts.Num() == 0)
	{
		// No parts means name is only underscores - JM
		Result.BaseAssetName = AssetName;
		Result.bIsValid = false;
		return Result;
	}

	int32 StartIndex = 0;
	int32 EndIndex = Parts.Num();

	if (Parts.Num() > 0)
	{
		FString PotentialPrefix = Parts[0];
		if (!Convention.Prefix.IsEmpty())
		{
			FString ConventionPrefix = Convention.GetPrefixWithoutUnderscore();
			if (PotentialPrefix.Equals(ConventionPrefix, ESearchCase::IgnoreCase))
			{
				Result.Prefix = Parts[0];
				StartIndex = 1;
			}
		}
		else if (IsKnownPrefix(PotentialPrefix))
		{
			Result.Prefix = Parts[0];
			StartIndex = 1;
		}
	}

	if (Parts.Num() > StartIndex)
	{
		FString PotentialSuffix = Parts.Last();
		if (Convention.ValidSuffixes.Num() > 0)
		{
			for (const FString& ValidSuffix : Convention.ValidSuffixes)
			{
				FString NormalizedValidSuffix = CleanSuffix(ValidSuffix);
				if (PotentialSuffix.Equals(NormalizedValidSuffix, ESearchCase::IgnoreCase))
				{
					Result.Suffix = Parts.Last();
					EndIndex = Parts.Num() - 1;
					break;
				}
			}
		}
		else if (IsKnownSuffix(PotentialSuffix))
		{
			Result.Suffix = Parts.Last();
			EndIndex = Parts.Num() - 1;
		}
	}

	int32 RemainingParts = EndIndex - StartIndex;
	if (RemainingParts >= 2)
	{
		FString LastPart = Parts[EndIndex - 1];
		if (IsLikelyVariant(LastPart))
		{
			Result.Variant = LastPart;
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
		Result.BaseAssetName = FString::Join(BaseNameParts, TEXT("_"));
	}

	Result.bIsValid = !Result.BaseAssetName.IsEmpty();
	return Result;
}

FString UAssetNamingParser::ComposeName(const FParsedAssetName& ParsedName)
{
	return ParsedName.ComposeName();
}

FString UAssetNamingParser::ToPascalCase(const FString& Input)
{
	if (Input.IsEmpty())
	{
		return Input;
	}

	FString Result;
	Result.Reserve(Input.Len());
	bool bCapitalizeNext = true;

	for (int32 i = 0; i < Input.Len(); i++)
	{
		TCHAR Char = Input[i];

		if (FChar::IsAlpha(Char))
		{
			if (bCapitalizeNext)
			{
				Result.AppendChar(FChar::ToUpper(Char));
				bCapitalizeNext = false;
			}
			else
			{
				if (i > 0 && FChar::IsLower(Input[i - 1]) && FChar::IsUpper(Char))
				{
					Result.AppendChar(Char);
				}
				else
				{
					Result.AppendChar(FChar::ToLower(Char));
				}
			}
		}
		else if (FChar::IsDigit(Char))
		{
			Result.AppendChar(Char);
			bCapitalizeNext = false;
		}
		else if (Char == TEXT('_') || Char == TEXT(' ') || Char == TEXT('-') || Char == TEXT('.'))
		{
			bCapitalizeNext = true;
		}
		else
		{
			Result.AppendChar(Char);
		}
	}

	return Result;
}

bool UAssetNamingParser::IsPascalCase(const FString& Input)
{
	if (Input.IsEmpty())
	{
		return true;
	}

	if (!FChar::IsUpper(Input[0]))
	{
		return false;
	}

	if (Input.Contains(TEXT("_")) || Input.Contains(TEXT(" ")) || Input.Contains(TEXT("-")))
	{
		return false;
	}

	return true;
}

bool UAssetNamingParser::IsValidVariant(const FString& Variant)
{
	if (Variant.IsEmpty())
	{
		return true;
	}

	if (Variant.IsNumeric())
	{
		return true;
	}

	if (Variant.Len() == 1 && FChar::IsAlpha(Variant[0]))
	{
		return true;
	}

	if (!FChar::IsUpper(Variant[0]))
	{
		return false;
	}

	if (Variant.Contains(TEXT("_")) || Variant.Contains(TEXT(" ")) || Variant.Contains(TEXT("-")))
	{
		return false;
	}

	for (int32 i = 1; i < Variant.Len(); i++)
	{
		if (!FChar::IsAlnum(Variant[i]))
		{
			return false;
		}
	}

	return true;
}

bool UAssetNamingParser::IsLikelyVariant(const FString& Part)
{
	if (Part.IsEmpty())
	{
		return false;
	}

	if (Part.Len() <= 3)
	{
		return true;
	}

	if (Part.IsNumeric() || FCString::IsNumeric(*Part))
	{
		return true;
	}

	return false;
}

bool UAssetNamingParser::IsKnownPrefix(const FString& PotentialPrefix)
{
	const UAssetHandlingSettings* Settings = GetDefault<UAssetHandlingSettings>();
	if (!Settings)
	{
		return false;
	}

	FString CleanedPrefix = CleanPrefix(PotentialPrefix);
	for (const auto& Pair : Settings->NamingConventions)
	{
		FString ConventionPrefix = Pair.Value.GetPrefixWithoutUnderscore();
		if (CleanedPrefix.Equals(ConventionPrefix, ESearchCase::IgnoreCase))
		{
			return true;
		}
	}

	return false;
}

bool UAssetNamingParser::IsKnownSuffix(const FString& PotentialSuffix)
{
	const UAssetHandlingSettings* Settings = GetDefault<UAssetHandlingSettings>();
	if (!Settings)
	{
		return false;
	}

	FString CleanedSuffix = CleanSuffix(PotentialSuffix);
	for (const auto& Pair : Settings->NamingConventions)
	{
		for (const FString& ValidSuffix : Pair.Value.ValidSuffixes)
		{
			FString NormalizedValidSuffix = CleanSuffix(ValidSuffix);
			if (CleanedSuffix.Equals(NormalizedValidSuffix, ESearchCase::IgnoreCase))
			{
				return true;
			}
		}
	}

	return false;
}

FString UAssetNamingParser::GenerateSuggestedName(const FString& CurrentName, const FAssetNamingConvention& Convention)
{
	FParsedAssetName Parsed = ParseAssetNameWithConvention(CurrentName, Convention);
	FParsedAssetName Corrected;

	Corrected.Prefix = Convention.GetPrefixWithoutUnderscore();

	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();
	if (!Parsed.BaseAssetName.IsEmpty())
	{
		FString ProcessedBaseName = ConvertNumbersToWords(Parsed.BaseAssetName);
		if (Settings && Settings->bRequirePascalCase)
		{
			ProcessedBaseName = ToPascalCase(ProcessedBaseName);
		}
		Corrected.BaseAssetName = ProcessedBaseName;
	}

	if (Corrected.BaseAssetName.IsEmpty())
	{
		FString FallbackName = ConvertNumbersToWords(CurrentName);
		Corrected.BaseAssetName = ToPascalCase(FallbackName);
		if (Corrected.BaseAssetName.IsEmpty())
		{
			Corrected.BaseAssetName = TEXT("NewAsset");
		}
	}

	Corrected.Variant = Parsed.Variant;

	if (!Parsed.Suffix.IsEmpty() && Convention.IsSuffixValid(Parsed.Suffix))
	{
		Corrected.Suffix = Parsed.Suffix;
	}
	else if (Convention.bSuffixRequired && !Convention.DefaultSuffix.IsEmpty())
	{
		Corrected.Suffix = Convention.GetDefaultSuffixWithoutUnderscore();
	}

	return Corrected.ComposeName();
}

TArray<FString> UAssetNamingParser::GenerateAlternativeSuggestions(const FString& CurrentName, const FAssetNamingConvention& Convention)
{
	TArray<FString> Suggestions;
	TSet<FString> UniqueSuggestions;
	FParsedAssetName Parsed = ParseAssetNameWithConvention(CurrentName, Convention);
	const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get();

	auto AddUniqueSuggestion = [&Suggestions, &UniqueSuggestions](const FString& Suggestion)
	{
		if (!Suggestion.IsEmpty() && !UniqueSuggestions.Contains(Suggestion))
		{
			UniqueSuggestions.Add(Suggestion);
			Suggestions.Add(Suggestion);
		}
	};

	FString CorrectedBaseName = Parsed.BaseAssetName;
	if (!CorrectedBaseName.IsEmpty())
	{
		CorrectedBaseName = ConvertNumbersToWords(CorrectedBaseName);
		if (Settings && Settings->bRequirePascalCase)
		{
			CorrectedBaseName = ToPascalCase(CorrectedBaseName);
		}
	}
	if (CorrectedBaseName.IsEmpty())
	{
		FString FallbackName = ConvertNumbersToWords(CurrentName);
		CorrectedBaseName = ToPascalCase(FallbackName);
		if (CorrectedBaseName.IsEmpty())
		{
			CorrectedBaseName = TEXT("NewAsset");
		}
	}

	FString CorrectedPrefix = Convention.GetPrefixWithoutUnderscore();

	{
		FParsedAssetName Corrected;
		Corrected.Prefix = CorrectedPrefix;
		Corrected.BaseAssetName = CorrectedBaseName;
		Corrected.Variant = Parsed.Variant;
		if (Convention.bSuffixRequired && !Convention.DefaultSuffix.IsEmpty())
		{
			Corrected.Suffix = Convention.GetDefaultSuffixWithoutUnderscore();
		}
		AddUniqueSuggestion(Corrected.ComposeName());
	}

	if (!Parsed.Suffix.IsEmpty() && Convention.IsSuffixValid(Parsed.Suffix))
	{
		FParsedAssetName Corrected;
		Corrected.Prefix = CorrectedPrefix;
		Corrected.BaseAssetName = CorrectedBaseName;
		Corrected.Variant = Parsed.Variant;
		Corrected.Suffix = Parsed.Suffix;
		AddUniqueSuggestion(Corrected.ComposeName());
	}

	if (!Parsed.Variant.IsEmpty())
	{
		FParsedAssetName Corrected;
		Corrected.Prefix = CorrectedPrefix;
		Corrected.BaseAssetName = CorrectedBaseName;
		if (Convention.bSuffixRequired && !Convention.DefaultSuffix.IsEmpty())
		{
			Corrected.Suffix = Convention.GetDefaultSuffixWithoutUnderscore();
		}
		else if (!Parsed.Suffix.IsEmpty() && Convention.IsSuffixValid(Parsed.Suffix))
		{
			Corrected.Suffix = Parsed.Suffix;
		}
		AddUniqueSuggestion(Corrected.ComposeName());
	}

	if (!Convention.bSuffixRequired && Suggestions.Num() < 3)
	{
		FParsedAssetName Corrected;
		Corrected.Prefix = CorrectedPrefix;
		Corrected.BaseAssetName = CorrectedBaseName;
		Corrected.Variant = Parsed.Variant;
		AddUniqueSuggestion(Corrected.ComposeName());
	}

	return Suggestions;
}

bool UAssetNamingParser::GetSourceFilename(const UObject* Asset, FString& OutFilename)
{
	if (!IsValid(Asset))
	{
		return false;
	}

	const FObjectPropertyBase* ObjectProperty = FindFProperty<FObjectPropertyBase>(Asset->GetClass(), TEXT("AssetImportData"));
	if (ObjectProperty)
	{
		const UObject* PropertyValue = ObjectProperty->GetObjectPropertyValue_InContainer(Asset);
		if (const UAssetImportData* AssetImportData = Cast<UAssetImportData>(PropertyValue))
		{
			FString SourcePath = AssetImportData->GetFirstFilename();
			if (!SourcePath.IsEmpty())
			{
				OutFilename = FPaths::GetBaseFilename(SourcePath);
				return true;
			}
		}
	}

	return false;
}

FString UAssetNamingParser::CleanPrefix(const FString& Prefix)
{
	FString Result = Prefix;
	Result.RemoveFromEnd(TEXT("_"));
	return Result;
}

FString UAssetNamingParser::CleanSuffix(const FString& Suffix)
{
	FString Result = Suffix;
	Result.RemoveFromStart(TEXT("_"));
	return Result;
}

bool UAssetNamingParser::ContainsNumbers(const FString& BaseName)
{
	for (int32 i = 0; i < BaseName.Len(); i++)
	{
		if (FChar::IsDigit(BaseName[i]))
		{
			return true;
		}
	}
	return false;
}

FString UAssetNamingParser::DigitToWord(TCHAR Digit)
{
	switch (Digit)
	{
		case TEXT('0'): return TEXT("Zero");
		case TEXT('1'): return TEXT("One");
		case TEXT('2'): return TEXT("Two");
		case TEXT('3'): return TEXT("Three");
		case TEXT('4'): return TEXT("Four");
		case TEXT('5'): return TEXT("Five");
		case TEXT('6'): return TEXT("Six");
		case TEXT('7'): return TEXT("Seven");
		case TEXT('8'): return TEXT("Eight");
		case TEXT('9'): return TEXT("Nine");
		default: return FString(1, &Digit);
	}
}

FString UAssetNamingParser::ConvertNumbersToWords(const FString& Input)
{
	if (Input.IsEmpty())
	{
		return Input;
	}

	FString Result;
	Result.Reserve(Input.Len() * 2);

	for (int32 i = 0; i < Input.Len(); i++)
	{
		TCHAR Char = Input[i];
		if (FChar::IsDigit(Char))
		{
			Result.Append(DigitToWord(Char));
		}
		else
		{
			Result.AppendChar(Char);
		}
	}

	return Result;
}
