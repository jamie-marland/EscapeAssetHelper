#include "AssetHandling/AssetHandlingSubsystem.h"
#include "AssetHandling/AssetHandlingSettings.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "EditorAssetLibrary.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Logging/MessageLog.h"
#include "Logging/TokenizedMessage.h"
#include "Misc/UObjectToken.h"
#include "EscapeAssetHelper.h"

void UAssetHandlingSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	UE_LOG(LogEscapeAssetHelper, Log, TEXT("[Handling] Subsystem initialized"));
}

void UAssetHandlingSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

const UAssetHandlingSettings* UAssetHandlingSubsystem::GetSettings() const
{
	return UAssetHandlingSettings::Get();
}

bool UAssetHandlingSubsystem::IsAssetIgnored(const UObject* Asset) const
{
	if (!IsValid(Asset))
	{
		return false;
	}

	const UAssetHandlingSettings* Settings = GetSettings();
	if (!Settings)
	{
		return false;
	}

	FString IgnoreValue = UEditorAssetLibrary::GetMetadataTag(const_cast<UObject*>(Asset), Settings->IgnoreMetadataTag);
	if (IgnoreValue.ToBool())
	{
		return true;
	}

	return IsPathIgnored(Asset->GetPathName());
}

void UAssetHandlingSubsystem::SetAssetIgnored(UObject* Asset, bool bIgnored)
{
	if (!IsValid(Asset))
	{
		return;
	}

	const UAssetHandlingSettings* Settings = GetSettings();
	if (!Settings)
	{
		return;
	}

	if (bIgnored)
	{
		UEditorAssetLibrary::SetMetadataTag(Asset, Settings->IgnoreMetadataTag, TEXT("true"));
	}
	else
	{
		UEditorAssetLibrary::RemoveMetadataTag(Asset, Settings->IgnoreMetadataTag);
	}

	Asset->MarkPackageDirty();
}

bool UAssetHandlingSubsystem::IsPathIgnored(const FString& AssetPath) const
{
	const UAssetHandlingSettings* Settings = GetSettings();
	if (!Settings)
	{
		return false;
	}

	for (const FDirectoryPath& IgnoredDir : Settings->IgnoredDirectories)
	{
		FString IgnoredPath = IgnoredDir.Path;
		if (!IgnoredPath.StartsWith(TEXT("/Game/")))
		{
			IgnoredPath = TEXT("/Game/") + IgnoredPath;
		}

		if (AssetPath.StartsWith(IgnoredPath))
		{
			return true;
		}
	}

	return false;
}

bool UAssetHandlingSubsystem::IsAssetIgnoredByPackageName(FName PackageName) const
{
	const UAssetHandlingSettings* Settings = GetSettings();
	if (!Settings)
	{
		return false;
	}

	if (IsPathIgnored(PackageName.ToString()))
	{
		return true;
	}

	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> Assets;
	AssetRegistryModule.Get().GetAssetsByPackageName(PackageName, Assets);

	for (const FAssetData& AssetData : Assets)
	{
		FString TagValue;
		if (AssetData.GetTagValue(Settings->IgnoreMetadataTag, TagValue))
		{
			if (TagValue.ToBool())
			{
				return true;
			}
		}
	}

	return false;
}

bool UAssetHandlingSubsystem::IsAssetDataIgnored(const FAssetData& AssetData) const
{
	const UAssetHandlingSettings* Settings = GetSettings();
	if (!Settings)
	{
		return false;
	}

	if (IsPathIgnored(AssetData.PackageName.ToString()))
	{
		return true;
	}

	if (UObject* Asset = AssetData.GetAsset())
	{
		FString IgnoreValue = UEditorAssetLibrary::GetMetadataTag(Asset, Settings->IgnoreMetadataTag);
		return IgnoreValue.ToBool();
	}

	FString TagValue;
	if (AssetData.GetTagValue(Settings->IgnoreMetadataTag, TagValue))
	{
		return TagValue.ToBool();
	}

	return false;
}

void UAssetHandlingSubsystem::OpenStyleGuide()
{
	const UAssetHandlingSettings* Settings = GetSettings();
	if (Settings && !Settings->StyleGuideURL.IsEmpty())
	{
		OpenURL(Settings->StyleGuideURL);
	}
}

void UAssetHandlingSubsystem::OpenDocumentation()
{
	const UAssetHandlingSettings* Settings = GetSettings();
	if (Settings)
	{
		FString DocsURL = Settings->GetDocumentationURL();
		if (!DocsURL.IsEmpty())
		{
			OpenURL(DocsURL);
		}
	}
}

void UAssetHandlingSubsystem::OpenURL(const FString& URL)
{
	if (!URL.IsEmpty())
	{
		FPlatformProcess::LaunchURL(*URL, nullptr, nullptr);
	}
}

void UAssetHandlingSubsystem::ShowToast(const FText& Message, float ExpireDuration)
{
	FNotificationInfo Info(Message);
	Info.ExpireDuration = ExpireDuration;
	FSlateNotificationManager::Get().AddNotification(Info);
}

void UAssetHandlingSubsystem::ShowToastWithMessageLogLink(const FText& Message, const FName& LogCategory, float ExpireDuration)
{
	FNotificationInfo Info(Message);
	Info.ExpireDuration = ExpireDuration;
	Info.Hyperlink = FSimpleDelegate::CreateLambda([LogCategory]()
	{
		FMessageLog(LogCategory).Open();
	});
	Info.HyperlinkText = FText::FromString(TEXT("View Details"));
	FSlateNotificationManager::Get().AddNotification(Info);
}

TSharedPtr<SNotificationItem> UAssetHandlingSubsystem::ShowToastWithButtons(const FText& Message, const TArray<FNotificationButtonInfo>& Buttons)
{
	FNotificationInfo Info(Message);
	Info.bFireAndForget = false;
	Info.ExpireDuration = 10.0f;
	Info.bUseThrobber = false;
	Info.ButtonDetails = Buttons;
	return FSlateNotificationManager::Get().AddNotification(Info);
}

void UAssetHandlingSubsystem::LogToMessageLog(const FName& Category, EMessageSeverity::Type Severity, const FText& Message, UObject* OptionalAsset)
{
	FMessageLog MessageLog(Category);
	TSharedRef<FTokenizedMessage> TokenizedMessage = FTokenizedMessage::Create(Severity);
	TokenizedMessage->AddToken(FTextToken::Create(Message));

	if (OptionalAsset)
	{
		TokenizedMessage->AddToken(FUObjectToken::Create(OptionalAsset));
	}

	MessageLog.AddMessage(TokenizedMessage);
}

TSharedRef<FTokenizedMessage> UAssetHandlingSubsystem::CreateTokenizedMessage(
	EMessageSeverity::Type Severity,
	const FText& Message,
	UObject* OptionalAsset,
	const FText& ActionLabel,
	const FOnActionTokenExecuted& Action)
{
	TSharedRef<FTokenizedMessage> TokenizedMessage = FTokenizedMessage::Create(Severity);
	TokenizedMessage->AddToken(FTextToken::Create(Message));

	if (!ActionLabel.IsEmpty() && Action.IsBound())
	{
		TokenizedMessage->AddToken(FActionToken::Create(ActionLabel, FText::GetEmpty(), Action));
	}

	if (OptionalAsset)
	{
		TokenizedMessage->AddToken(FUObjectToken::Create(OptionalAsset));
	}

	return TokenizedMessage;
}

void UAssetHandlingSubsystem::OpenMessageLog(const FName& Category)
{
	FMessageLog(Category).Open();
}
