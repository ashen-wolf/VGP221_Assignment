// Fill out your copyright notice in the Description page of Project Settings.


#include "Obstacles/Turrets/BasicTurret.h"

// Sets default values
ABasicTurret::ABasicTurret()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ABasicTurret::BeginPlay()
{
	Super::BeginPlay();
	//*TurretAggroState = AggroState::ACTIVE;
	PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	VisionConeMeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ABasicTurret::BeginOverlap);
}

void ABasicTurret::Idle(float DeltaTime)
{

	AddActorLocalRotation(FRotator(0, RotationRate * DeltaTime, 0));
}

void ABasicTurret::Active(float DeltaTime)
{
	FVector PositionDifference = PlayerCharacter->GetActorLocation() - GetActorLocation();
	PositionDifference.Normalize();
	FRotator FacingRotator = PositionDifference.Rotation();
	this->SetActorRotation(FacingRotator);
}

// Called every frame
void ABasicTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	switch (*TurretAggroState)
	{
	case AggroState::IDLE:
		ABasicTurret::Idle(DeltaTime);
		break;

	case AggroState::ACTIVE:
		ABasicTurret::Active(DeltaTime);
		break;

	}
	
	

}

// Called to bind functionality to input
void ABasicTurret::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABasicTurret::BeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	VisionCollision(OtherActor);
}

void ABasicTurret::VisionCollision(AActor* OtherActor)
{
	AFPSCharacter* Player = Cast<AFPSCharacter>(OtherActor);
	if (!Player) return;
	*TurretAggroState = AggroState::ACTIVE;
}

