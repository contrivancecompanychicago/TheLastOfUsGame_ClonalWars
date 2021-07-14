// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularAIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

AModularAIController::AModularAIController()
{
	PrimaryActorTick.bCanEverTick = true;

	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
	SetPerceptionComponent(*CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception Component")));

	SightConfig->SightRadius = AISightRadius;
	SightConfig->LoseSightRadius = AILoseSightRadius;
	SightConfig->PeripheralVisionAngleDegrees = AIFieldOfView;
	SightConfig->SetMaxAge(AISightAge);

	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

	GetPerceptionComponent()->SetDominantSense(*SightConfig->GetSenseImplementation());
	GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AModularAIController::OnPawnDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);

	bIsPlayerDetected = false;
}
void AModularAIController::BeginPlay()
{
	Super::BeginPlay();
	if (GetPerceptionComponent() != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("All System Set!"));
		GetWorldTimerManager().SetTimer(MoveAIHandle, this, &AModularAIController::AdvanceTimer, 1.0f, true);
	}
}

void AModularAIController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
}

void AModularAIController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	ACharacter* Player = Cast<ACharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	DistanceToPlayer = GetPawn()->GetDistanceTo(Player);
}

FRotator AModularAIController::GetControlRotation() const
{
	if (GetPawn() == nullptr)
	{
		return FRotator(0.f, 0.f, 0.f);
	}
	return FRotator(0.f, GetPawn()->GetActorRotation().Yaw, 0.0f);
}

void AModularAIController::OnPawnDetected(const TArray<AActor*>& DetectedPawns)
{
	for (size_t i = 0; i < DetectedPawns.Num(); i++)
	{
		DistanceToDetectedPlayer = GetPawn()->GetDistanceTo(DetectedPawns[i]);
		riskLevel = MaxRiskLevel;
	}
	plus = 20.0f;
	bIsPlayerDetected = true;
}

void AModularAIController::AdvanceTimer()
{
	if (bIsPlayerDetected)
	{
		if (DistanceToPlayer >= AISightRadius)
		{
			if (secflags == 3)
			{
				plus -= 5.f;
				secflags = 0;
			}
			else
			{
				secflags += 1;
			}
		}

		UE_LOG(LogTemp, Warning, TEXT("riskLevel = %f"), riskLevel);
		if (riskLevel >= MaxRiskLevel)
		{
			ACharacter* Player = Cast<ACharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
			MoveToActor(Player, 5.0f);
			riskLevel = 0.0f;
		}
		riskLevel += plus;

		if (plus < 0.0f && riskLevel <= 0.0f) {
			bIsPlayerDetected = false;
			StopMovement();
			UE_LOG(LogTemp, Warning, TEXT("StopMovement"));
		}
	}
}
