// Fill out your copyright notice in the Description page of Project Settings.


#include "GUI/Slates/SSettingsWidget.h"
#include "SlateOptMacros.h"

#define LOCTEXT_NAMESPACE "SettingsMenu"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SSettingsWidget::Construct(const FArguments& InArgs)
{
	
	bCanSupportFocus = true;
	OwningHUD = InArgs._OwningHUD;

	const FMargin ContentPadding = FMargin(500.0f, 300.0f);
	const FMargin ButtonPadding = FMargin(10.0f);

	const FText TitleText = LOCTEXT("GameTitle", "Settings");
	const FText ResumeText = LOCTEXT("ResumeGame", "Resume");
	const FText MuteText = LOCTEXT("MuteGame", "Mute");
	const FText QuitText = LOCTEXT("QuitGame", "Quit Game");

	FSlateFontInfo ButtonTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
	ButtonTextStyle.Size = 40.0f;

	FSlateFontInfo TitleTextStyle = ButtonTextStyle;
	TitleTextStyle.Size = 60.0f;

	ChildSlot
	[
		SNew(SOverlay)
		+SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SImage)
			.ColorAndOpacity(FColor::Black)
		]
		+SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.Padding(ContentPadding)
		[
			SNew(SVerticalBox)

			//Title Text
			+SVerticalBox::Slot()
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(TitleText)
				.Justification(ETextJustify::Center)
			]

			//Resume Button
			+SVerticalBox::Slot()
			.Padding(ButtonPadding)
			[
				SNew(SButton)
				.OnClicked(this, &SSettingsWidget::OnResumeClicked)
				[
					SNew(STextBlock)
					.Font(ButtonTextStyle)
					.Text(ResumeText)
					.Justification(ETextJustify::Center)
				]
			]
				//Mute Button
			+ SVerticalBox::Slot()
			.Padding(ButtonPadding)
			[
				SNew(SButton)
					.OnClicked(this, &SSettingsWidget::OnMuteClicked)
				[
					SNew(STextBlock)
					.Font(ButtonTextStyle)
					.Text(MuteText)
					.Justification(ETextJustify::Center)
				]
			]
				//Quit Button
			+ SVerticalBox::Slot()
			.Padding(ButtonPadding)
			[
				SNew(SButton)
					.OnClicked(this, &SSettingsWidget::OnQuitClicked)
				[
					SNew(STextBlock)
					.Font(ButtonTextStyle)
					.Text(QuitText)
					.Justification(ETextJustify::Center)
				]
			]
		]
	];
	
}
FReply SSettingsWidget::OnResumeClicked() const
{
	if (OwningHUD.IsValid()) {
		OwningHUD->RemoveSettingsMenu();
	}
	return FReply::Handled();
}
FReply SSettingsWidget::OnMuteClicked() const
{
	return FReply::Handled();
}
FReply SSettingsWidget::OnQuitClicked() const
{
	if (OwningHUD.IsValid()) {
		if (APlayerController* PC = OwningHUD->PlayerOwner) {
			PC->ConsoleCommand("quit");
		}
	}
	return FReply::Handled();
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION
