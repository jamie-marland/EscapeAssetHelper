#include "AssetValidator/AssetValidatorQueryBase.h"

bool UAssetValidatorQueryBase::Test_Implementation(UFactory* Factory, UObject* Asset)
{
	// Base implementation returns false - subclasses must override
	return false;
}
