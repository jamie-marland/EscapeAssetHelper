#include "AssetValidator/AssetValidatorActions.h"
#include "AssetValidator/AssetValidatorSubsystem.h"
#include "AssetHandling/AssetHandlingSettings.h"
#include "EditorAssetLibrary.h"
#include "Engine/Texture.h"
#include "Engine/StaticMesh.h"
#include "Engine/SkeletalMesh.h"
#include "Engine/Blueprint.h"
#include "Materials/Material.h"
#include "Materials/MaterialInstance.h"
#include "Sound/SoundBase.h"
#include "EscapeAssetHelper.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "AssetToolsModule.h"
#include "Misc/MessageDialog.h"

// ==================== UAssetValidatorActionSetAssetTags ====================

bool UAssetValidatorActionSetAssetTags::Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset)
{
	if (!IsValid(Asset))
	{
		return false;
	}

	for (const TTuple<FName, FString>& AssetTag : AssetTags)
	{
		if (AssetTag.Key == NAME_None || AssetTag.Value.IsEmpty())
		{
			continue;
		}

		UEditorAssetLibrary::SetMetadataTag(Asset, AssetTag.Key, AssetTag.Value);
	}

	return true;
}

// ==================== UAssetValidatorActionRemoveAssetTags ====================

bool UAssetValidatorActionRemoveAssetTags::Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset)
{
	if (!IsValid(Asset))
	{
		return false;
	}

	for (const FName& TagKey : TagsToRemove)
	{
		if (TagKey == NAME_None)
		{
			continue;
		}

		UEditorAssetLibrary::RemoveMetadataTag(Asset, TagKey);
	}

	return true;
}

// ==================== UAssetValidatorActionLogMessage ====================

bool UAssetValidatorActionLogMessage::Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset)
{
	if (!IsValid(Asset))
	{
		return false;
	}

	// Replace tokens
	FString FormattedMessage = Message;
	FormattedMessage = FormattedMessage.Replace(TEXT("{AssetName}"), *Asset->GetName());
	FormattedMessage = FormattedMessage.Replace(TEXT("{AssetPath}"), *Asset->GetPathName());
	FormattedMessage = FormattedMessage.Replace(TEXT("{AssetClass}"), *Asset->GetClass()->GetName());

	switch (Verbosity)
	{
	case EAssetValidatorLogVerbosity::Error:
		UE_LOG(LogEscapeAssetHelper, Error, TEXT("[Validator] %s"), *FormattedMessage);
		break;
	case EAssetValidatorLogVerbosity::Warning:
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Validator] %s"), *FormattedMessage);
		break;
	case EAssetValidatorLogVerbosity::Display:
		UE_LOG(LogEscapeAssetHelper, Display, TEXT("[Validator] %s"), *FormattedMessage);
		break;
	case EAssetValidatorLogVerbosity::Log:
	default:
		UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Validator] %s"), *FormattedMessage);
		break;
	case EAssetValidatorLogVerbosity::Verbose:
		UE_LOG(LogEscapeAssetHelper, Verbose, TEXT("[Validator] %s"), *FormattedMessage);
		break;
	}

	return true;
}

// ==================== UAssetValidatorActionMarkModified ====================

bool UAssetValidatorActionMarkModified::Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset)
{
	if (!IsValid(Asset))
	{
		return false;
	}

	Asset->MarkPackageDirty();
	return true;
}

// ==================== UAssetValidatorActionSetPropertyValue ====================

bool UAssetValidatorActionSetPropertyValue::Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset)
{
	if (!IsValid(Asset) || PropertyName == NAME_None)
	{
		return false;
	}

	// Find the property
	FProperty* Property = Asset->GetClass()->FindPropertyByName(PropertyName);
	if (!Property)
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Validator] SetPropertyValue: Property '%s' not found on asset '%s'"),
			*PropertyName.ToString(), *Asset->GetName());
		return false;
	}

	// Get old value
	FString OldValue;
	void* PropertyPtr = Property->ContainerPtrToValuePtr<void>(Asset);
	Property->ExportTextItem_Direct(OldValue, PropertyPtr, nullptr, Asset, PPF_None);

	// Set value from string
	if (!Property->ImportText_Direct(*PropertyValue, PropertyPtr, Asset, PPF_None))
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Validator] SetPropertyValue: Failed to set property '%s' to '%s' on '%s'"),
			*PropertyName.ToString(), *PropertyValue, *Asset->GetName());
		return false;
	}

	// Verify the change
	FString NewValue;
	Property->ExportTextItem_Direct(NewValue, PropertyPtr, nullptr, Asset, PPF_None);

	if (const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get())
	{
		if (Settings->bVerboseLogging)
		{
			UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Validator] SetPropertyValue: Asset='%s', Property='%s', Old='%s', New='%s'"),
				*Asset->GetName(), *PropertyName.ToString(), *OldValue, *NewValue);
		}
	}

	// Some assets need special updates after property change - JM
	if (UTexture* Texture = Cast<UTexture>(Asset))
	{
		Texture->UpdateResource();
	}
	else if (UStaticMesh* Mesh = Cast<UStaticMesh>(Asset))
	{
		Mesh->Build();
	}
	else if (UMaterial* Material = Cast<UMaterial>(Asset))
	{
		Material->PostEditChange();
	}

	// Mark the asset as modified
	Asset->MarkPackageDirty();
	return true;
}

// ==================== UAssetValidatorActionShowNotification ====================

bool UAssetValidatorActionShowNotification::Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset)
{
	if (!IsValid(Asset))
	{
		return false;
	}

	// Format the message with token replacements
	FString FormattedMessage = Message;
	FormattedMessage = FormattedMessage.Replace(TEXT("{AssetName}"), *Asset->GetName());
	FormattedMessage = FormattedMessage.Replace(TEXT("{AssetPath}"), *Asset->GetPathName());
	FormattedMessage = FormattedMessage.Replace(TEXT("{AssetClass}"), *Asset->GetClass()->GetName());

	// Create notification info
	FNotificationInfo Info(FText::FromString(FormattedMessage));
	Info.ExpireDuration = ExpireDuration;
	Info.bFireAndForget = true;
	Info.bUseThrobber = false;

	// Show and set severity
	TSharedPtr<SNotificationItem> NotificationItem = FSlateNotificationManager::Get().AddNotification(Info);
	if (NotificationItem.IsValid())
	{
		switch (Severity)
		{
		case EAssetValidatorNotificationSeverity::Success:
			NotificationItem->SetCompletionState(SNotificationItem::CS_Success);
			break;
		case EAssetValidatorNotificationSeverity::Warning:
			NotificationItem->SetCompletionState(SNotificationItem::CS_Pending);
			break;
		case EAssetValidatorNotificationSeverity::Error:
			NotificationItem->SetCompletionState(SNotificationItem::CS_Fail);
			break;
		case EAssetValidatorNotificationSeverity::Info:
		default:
			NotificationItem->SetCompletionState(SNotificationItem::CS_None);
			break;
		}
	}

	// Verbose log
	if (const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get())
	{
		if (Settings->bVerboseLogging)
		{
			UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Validator] ShowNotification: Asset='%s', Message='%s'"),
				*Asset->GetName(), *FormattedMessage);
		}
	}

	return true;
}

// ==================== UAssetValidatorActionMoveAsset ====================

bool UAssetValidatorActionMoveAsset::Apply_Implementation(UAssetValidatorSubsystem* Subsystem, UObject* Asset)
{
	if (!IsValid(Asset) || TargetFolderPath.IsEmpty())
	{
		return false;
	}

	// Process path tokens
	FString ProcessedTargetPath = TargetFolderPath;

	// {AssetClass} token
	ProcessedTargetPath = ProcessedTargetPath.Replace(TEXT("{AssetClass}"), *Asset->GetClass()->GetName());

	// {AssetType} token
	FString AssetType = TEXT("Assets");
	UClass* AssetClass = Asset->GetClass();
	if (AssetClass->IsChildOf(UTexture::StaticClass()))
	{
		AssetType = TEXT("Textures");
	}
	else if (AssetClass->IsChildOf(UMaterial::StaticClass()) || AssetClass->IsChildOf(UMaterialInstance::StaticClass()))
	{
		AssetType = TEXT("Materials");
	}
	else if (AssetClass->IsChildOf(UStaticMesh::StaticClass()))
	{
		AssetType = TEXT("Meshes");
	}
	else if (AssetClass->IsChildOf(USkeletalMesh::StaticClass()))
	{
		AssetType = TEXT("Meshes");
	}
	else if (AssetClass->IsChildOf(UBlueprint::StaticClass()))
	{
		AssetType = TEXT("Blueprints");
	}
	else if (AssetClass->IsChildOf(USoundBase::StaticClass()))
	{
		AssetType = TEXT("Audio");
	}
	ProcessedTargetPath = ProcessedTargetPath.Replace(TEXT("{AssetType}"), *AssetType);

	// {AssetName} token
	ProcessedTargetPath = ProcessedTargetPath.Replace(TEXT("{AssetName}"), *Asset->GetName());

	// Normalize the path
	FPaths::NormalizeDirectoryName(ProcessedTargetPath);
	ProcessedTargetPath.ReplaceCharInline('\\', '/');

	// Skip if already there
	FString CurrentFolderPath = FPackageName::GetLongPackagePath(Asset->GetOutermost()->GetName());
	CurrentFolderPath.ReplaceCharInline('\\', '/');
	if (CurrentFolderPath.Equals(ProcessedTargetPath, ESearchCase::IgnoreCase))
	{
		// Already in the correct folder
		return true;
	}

	// This blocks the main thread, avoid in batch operations - JM
	if (bShowConfirmation)
	{
		FText ConfirmMessage = FText::Format(
			FText::FromString(TEXT("Move asset '{0}' from:\n{1}\n\nTo:\n{2}?")),
			FText::FromString(Asset->GetName()),
			FText::FromString(CurrentFolderPath),
			FText::FromString(ProcessedTargetPath)
		);

		EAppReturnType::Type Response = FMessageDialog::Open(
			EAppMsgType::YesNo,
			ConfirmMessage,
			FText::FromString(TEXT("Move Asset"))
		);

		if (Response != EAppReturnType::Yes)
		{
			return false;
		}
	}

	// Create folder if needed
	if (!UEditorAssetLibrary::DoesDirectoryExist(ProcessedTargetPath))
	{
		if (bCreateFolderIfMissing)
		{
			if (!UEditorAssetLibrary::MakeDirectory(ProcessedTargetPath))
			{
				UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Validator] MoveAsset: Failed to create target folder '%s'"),
					*ProcessedTargetPath);
				return false;
			}
		}
		else
		{
			UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Validator] MoveAsset: Target folder '%s' does not exist"),
				*ProcessedTargetPath);
			return false;
		}
	}

	// Do the move
	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

	TArray<FAssetRenameData> RenameData;
	FAssetRenameData Data;
	Data.Asset = Asset;
	Data.NewPackagePath = ProcessedTargetPath;
	Data.NewName = Asset->GetName();
	RenameData.Add(Data);

	bool bSuccess = AssetToolsModule.Get().RenameAssets(RenameData);

	if (bSuccess)
	{
		if (const UAssetHandlingSettings* Settings = UAssetHandlingSettings::Get())
		{
			if (Settings->bVerboseLogging)
			{
				UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Validator] MoveAsset: Moved '%s' from '%s' to '%s'"),
					*Asset->GetName(), *CurrentFolderPath, *ProcessedTargetPath);
			}
		}
	}
	else
	{
		UE_LOG(LogEscapeAssetHelper, Warning, TEXT("[Validator] MoveAsset: Failed to move asset '%s' to '%s'"),
			*Asset->GetName(), *ProcessedTargetPath);
	}

	return bSuccess;
}
