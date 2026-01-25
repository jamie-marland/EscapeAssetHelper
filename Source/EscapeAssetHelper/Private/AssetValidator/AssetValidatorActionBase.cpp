#include "AssetValidator/AssetValidatorActionBase.h"
#include "AssetValidator/AssetValidatorSubsystem.h"

bool UAssetValidatorActionBase::Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset)
{
	// Base implementation returns false - subclasses must override
	return false;
}
