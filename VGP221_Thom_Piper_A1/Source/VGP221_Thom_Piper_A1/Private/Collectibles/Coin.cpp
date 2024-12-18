// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectibles/Coin.h"

ACoin::ACoin()
{
	PrimaryActorTick.bCanEverTick = true;

	if (!CoinMeshComponent) {
		CoinMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoinMesh"));
		CoinMeshComponent->SetupAttachment(CollisionComponent);
		CoinMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void ACoin::BeginPlay()
{
	Super::BeginPlay();
}

void ACoin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalRotation(FRotator(0, RotationRate * DeltaTime, 0));
}

void ACoin::OnCollect(AActor* OtherActor)
{
	Super::OnCollect(OtherActor);
	UE_LOG(LogTemp, Warning, TEXT("Coin: OnCollect Called"));

	RotationRate = OnCellectRotationRate;

	//Delay Node
	GetWorldTimerManager().SetTimer(DeathTimerHandle, this, &ACoin::DeathTimerComplete, 0.5f, false);
}

void ACoin::DeathTimerComplete()
{
	AFPSHUD* HUD = UGameplayStatics::GetPlayerController(this, 0)->GetHUD<AFPSHUD>();
	if (!HUD) return;

	HUD->gameWidgetContainer->SetScoreText(Points);

	Destroy();
}
