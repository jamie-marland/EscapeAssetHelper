# Escape Asset Helper

A comprehensive asset management plugin for Unreal Engine 5.6 that enforces naming conventions, applies validation rules, and provides asset status directly in the Content Browser.
Designed for Escape Studios Projects.

## Overview

Escape Asset Helper combines three integrated systems to help teams maintain consistent, high-quality asset pipelines:

- [**Asset Naming**](/README.md#asset-naming#asset-naming) - Validates and enforces naming conventions following the `Prefix_BaseAssetName_Variant_Suffix` format.
- [**Asset Validator**](/README.md#asset-naming#asset-validator) - A rules system using queries and actions to validate and edit asset properties.
- [**Asset Status Overlay**](/README.md#asset-naming#asset-status-overlay) - Visual status indicators showing validation state at a glance.

## Features

* An import dialogue for guided asset naming.
* Configurable naming conventions per asset class to clearly and automatically separate assets by name.
* Suffix aliases for automatic normalization (e.g., `_Albedo` → `_D`)
* Optional PascalCase naming enforcement.
* Rules-based validator with Blueprint and C++ extensible queries and action behaviour.
* Customisable validation status overlay on assets in the content browser.
* Context menu actions for validation and auto-fix.
* Ignore per-asset or directory from needing to be enforced.
* Supports Source control validation and changelist warning or blocking for incorrect assets.

### Requirements

- Unreal Engine 5.6 or later
- Editor Scripting Utilities plugin (Dependency auto-enabled)

## Installation

1. Go to the [latest release](https://github.com/jamie-marland/EscapeAssetHelper/releases) or the sidepanel and download the source code as a zip, and extract.
2. Copy the `EscapeAssetHelper` folder to your project's `Plugins` directory.  You may need to make it.
3. Open the Unreal Editor Project. It will say that it needs to build the plugin. **Do not worry!** Click *Yes*.
4. The defaults should suffice, but if not, Open Edit → Project Settings → Plugins → Escape Asset Helper to configure.

---

## Configuration

### Accessing Settings

Navigate to Edit → Project Settings → Plugins → Escape Asset Helper.

### Settings Categories

**Asset Handling**
- Ignore System: Configure metadata tag and directories to exclude from validation.
- Validation: Toggle validation on rename, save, and auto-fix behaviour.
- Source Control: If bad assets are in the changelist, either warn or block the commit.
- Overlay: Symbol appearance, colours, and font size.
- Documentation: Project-specific style guide URL.

**Asset Naming**
- Naming Conventions: Map asset classes to their prefix/suffix rules.
- Require PascalCase: Enforce PascalCase for base asset names.
- Import: Show naming dialogue on import, auto-fix behaviour.

**Asset Validator**
- Enable Asset Validator: Master toggle for the rules system.
- Verbose Logging: Debug output for rule execution.
- Save After Applying Rules: Auto-save after validation.
- Validation Rules: Map asset classes to validation rule data assets.

---

## Asset Naming

### Naming Format

Assets follow the convention:

```
Prefix_BaseAssetName_Variant_Suffix
```

| Component | Description | Example |
|-----------|-------------|---------|
| Prefix | Asset type identifier | `T`, `BP`, `SM`, `M` |
| BaseAssetName | Core name in PascalCase | `HeroCharacter`, `WoodFloor` |
| Variant | Optional variant identifier | `01`, `Red`, `Large` |
| Suffix | Optional type qualifier | `D` (Diffuse), `N` (Normal) |

**Examples:**
- `T_WoodFloor_D` - Wood floor diffuse texture
- `T_WoodFloor_N` - Wood floor normal map
- `BP_HeroCharacter` - Hero character blueprint
- `SM_Chair_01` - Chair static mesh variant 01

### Convention Configuration

For each asset class, you can configure:

- **Prefix**: Required prefix without underscore (added automatically)
- **Valid Suffixes**: List of allowed suffix identifiers
- **Suffix Aliases**: Map common variations to canonical suffixes (e.g., `Albedo` → `D`)
- **Default Suffix**: Suggested suffix for new assets
- **Suffix Required**: Whether a valid suffix is mandatory

---

## Asset Validator

The Asset Validator uses a rules-engine pattern in which **Rules** combine **Queries** (conditions) with **Actions** (operations).

### Rules

Rules are data assets (`AssetValidatorRule`) that define:

- Target asset class
- One or more queries that must pass
- One or more actions to apply when queries pass
- `bRequiresAllQueries`: Whether all queries must pass (AND) or just one (OR)

### Queries

Queries test conditions on assets. Built-in query types:

| Query | Description |
|-------|-------------|
| **Check Asset Tag** | Check if a metadata tag exists or matches a value |
| **Source Filename Starts With** | Test if the source filename begins with a string |
| **Source Filename Ends With** | Test if the source filename ends with a string (e.g., `_d`, `_n`) |
| **Source Path Contains** | Test if the source file path contains a substring |
| **Source Extension Matches** | Test if the source file extension is in a list (e.g., `png, .jpg, tga`) |
| **Destination Path Contains** | Test if the asset's project path contains a substring |
| **Asset Class Matches** | Test if the asset is a specific class or subclass |
| **Asset Name Matches** | Test asset name against a wildcard pattern (`*`, `?`) |
| **Check Property Value** | Compare a property value using reflection |

### Actions

Actions perform operations on assets when queries pass. Built-in action types:

| Action | Description |
|--------|-------------|
| **Set Asset Tags** | Add metadata tags to the asset |
| **Remove Asset Tags** | Remove metadata tags from the asset |
| **Log Message** | Write to output log with format tokens |
| **Mark Asset Modified** | Flag the asset as needing save |
| **Set Property Value** | Set any exposed property via reflection |
| **Show Notification** | Display a toast notification |

### Format Tokens

Log Message and Show Notification actions support format tokens:
- `{AssetName}` - The asset's name
- `{AssetPath}` - The asset's full package path
- `{AssetClass}` - The asset's class name

### Rule Example

**Example - Set ORM Compression:**

<img width="300" height="350" alt="image" src="https://github.com/user-attachments/assets/a2fb747e-9897-4b6e-954e-728d766fd753" />

### Creating Custom Queries & Actions.

**Blueprint Implementation:**

1. Create a new Editor Scripting Blueprint class, then reparent it to `AssetValidatorQueryBase`; this is so it has access to editor features.
2. Override the `Test` or `Apply` function
3. Add any configurable properties to appear with it.

**C++ Implementation:**

(Actions are the same except the parent is UAssetVaidatorActionBase and the function is Apply_Implementation.)

```cpp
UCLASS(DisplayName = "My Custom Query")
class UMyCustomQuery: public UAssetValidatorQueryBase
{
    GENERATED_BODY()
public:
    virtual bool Test_Implementation(UFactory* Factory, UObject* Asset) override
    {
        // Return true if the condition is met
        return Asset->GetName().Contains(TEXT("Valid"));
    }

    UPROPERTY(EditAnywhere, Category = "Asset Validator")
    FString MyParameter;
};
```
---

## Asset Status Overlay

The overlay displays validation status directly on asset thumbnails.

<img width="424" height="180" alt="image" src="https://github.com/user-attachments/assets/829e5970-8487-4742-aabd-01ca270c1f22" />

### Symbols

| Symbol | Color | Meaning |
|--------|-------|---------|
| ✓ | Green | Valid - asset passes naming convention |
| ✗ | Red | Invalid - asset fails naming convention |
| - | Grey | Ignored - asset excluded from validation |
| ~ | Orange | No Convention - no naming convention defined for this asset class |

### Customisation

- Symbol characters for each state
- Colours (RGBA) for each state
- Font size (8-24 pts)

---

## Context Menu Actions

<img width="508" height="375" alt="image" src="https://github.com/user-attachments/assets/0e850661-849b-47da-84ce-50a1bda56e9f" />

Right-click assets in the Content Browser, and sectioned in **Escape Asset Helper** is the following:

| Action | Description |
|--------|-------------|
| **Validate Asset** | Check naming conventions and run validator rules |
| **Auto-Fix Naming** | Automatically rename to match convention |
| **Toggle Ignore Status** | Add/remove asset from validation ignore list |

Multiple assets can be selected for batch operations.

---

## Troubleshooting

### Common Issues

**Overlay not updating after status change**
- Refresh the Content Browser by switching folders
- Change the view mode and switch back

**Convention not detected for asset class**
- Verify the class or a parent class has a convention defined
- Check that the convention map key matches the exact class

**Import dialogue not appearing**
- Ensure "Show Import Dialogue" is enabled in Asset Naming settings
- Verify the asset class has a convention defined

**Auto-fix creating duplicate assets**
- The plugin warns about name collisions before renaming
- Check for existing assets with the target name

**Validator rules not firing**
- Confirm "Enable Asset Validator" is checked in settings
- Verify the rule's target class matches the asset
- Check that queries are returning true (enable Verbose Logging)

---

## Potential Ideas

**Smart quick add**
- Adding a context menu button that harvests, prefix and suffix information, and adds it to the config.


## Credits & Acknowledgements

**Author:** James Marland
**Email:** james.marland010@escapestudios.ac.uk
**Website:** https://www.jamesmarland.co.uk

- [UnrealImporterRules-CPP](https://github.com/Ryan-DowlingSoka/UnrealImporterRules-CPP) by Ryan-DowlingSoka - The asset validator, despite being modified, is a direct descendant of Ryan's, and his breakdown was incredibly useful in development.
- [Asset Status Overlay](https://www.fab.com/listings/2adac10a-50d4-4232-a9de-a88b8b387ac1) by IANistor - Without IANistor Asset Status Overlay, I would have never been able to figure out how to extend the content browser UI to add a status system.
- [Allar UE5 Style Guide](https://github.com/Allar/ue5-style-guide) by Allar - This was the basis for all naming conventions as recommended by Escape.

**Escape Studios' AI policy requires a mandatory disclaimer of its use:
‘I acknowledge my use of Anthropics’s Claude Opus 4.5, [https://claude.ai/](https://claude.ai/), that aided in
analysing, planning, coding, testing.’**

---
