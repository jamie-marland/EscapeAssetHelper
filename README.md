# Escape Asset Helper

A comprehensive asset management plugin for Unreal Engine 5.6 that enforces naming conventions, applies validation rules, and provides asset status directly in the Content Browser.
Designed for Escape Studios Projects.

## Overview

Escape Asset Helper combines three integrated systems to help teams maintain consistent, high-quality asset pipelines:

- [**Asset Naming**](https://github.com/jamie-marland/EscapeAssetHelper/wiki/Documentation#asset-naming) - Validates and enforces naming conventions following the `Prefix_BaseAssetName_Variant_Suffix` format.
- [**Asset Validator**](https://github.com/jamie-marland/EscapeAssetHelper/wiki/Documentation#asset-validator) - A rules system using queries and actions to validate and edit asset properties.
- [**Asset Status Overlay**](https://github.com/jamie-marland/EscapeAssetHelper/wiki/Documentation#asset-status-overlay) - Visual status indicators showing validation state at a glance.

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

## Documentation

For detailed documentation on configuration, usage, and troubleshooting, see the [Wiki](https://github.com/jamie-marland/EscapeAssetHelper/wiki/Documentation) or [DOCUMENTATION.md](DOCUMENTATION.md).

### Requirements

- Unreal Engine 5.6.1
- Editor Scripting Utilities plugin (Dependency auto-enabled)

## Installation

1. Go to the [latest release](https://github.com/jamie-marland/EscapeAssetHelper/releases) or the sidepanel and download the release zip, and extract.
<img width="615" height="62" alt="image" src="https://github.com/user-attachments/assets/390d6877-e2fe-4adc-912a-d3a99fb9570b" />

2. Copy the `EscapeAssetHelper` folder to your project's `Plugins` directory.  You may need to make it.
<img width="637" height="236" alt="image" src="https://github.com/user-attachments/assets/78eaf97d-08a9-4089-bcea-225b7c3359e6" />

3. Open the Unreal Editor Project. It may say it needs to build the plugin. **Do not worry!** Click *Yes*.

4. Remember to submit to Perforce by going into P4V → Workspace → Project Location and clicking on Plugins, then Add to include in your next submit!
<img width="401" height="387" alt="image" src="https://github.com/user-attachments/assets/68ba126a-a8e7-402e-b22d-c6b691aa4945" />

5. The defaults should suffice, but if not, Open Edit → Project Settings → Plugins → Escape Asset Helper to configure. Remember to read the [Documentation.](https://github.com/jamie-marland/EscapeAssetHelper/wiki/Documentation)


---

## Disclaimer

**Escape Studios' AI policy requires a mandatory disclaimer of its use:
'I acknowledge my use of Anthropics's Claude Opus 4.5, [https://claude.ai/](https://claude.ai/), that was used for development of this plugin in
analysing, planning, coding and testing.'**

---

## Potential Improvements

**Smart quick add**
- Adding a context menu button that harvests, prefix and suffix information, and adds it to the config.

---

## Changelog

**Release v1.3**
- _Added "Allow Extended Base Names" setting - validates underscore-separated names like `BP_Event_Creature_MirrorScare` where each segment is PascalCase._
- _Added case-only rename warning - shows a toast notification when auto-fix performs a capitalisation-only rename with source control enabled._
- _Fixed overlay not updating when settings change - toggling settings now refreshes Content Browser thumbnails immediately._
- _Blueprint-only project compatibility - release builds now include `Installed: true` for projects without a C++ compiler._

**Release v1.2**
- _Replaced unused `UFactory*` parameter._
- _Query/Actions now have a new `UAssetValidatorSubsystem*` variable._
- _Added `GetEditorSubsystemByClass()` function to allow Blueprint actions to access any Editor Subsystem without triggering the "Editor Utilities only" warning._

**Release v1.1**
- _Updated Documentation Links._
- _Fixed a bug where Rules and Queries were not correctly children of UEditorUtilityObject, causing them to not compile._
- _Included Binary and Intermediate to prevent the editor from requesting a build for every user who opened the project. This means a bigger file size but less user hassle._

**Release v1.0** - Initial Release
- _Asset naming convention validation system_
- _Rules-based asset validator with queries and actions_
- _Content Browser validation overlay_
- _Source control pre-submit check_
- _Context menu integration_

---

## Credits & Acknowledgements

**Author:** James Marland
**Email:** james.marland010@escapestudios.ac.uk
**Website:** https://www.jamesmarland.co.uk

- [UnrealImporterRules-CPP](https://github.com/Ryan-DowlingSoka/UnrealImporterRules-CPP) by Ryan-DowlingSoka - The asset validator, despite being modified, is a direct descendant of Ryan's, and his breakdown was incredibly useful in development.
- [Asset Status Overlay](https://www.fab.com/listings/2adac10a-50d4-4232-a9de-a88b8b387ac1) by IANistor - Without IANistor Asset Status Overlay, I would have never been able to figure out how to extend the content browser UI to add a status system.
- [Allar UE5 Style Guide](https://github.com/Allar/ue5-style-guide) by Allar - This was the basis for all naming conventions as recommended by Escape.

---
