// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include"GUI/Slates/SSettingsWidget.h"
#include "FPSHUD.generated.h"

/**
 * 
 */
UCLASS()
class VGP221_THOM_PIPER_A1_API AFPSHUD : public AHUD
{
	GENERATED_BODY()

public:
	//HUD 
	virtual void DrawHUD() override;

	//Slates
	TSharedPtr<class SSettingsWidget> settingsWidget;

	void ShowSettingsMenu();
	void RemoveSettingsMenu();

protected:
	UPROPERTY(EditDefaultsOnly)
	UTexture2D* CrosshairTexture;
	
};
