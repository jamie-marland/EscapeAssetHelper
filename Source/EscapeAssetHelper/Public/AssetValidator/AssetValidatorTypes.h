#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectPtr.h"
#include "AssetValidatorTypes.generated.h"

// Forward declaration for TObjectPtr
class UAssetValidatorRuleBase;

/**
 * Wrapper struct to hold an array of validator rules for a specific asset class.
 * This allows the TMap in settings to hold arrays of rules per class.
 */
USTRUCT(BlueprintType, DisplayName = "Asset Validator Rules Array")
struct ESCAPEASSETHELPER_API FAssetValidatorRulesArray
{
	GENERATED_BODY()

	/** The rules to apply for this asset class */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator")
	TArray<TObjectPtr<UAssetValidatorRuleBase>> Rules;
};
