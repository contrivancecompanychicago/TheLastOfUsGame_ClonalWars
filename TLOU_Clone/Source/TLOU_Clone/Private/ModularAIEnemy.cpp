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

void AModularAIEnemy::SetIsChase(bool b)
{
	IsChase = b;
	StatusChanged();
}


