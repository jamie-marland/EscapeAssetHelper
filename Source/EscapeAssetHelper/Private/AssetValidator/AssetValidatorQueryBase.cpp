#include "AssetValidator/AssetValidatorQueryBase.h"
#include "AssetValidator/AssetValidatorSubsystem.h"

bool UAssetValidatorQueryBase::Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset)
{
	// Base implementation returns false - subclasses must override
	return false;
}
