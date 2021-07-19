// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularAIEnemy.h"

// Sets default values
AModularAIEnemy::AModularAIEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AModularAIEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AModularAIEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AModularAIEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AModularAIEnemy::SetIdleState()
{
	this->InitAIState();
	UE_LOG(LogTemp, Warning, TEXT("Set Is Idle State"));

}

void AModularAIEnemy::SetIsChasing()
{
	this->InitAIState();
	UE_LOG(LogTemp, Warning, TEXT("Set Is Chase"));
	IsChasing = true;
	StatusChanged();
}

void AModularAIEnemy::SetIsSearching()
{
	this->InitAIState();
	UE_LOG(LogTemp, Warning, TEXT("Set Is Searching"));
	IsSearching = true;
	StatusChanged();
}

void AModularAIEnemy::SetIsAttacking()
{
	this->InitAIState();
	UE_LOG(LogTemp, Warning, TEXT("Set Is Attacking"));
	IsAttacking = true;
	StatusChanged();
}

void AModularAIEnemy::SetIsWalking()
{
	this->InitAIState();
	UE_LOG(LogTemp, Warning, TEXT("Set Is Walking"));
	IsWalking = true;
	StatusChanged();
}

void AModularAIEnemy::InitAIState()
{
	IsAttacking = false;
	IsWalking = false;
	IsSearching = false;
	IsChasing = false;
}

