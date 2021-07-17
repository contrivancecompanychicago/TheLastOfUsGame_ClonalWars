// Fill out your copyright notice in the Description page of Project Settings.


#include "ModularAIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"

AModularAIController::AModularAIController(FObjectInitializer const& object_initializer)
{
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> obj(TEXT("BehaviorTree'/Game/AI/Blueprints/BT_AIEnemy.BT_AIEnemy'"));
	if (obj.Succeeded()) 
	{
		btree = obj.Object;
		UE_LOG(LogTemp, Warning, TEXT("UBehaviorTree Success"));
	}
	btreeComp = object_initializer.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviorComp"));
	BlackboardComp = object_initializer.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackboardComp"));

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
	GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AModularAIController::OnTargetDetected);
	GetPerceptionComponent()->ConfigureSense(*SightConfig);

	//HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("Hearing Config"));
	//HearingConfig->HearingRange = AIHearingRange;
	//HearingConfig->DetectionByAffiliation.bDetectEnemies = true;
	//HearingConfig->DetectionByAffiliation.bDetectFriendlies = true;
	//HearingConfig->DetectionByAffiliation.bDetectNeutrals = true;
	//HearingConfig->SetMaxAge(AIHearingAge);

	//GetPerceptionComponent()->SetDominantSense(*HearingConfig->GetSenseImplementation());
	//GetPerceptionComponent()->OnPerceptionUpdated.AddDynamic(this, &AModularAIController::OnPawnHearing);
	//GetPerceptionComponent()->ConfigureSense(*HearingConfig);


	bIsPlayerDetected = false;
}
void AModularAIController::BeginPlay()
{
	Super::BeginPlay();
	RunBehaviorTree(btree);
	btreeComp->StartTree(*btree);

	if (GetPerceptionComponent() != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("All System Set!"));
		GetWorldTimerManager().SetTimer(MoveAIHandle, this, &AModularAIController::RiskLevelTimer, 1.0f, true);
	}
}

void AModularAIController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	if (BlackboardComp)
	{
		BlackboardComp->InitializeBlackboard(*btree->BlackboardAsset);
	}
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

UBlackboardComponent* AModularAIController::get_blackboard() const
{
	return BlackboardComp;
}

void AModularAIController::OnTargetDetected(const TArray<AActor*>& DetectedPawns)
{
	for (size_t i = 0; i < DetectedPawns.Num(); i++)
	{
		DistanceToDetectedPlayer = GetPawn()->GetDistanceTo(DetectedPawns[i]);
		riskLevel = MaxRiskLevel;
	}
	plus = 20.0f;
	bIsPlayerDetected = true;
}

void AModularAIController::OnPawnHearing(const TArray<AActor*>& DetectedPawns)
{
	UE_LOG(LogTemp, Warning, TEXT("Hearing"));
	riskLevel += 1.f;
}

void AModularAIController::RiskLevelTimer()
{
	if (bIsPlayerDetected)
	{
		btreeComp->StopTree(EBTStopMode::Forced);
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
			btreeComp->StartTree(*btree);
		}
	}
}
