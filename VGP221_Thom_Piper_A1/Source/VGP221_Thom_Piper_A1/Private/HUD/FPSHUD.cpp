// Fill out your copyright notice in the Description page of Project Settings.


#include "HUD/FPSHUD.h"

void AFPSHUD::BeginPlay()
{
	Super::BeginPlay();

	//ShowSettingsMenu();
	ShowGameMenu(startingGameWidget);
}

void AFPSHUD::DrawHUD()
{
	Super::DrawHUD();

	if (CrosshairTexture)
	{
		// Find the center of our canvas.
		FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

		// Offset by half of the texture's dimensions so that the center of the texture aligns with the center of the Canvas.
		FVector2D CrossHairDrawPosition(Center.X - (CrosshairTexture->GetSurfaceWidth() * 0.5f), Center.Y - (CrosshairTexture->GetSurfaceHeight() * 0.5f));

		// Draw the crosshair at the centerpoint.
		FCanvasTileItem TileItem(CrossHairDrawPosition, CrosshairTexture->Resource, FLinearColor::White);
		TileItem.BlendMode = SE_BLEND_Translucent;
		Canvas->DrawItem(TileItem);
	}
}

void AFPSHUD::ShowSettingsMenu()
{
	if (GEngine && GEngine->GameViewport) {
		settingsWidget = SNew(SSettingsWidget).OwningHUD(this);
		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(settingsWidgetContainer, SWeakWidget).PossiblyNullContent(settingsWidget.ToSharedRef()));
		if (PlayerOwner) {
			PlayerOwner->bShowMouseCursor = true;
			PlayerOwner->SetInputMode(FInputModeUIOnly());
		}
	}
}

void AFPSHUD::RemoveSettingsMenu()
{
	if (GEngine && GEngine->GameViewport && settingsWidgetContainer.IsValid()) {
		settingsWidget = SNew(SSettingsWidget).OwningHUD(this);
		GEngine->GameViewport->RemoveViewportWidgetContent(settingsWidgetContainer.ToSharedRef());
		if (PlayerOwner) {
			PlayerOwner->bShowMouseCursor = false;
			PlayerOwner->SetInputMode(FInputModeGameOnly());
		}
	}
}

void AFPSHUD::ShowGameMenu(TSubclassOf<UFPSGameUI> newGameWidget)
{
	if (gameWidgetContainer) {
		gameWidgetContainer->RemoveFromParent();
		gameWidgetContainer = nullptr;
	}
	if (newGameWidget) {
		gameWidgetContainer = CreateWidget<UFPSGameUI>(GetWorld(), newGameWidget);
		gameWidgetContainer->AddToViewport();
	}
}


