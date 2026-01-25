# Escape Asset Helper - Documentation

For installation and overview, see [README.md](README.md).

---

## How to Use

This section walks you through the basic workflow for using Escape Asset Helper in your project.

### Getting Started

Once installed, the plugin works automatically. You'll see status symbols appear on your assets in the Content Browser showing whether they follow naming conventions.

### Importing Assets

1. **Drag and drop** your files into the Content Browser as normal
2. If a naming convention exists for that asset type, a **naming dialogue** will appear
3. The dialogue shows the suggested name based on your project's conventions
4. Click **Accept** to use the suggested name, or **Skip** to keep the original

### Checking Asset Status

Look at the **top-left corner** of asset thumbnails in the Content Browser:

- **Green tick (✓)** - Asset follows naming conventions
- **Red cross (✗)** - Asset doesn't follow naming conventions
- **Grey dash (-)** - Asset is ignored from validation
- **Orange tilde (~)** - No naming convention defined for this asset type

### Fixing Asset Names

**Option 1: Right-click menu**
1. Right-click the asset in Content Browser
2. Go to **Escape Asset Helper** → **Auto-Fix Naming**
3. The asset will be renamed to match conventions

**Option 2: Automatic on save**
- Enable "Auto-Fix Without Prompt" in settings
- Assets will be automatically renamed when saved

### Ignoring Specific Assets

Sometimes you need to keep an asset with a non-standard name:

1. Right-click the asset
2. Go to **Escape Asset Helper** → **Toggle Ignore Status**
3. The asset will show a grey dash and won't be flagged as invalid

### Setting Up Naming Conventions

1. Go to **Edit** → **Project Settings** → **Plugins** → **Escape Asset Helper**
2. Under **Asset Naming**, find **Naming Conventions**
3. Click the **+** to add a new convention
4. Select an **Asset Class** (e.g., `Texture2D`)
5. Set the **Prefix** (e.g., `T` for textures)
6. Add any **Valid Suffixes** (e.g., `D`, `N`, `ORM`)

### Setting Up Validation Rules

Validation rules let you automatically check and modify asset properties:

1. In Content Browser, right-click → **Miscellaneous** → **Data Asset**
2. Select **Asset Validator Rule** as the class
3. Name it something descriptive (e.g., `Rule_SetORMCompression`)
4. Open the data asset and configure:
   - Add **Queries** to define when the rule should apply
   - Add **Actions** to define what happens when queries pass
5. Go to **Project Settings** → **Escape Asset Helper** → **Asset Validator**
6. Under **Validation Rules**, add your rule to the appropriate asset class

### Quick Tips

- **Batch operations**: Select multiple assets to validate or fix them all at once
- **Source control**: Enable changelist warnings to catch incorrectly named assets before commit
- **Verbose logging**: Turn this on in settings if rules aren't working as expected - it shows exactly what's happening in the Output Log

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

### Creating Custom Queries & Actions

**Blueprint Implementation:**

1. Create a new Blueprint class with parent `AssetValidatorQueryBase` (or `AssetValidatorActionBase` for actions)
2. Override the `Test` function (or `Apply` for actions)
3. Add any configurable properties you need

**Accessing Editor Subsystems in Blueprints:**

To get access to Subsystems use the `Subsystem` parameter passed to `Test`/`Apply`:

1. From the `Subsystem` pin, call `Get Editor Subsystem By Class`
2. Select the subsystem class you need (e.g., `Static Mesh Editor Subsystem`)
3. The return value is automatically typed correctly
4. Use the subsystem as normal

**C++ Implementation:**

(Actions are the same except the parent is `UAssetValidatorActionBase` and the function is `Apply_Implementation`.)

```cpp
UCLASS(DisplayName = "My Custom Query")
class UMyCustomQuery : public UAssetValidatorQueryBase
{
    GENERATED_BODY()
public:
    virtual bool Test_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset) override
    {
        // Access editor subsystems via the Subsystem parameter
        if (UStaticMeshEditorSubsystem* MeshSubsystem = Cast<UStaticMeshEditorSubsystem>(
            Subsystem->GetEditorSubsystemByClass(UStaticMeshEditorSubsystem::StaticClass())))
        {
            // Use the subsystem...
        }

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
