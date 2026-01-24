#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityObject.h"
#include "AssetValidatorQueryBase.generated.h"

/**
 * Base class for all asset validator queries.
 * Queries are conditions that determine whether validation rules should be applied.
 * Subclass this to create custom query conditions.
 */
UCLASS(Abstract, EditInlineNew, DefaultToInstanced, Blueprintable, BlueprintType,
	DisplayName = "Asset Validator Query Base",
	AutoExpandCategories = ("Asset Validator"),
	CollapseCategories)
class ESCAPEASSETHELPER_API UAssetValidatorQueryBase : public UEditorUtilityObject
{
	GENERATED_BODY()

public:
	/**
	 * Test whether the query condition is met for the given asset.
	 * @param Factory The factory used to import/create the asset (may be null for non-import operations)
	 * @param Asset The asset to test
	 * @return True if the query condition is satisfied
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Asset Validator")
	bool Test(UFactory* Factory, UObject* Asset);
	virtual bool Test_Implementation(UFactory* Factory, UObject* Asset);
};
