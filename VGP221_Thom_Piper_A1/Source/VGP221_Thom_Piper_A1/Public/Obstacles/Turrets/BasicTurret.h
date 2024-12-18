// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Player/FPSCharacter.h"
#include "BasicTurret.generated.h"

UCLASS()
class VGP221_THOM_PIPER_A1_API ABasicTurret : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasicTurret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Idle(float DeltaTime);
	virtual void Active(float DeltaTime);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleDefaultsOnly)
	UStaticMeshComponent* VisionConeMeshComponent;

	UPROPERTY(EditAnywhere)
	float RotationRate = 25;

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void VisionCollision(AActor* OtherActor);

	UPROPERTY(VisibleDefaultsOnly)
	ACharacter* PlayerCharacter;
	
	enum class AggroState : uint8{
		IDLE = 0,
		ACTIVE = 1,
		SEARCH = 2,

	};

	AggroState* TurretAggroState;
	
};
