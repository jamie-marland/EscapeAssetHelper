#include "AssetNaming/AssetNamingTypes.h"

FString FParsedAssetName::ComposeName() const
{
	TArray<FString> Parts;

	if (!Prefix.IsEmpty())
	{
		Parts.Add(Prefix);
	}

	if (!BaseAssetName.IsEmpty())
	{
		Parts.Add(BaseAssetName);
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

bool FParsedAssetName::MatchesConvention(const FString& ExpectedPrefix, const TArray<FString>& ValidSuffixes) const
{
	// Check prefix (without underscore)
	FString ExpectedPrefixClean = ExpectedPrefix;
	ExpectedPrefixClean.RemoveFromEnd(TEXT("_"));

	if (!ExpectedPrefixClean.IsEmpty() && !Prefix.Equals(ExpectedPrefixClean, ESearchCase::IgnoreCase))
	{
		return false;
	}

	// Check suffix if there are valid suffixes defined
	if (ValidSuffixes.Num() > 0 && !Suffix.IsEmpty())
	{
		bool bFoundValidSuffix = false;
		for (const FString& ValidSuffix : ValidSuffixes)
		{
			FString ValidSuffixClean = ValidSuffix;
			ValidSuffixClean.RemoveFromStart(TEXT("_"));
			if (Suffix.Equals(ValidSuffixClean, ESearchCase::IgnoreCase))
			{
				bFoundValidSuffix = true;
				break;
			}
		}
		if (!bFoundValidSuffix)
		{
			return false;
		}
	}

	return true;
}

FString FAssetNamingConvention::NormalizeIdentifier(const FString& Identifier)
{
	FString Result = Identifier;
	Result.RemoveFromStart(TEXT("_"));
	Result.RemoveFromEnd(TEXT("_"));
	return Result;
}

FString FAssetNamingConvention::GetPrefixWithUnderscore() const
{
	FString Result = NormalizeIdentifier(Prefix);
	if (!Result.IsEmpty())
	{
		Result += TEXT("_");
	}
	return Result;
}

FString FAssetNamingConvention::GetPrefixWithoutUnderscore() const
{
	return NormalizeIdentifier(Prefix);
}

FString FAssetNamingConvention::GetDefaultSuffixWithUnderscore() const
{
	FString Result = NormalizeIdentifier(DefaultSuffix);
	if (!Result.IsEmpty())
	{
		Result = TEXT("_") + Result;
	}
	return Result;
}

FString FAssetNamingConvention::GetDefaultSuffixWithoutUnderscore() const
{
	return NormalizeIdentifier(DefaultSuffix);
}

bool FAssetNamingConvention::IsSuffixValid(const FString& Suffix) const
{
	if (ValidSuffixes.Num() == 0)
	{
		// No suffixes defined means any suffix (or no suffix) is valid
		return true;
	}

	FString NormalizedSuffix = NormalizeIdentifier(Suffix);
	if (NormalizedSuffix.IsEmpty())
	{
		return false;
	}

	// Check direct match against valid suffixes
	for (const FString& ValidSuffix : ValidSuffixes)
	{
		FString NormalizedValid = NormalizeIdentifier(ValidSuffix);
		if (NormalizedValid.Equals(NormalizedSuffix, ESearchCase::IgnoreCase))
		{
			return true;
		}
	}

	// Check aliases
	for (const auto& AliasPair : SuffixAliases)
	{
		FString NormalizedAlias = NormalizeIdentifier(AliasPair.Key);
		if (NormalizedAlias.Equals(NormalizedSuffix, ESearchCase::IgnoreCase))
		{
			// Found alias, check if target is valid
			FString NormalizedTarget = NormalizeIdentifier(AliasPair.Value);
			for (const FString& ValidSuffix : ValidSuffixes)
			{
				if (NormalizeIdentifier(ValidSuffix).Equals(NormalizedTarget, ESearchCase::IgnoreCase))
				{
					return true;
				}
			}
		}
	}

	return false;
}

FString FAssetNamingConvention::GetCanonicalSuffix(const FString& Suffix) const
{
	FString Normalized = NormalizeIdentifier(Suffix);
	if (Normalized.IsEmpty())
	{
		return FString();
	}

	// Track visited to detect cycles - JM
	TSet<FString> Visited;

	while (true)
	{
		if (Visited.Contains(Normalized.ToLower()))
		{
			// Circular reference detected
			return FString();
		}
		Visited.Add(Normalized.ToLower());

		// Check if current value is a valid suffix
		bool bIsValidSuffix = false;
		for (const FString& ValidSuffix : ValidSuffixes)
		{
			FString NormalizedValid = NormalizeIdentifier(ValidSuffix);
			if (NormalizedValid.Equals(Normalized, ESearchCase::IgnoreCase))
			{
				return NormalizedValid;
			}
		}

		// Check if theres an alias to follow
		bool bFoundAlias = false;
		for (const auto& AliasPair : SuffixAliases)
		{
			FString NormalizedAlias = NormalizeIdentifier(AliasPair.Key);
			if (NormalizedAlias.Equals(Normalized, ESearchCase::IgnoreCase))
			{
				Normalized = NormalizeIdentifier(AliasPair.Value);
				bFoundAlias = true;
				break;
			}
		}

		if (!bFoundAlias)
		{
			break;
		}
	}

	return FString();
}

TArray<FAssetValidationResult> FBatchValidationResult::GetInvalidResults() const
{
	TArray<FAssetValidationResult> InvalidResults;
	for (const FAssetValidationResult& Result : Results)
	{
		if (!Result.bIsValid)
		{
			InvalidResults.Add(Result);
		}
	}
	return InvalidResults;
}
