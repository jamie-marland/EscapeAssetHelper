#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AssetValidator/AssetValidatorQueryBase.h"
#include "AssetValidator/AssetValidatorActionBase.h"
#include "AssetValidatorRuleBase.generated.h"

/**
 * Abstract base class for asset validator rules.
 * Rules are data assets that combine queries and actions for asset validation.
 * Can be saved and reused across projects.
 */
UCLASS(Abstract, Blueprintable, BlueprintType,
	meta = (DisplayName = "Asset Validator Rule Base"),
	AutoExpandCategories = ("Asset Validator"),
	CollapseCategories)
class ESCAPEASSETHELPER_API UAssetValidatorRuleBase : public UDataAsset
{
	GENERATED_BODY()

public:
	/**
	 * Apply this rule to the given asset.
	 * @param Factory The factory used to import/create the asset (may be null)
	 * @param Asset The asset to apply the rule to
	 * @return True if the rule was applied successfully
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Asset Validator")
	bool Apply(UFactory* Factory, UObject* Asset);
	virtual bool Apply_Implementation(UFactory* Factory, UObject* Asset);
};

/**
 * Concrete implementation of an asset validator rule.
 * Contains a list of queries (conditions) and actions (operations).
 * Queries can be combined with AND or OR logic.
 */
UCLASS(meta = (DisplayName = "Asset Validator Rule"))
class ESCAPEASSETHELPER_API UAssetValidatorRule : public UAssetValidatorRuleBase
{
	GENERATED_BODY()

public:
	virtual bool Apply_Implementation(UFactory* Factory, UObject* Asset) override;

	/**
	 * Queries that determine if this rule should apply.
	 * These are conditions that are tested against the asset.
	 */
	UPROPERTY(Instanced, EditAnywhere, BlueprintReadWrite, Category = "Asset Validator",
		meta = (ExposeOnSpawn))
	TArray<TObjectPtr<UAssetValidatorQueryBase>> Queries;

	/**
	 * Actions to apply when queries pass.
	 * These operations are performed on the asset.
	 */
	UPROPERTY(Instanced, EditAnywhere, BlueprintReadWrite, Category = "Asset Validator",
		meta = (ExposeOnSpawn))
	TArray<TObjectPtr<UAssetValidatorActionBase>> Actions;

	/**
	 * If true, ALL queries must pass (AND logic).
	 * If false, ANY query passing triggers actions (OR logic).
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Asset Validator",
		meta = (ExposeOnSpawn, DisplayName = "Require All Queries"))
	bool bRequiresAll = true;
};
