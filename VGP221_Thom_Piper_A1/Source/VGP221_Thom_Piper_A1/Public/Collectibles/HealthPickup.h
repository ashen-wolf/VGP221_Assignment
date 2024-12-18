// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Collectibles/Collectible.h"
#include "Kismet/GameplayStatics.h"
#include "Player/FPSCharacter.h"
#include "HealthPickup.generated.h"

/**
 * 
 */
UCLASS()
class VGP221_THOM_PIPER_A1_API AHealthPickup : public ACollectible
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AHealthPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnCollect(AActor* OtherActor) override;

	UPROPERTY(VisibleDefaultsOnly)
	UStaticMeshComponent* HealthPickupMeshComponent;

	UPROPERTY(EditAnywhere)
	float Health = 25;

	UPROPERTY(EditAnywhere)
	float RotationRate = 100;

	UPROPERTY(EditAnywhere)
	float OnCellectRotationRate = 1500;

	bool bCollected = false;

	FTimerHandle DeathTimerHandle;
	void DeathTimerComplete();
};
