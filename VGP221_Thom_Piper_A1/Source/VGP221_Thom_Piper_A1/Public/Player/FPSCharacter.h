// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Projectile/FPSProjectile.h"
#include "Kismet/GameplayStatics.h"
#include "HUD/FPSHUD.h"
#include "Gameframework/CharacterMovementComponent.h" 
#include "FPSCharacter.generated.h"


UCLASS()
class VGP221_THOM_PIPER_A1_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPSCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	USkeletalMeshComponent* FPSMesh;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* FPSCameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	FVector MuzzleOffset;

	UPROPERTY(EditDefaultsOnly, Category = "Projectile")
	TSubclassOf<class AFPSProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplayer")
	float LaunchPower = 200;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplayer")
	float LaunchUpPower = 2.5;

	UFUNCTION()
	void MoveForward(float value);

	UFUNCTION()
	void StartJump();

	UFUNCTION()
	void EndJump();

	UFUNCTION()
	void Strafe(float value);

	UFUNCTION()
	void Fire();

	UFUNCTION()
	void Damage(float damageAmount);

	//Temp Health Code: Try making the health component from last term
	float Health = -1;
	const float MaxHealth = 100;
	AFPSHUD* HUD;


};
