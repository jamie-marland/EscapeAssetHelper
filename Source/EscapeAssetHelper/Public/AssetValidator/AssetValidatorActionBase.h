#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityObject.h"
#include "AssetValidatorActionBase.generated.h"

/**
 * Base class for all asset validator actions.
 * Actions are operations that are applied to assets when query conditions are met.
 * Subclass this to create custom actions.
 */
UCLASS(Abstract, EditInlineNew, DefaultToInstanced, Blueprintable, BlueprintType,
	DisplayName = "Asset Validator Action Base",
	AutoExpandCategories = ("Asset Validator"),
	CollapseCategories)
class ESCAPEASSETHELPER_API UAssetValidatorActionBase : public UEditorUtilityObject
{
	GENERATED_BODY()

public:
	/**
	 * Apply the action to the given asset.
	 * @param Factory The factory used to import/create the asset (may be null for non-import operations)
	 * @param Asset The asset to apply the action to
	 * @return True if the action was applied successfully
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Asset Validator")
	bool Apply(UFactory* Factory, UObject* Asset);
	virtual bool Apply_Implementation(UFactory* Factory, UObject* Asset);
};
