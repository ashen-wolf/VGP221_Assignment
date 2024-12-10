// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "GUI/Slates/SSettingsWidget.h"
#include "Widgets/SWeakWidget.h"
#include "GUI/FPSGameUI.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class VGP221_THOM_PIPER_A1_API AFPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	//HUD 
	virtual void DrawHUD() override;

	//Slates
	TSharedPtr<class SSettingsWidget> settingsWidget;
	TSharedPtr<class SWidget> settingsWidgetContainer;

	void ShowSettingsMenu();
	void RemoveSettingsMenu();

	//UMG
	UPROPERTY(EditAnywhere)
	TSubclassOf<UFPSGameUI> startingGameWidget;
	UPROPERTY()
	UFPSGameUI* gameWidgetContainer;

	void ShowGameMenu(TSubclassOf<UFPSGameUI> newGameWidget);



protected:
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CrosshairTexture;
	
};
