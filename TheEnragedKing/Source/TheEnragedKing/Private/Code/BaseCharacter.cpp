// Fill out your copyright notice in the Description page of Project Settings.

#include "Code/BaseCharacter.h"
#include "DrawDebugHelpers.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();

	//if (GEngine)
	//{
 //       FString PlayerName = GetName();

 //       FString Message = FString::Printf(TEXT("BaseCharacter BeginPlay: %s"), *PlayerName);
	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, Message);

	//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BaseCharacter BeginPlay"));
 //   }

 //   UWorld* World = GetWorld();
	//if (World)
	//{
	//	DrawDebugSphere(World, GetActorLocation(), 100.0f, 12, FColor::Red, false, -1.0f, 0, 2.0f);
 //   }
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

