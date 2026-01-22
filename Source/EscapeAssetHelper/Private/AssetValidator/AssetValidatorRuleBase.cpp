#include "AssetValidator/AssetValidatorRuleBase.h"

bool UAssetValidatorRuleBase::Apply_Implementation(UFactory* Factory, UObject* Asset)
{
	// Base implementation returns false - subclasses must override
	return false;
}

bool UAssetValidatorRule::Apply_Implementation(UFactory* Factory, UObject* Asset)
{
	// Determine if queries pass based on bRequiresAll mode
	// AND mode (bRequiresAll=true): Start true, all must pass
	// OR mode (bRequiresAll=false): Start false (or true if no queries), any passing triggers
	bool bPassesTests = bRequiresAll || (Queries.Num() == 0);

	for (const TObjectPtr<UAssetValidatorQueryBase>& Query : Queries)
	{
		if (!Query)
		{
			continue;
		}

		if (bRequiresAll)
		{
			// AND logic - all queries must pass
			bPassesTests = bPassesTests && Query->Test(Factory, Asset);
			if (!bPassesTests)
			{
				// Early exit if any query fails in AND mode
				break;
			}
		}
		else
		{
			// OR logic - any query passing is sufficient
			bPassesTests = bPassesTests || Query->Test(Factory, Asset);
			if (bPassesTests)
			{
				// Early exit if any query passes in OR mode
				break;
			}
		}
	}

	// If queries didn't pass, don't apply actions
	if (!bPassesTests)
	{
		return false;
	}

	// Apply all actions
	bool bAllActionsSucceeded = true;
	for (const TObjectPtr<UAssetValidatorActionBase>& Action : Actions)
	{
		if (!Action)
		{
			continue;
		}

		bAllActionsSucceeded = bAllActionsSucceeded && Action->Apply(Factory, Asset);
	}

	return bAllActionsSucceeded;
}
