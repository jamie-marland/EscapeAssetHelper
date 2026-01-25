#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssetValidatorActionBase.generated.h"

class UAssetValidatorSubsystem;

/**
 * Base class for all asset validator actions.
 * Actions are operations that are applied to assets when query conditions are met.
 * Subclass this to create custom actions.
 *
 * Use the Subsystem parameter to access editor subsystems via GetEditorSubsystemByClass().
 */
UCLASS(Abstract, EditInlineNew, DefaultToInstanced, Blueprintable, BlueprintType,
	DisplayName = "Asset Validator Action Base",
	AutoExpandCategories = ("Asset Validator"),
	CollapseCategories)
class ESCAPEASSETHELPER_API UAssetValidatorActionBase : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Apply the action to the given asset.
	 * @param Subsystem The validator subsystem - use GetEditorSubsystemByClass() for editor access
	 * @param Asset The asset to apply the action to
	 * @return True if the action was applied successfully
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Asset Validator")
	bool Apply(UAssetValidatorSubsystem* Subsystem, UObject* Asset);
	virtual bool Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset);
};
