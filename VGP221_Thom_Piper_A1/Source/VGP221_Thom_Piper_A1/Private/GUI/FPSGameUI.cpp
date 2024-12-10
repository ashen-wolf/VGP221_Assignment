// Fill out your copyright notice in the Description page of Project Settings.


#include "GUI/FPSGameUI.h"

void UFPSGameUI::NativeConstruct()
{
	Super::NativeConstruct();

	SetHealthBar(0.8f);
	SetScoreText(0);

	/*if (ButtonWidgetPrefab) {
		for (int i = 0; i < 4; i++) {
			UUserWidget* widget = CreateWidget(this, ButtonWidgetPrefab);
			VerticalBox->AddChildToVerticalBox(widget);

			UButtonWidget* button = Cast<UButtonWidget>(widget);
			button->SetText(i);
		}
	} */
}

void UFPSGameUI::SetHealthBar(float percentage)
{
	if (!HealthBar) return;
	HealthBar->SetPercent(percentage);
}

void UFPSGameUI::SetScoreText(int amount)
{
	if (!ScoreText)return;
	ScoreText->SetText(FText::FromString("Score: " + FString::FromInt(UIScore)));
}
