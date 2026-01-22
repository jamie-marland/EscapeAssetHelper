#include "AssetValidator/AssetValidatorActionBase.h"

bool UAssetValidatorActionBase::Apply_Implementation(UFactory* Factory, UObject* Asset)
{
	// Base implementation returns false - subclasses must override
	return false;
}
