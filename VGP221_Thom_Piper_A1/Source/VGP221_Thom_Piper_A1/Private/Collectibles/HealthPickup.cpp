// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectibles/HealthPickup.h"

AHealthPickup::AHealthPickup()
{
	PrimaryActorTick.bCanEverTick = true;

	if (!HealthPickupMeshComponent) {
		HealthPickupMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HealthMesh"));
		HealthPickupMeshComponent->SetupAttachment(CollisionComponent);
		HealthPickupMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void AHealthPickup::BeginPlay()
{
	Super::BeginPlay();
}

void AHealthPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalRotation(FRotator(0, RotationRate * DeltaTime, 0));
}

void AHealthPickup::OnCollect(AActor* OtherActor)
{
	AFPSCharacter* Player = Cast<AFPSCharacter>(OtherActor);
	if (!Player) return;

	Super::OnCollect(OtherActor);
	if (bCollected) return;
	bCollected = true;
	UE_LOG(LogTemp, Warning, TEXT("HealthPickup: OnCollect Called"));

	RotationRate = OnCellectRotationRate;



	Player->Damage(-Health);

	//Delay Node
	GetWorldTimerManager().SetTimer(DeathTimerHandle, this, &AHealthPickup::DeathTimerComplete, 0.5f, false);
}

void AHealthPickup::DeathTimerComplete()
{

	UE_LOG(LogTemp, Warning, TEXT("HealthPickupDestroy Called"));
	Destroy();
}