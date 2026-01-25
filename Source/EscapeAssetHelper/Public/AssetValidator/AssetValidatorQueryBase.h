#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AssetValidatorQueryBase.generated.h"

class UAssetValidatorSubsystem;

/**
 * Base class for all asset validator queries.
 * Queries are conditions that determine whether validation rules should be applied.
 * Subclass this to create custom query conditions.
 *
 * Use the Subsystem parameter to access editor subsystems via GetEditorSubsystemByClass().
 */
UCLASS(Abstract, EditInlineNew, DefaultToInstanced, Blueprintable, BlueprintType,
	DisplayName = "Asset Validator Query Base",
	AutoExpandCategories = ("Asset Validator"),
	CollapseCategories)
class ESCAPEASSETHELPER_API UAssetValidatorQueryBase : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Test whether the query condition is met for the given asset.
	 * @param Subsystem The validator subsystem - use GetEditorSubsystemByClass() for editor access
	 * @param Asset The asset to test
	 * @return True if the query condition is satisfied
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Asset Validator")
	bool Test(UAssetValidatorSubsystem* Subsystem, UObject* Asset);
	virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset);
};
