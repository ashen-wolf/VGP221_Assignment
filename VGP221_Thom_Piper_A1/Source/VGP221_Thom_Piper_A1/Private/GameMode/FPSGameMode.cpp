// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/FPSGameMode.h"
#include "Logging/StructuredLog.h"

void AFPSGameMode::StartPlay()
{
	Super::StartPlay();
	//Print on to screen
	check(GEngine != nullptr);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Hello World"));

	
	int test = 10;
	int test1 = 15;
	FString text("test passed!");
	//Print into output
	//UE_LOGFMT(LogTemp, Warning, "Test: {0} + {1} = {2}. Text test: {3}", test, test1, test + test1, text);
	UE_LOGFMT(LogTemp, Warning, "FPSGameMode Ran");
}
