// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/ProgressBar.h"
#include "Components/VerticalBox.h"
#include "Components/TextBlock.h"
#include "GUI/ButtonWidget.h"
#include "FPSGameUI.generated.h"

/**
 * 
 */
UCLASS()
class VGP221_THOM_PIPER_A1_API UFPSGameUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;


	UPROPERTY(meta = (BindWidget))
	UProgressBar* HealthBar;
	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VerticalBox;
	UPROPERTY(meta = (BindWidget))
	UTextBlock* ScoreText;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UButtonWidget> ButtonWidgetPrefab;

	UFUNCTION()
	void SetHealthBar(float percentage);

	UFUNCTION()
	void SetScoreText(int amount);

private:
	int UIScore;
};
