using UnrealBuildTool;

public class EscapeAssetHelper : ModuleRules
{
	public EscapeAssetHelper(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
		);

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"UnrealEd",
				"DeveloperSettings",
				"EditorSubsystem",
				"AssetTools",
				"ContentBrowser",
				"ContentBrowserData",
				"AssetRegistry",
				"SourceControl",
				"MessageLog",
				"InputCore",
				"ToolMenus",
				"Projects",
				"EditorScriptingUtilities",
			}
		);
	}
}
