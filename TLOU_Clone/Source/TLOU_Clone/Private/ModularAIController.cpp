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
#include "blackboard_keys.h"
#include "ModularAIEnemy.h"

#include "Components/SkeletalMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include <Runtime/AIModule/Classes/Actions/PawnActionsComponent.h>

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

	SetPerceptionSystem();

	PrimaryActorTick.bCanEverTick = true;
	bIsPlayerDetected = false;
}
void AModularAIController::BeginPlay()
{
	Super::BeginPlay();
	material_instance = UMaterialInstanceDynamic::Create(this->GetCharacter()->GetMesh()->GetMaterial(0), this);
	targetPlayer = Cast<ACharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

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

	DistanceToPlayer = GetPawn()->GetDistanceTo(targetPlayer);
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
	if (!bIsPlayerDetected) 
	{
		for (size_t i = 0; i < DetectedPawns.Num(); i++)
		{
			//DistanceToDetectedPlayer = GetPawn()->GetDistanceTo(DetectedPawns[i
			// 20210718 LSC 플레이어 위치 수정
			if (DetectedPawns[i] == (AActor*)targetPlayer)
			{
				DistanceToDetectedPlayer = GetPawn()->GetDistanceTo(DetectedPawns[i]);
				RiskLevel = MaxRiskLevel;
				//perRiskLevel = 20.0f;
				bIsPlayerDetected = true;

				ChangeBodyColor(FLinearColor::Red);
				get_blackboard()->SetValueAsBool(bb_keys::can_see_player, true);
				Cast<AModularAIEnemy>(GetCharacter())->SetIsChasing();
				return;
			}
		}
	}
}

void AModularAIController::SetPerceptionSystem()
{
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

}

void AModularAIController::RiskLevelTimer()
{
	// 플레이어를 인식하면 RiskLevel를 perRiskLevel만큼 증가
	if (bIsPlayerDetected)
	{
		if (DistanceToPlayer >= AISightRadius)
		{
			RiskLevel -= perRiskLevel;
			if (RiskLevel <= 0.f)
			{
				RiskLevel = 0.f;
				bIsPlayerDetected = false;
				Cast<AModularAIEnemy>(GetCharacter())->SetIdleState();

				ChangeBodyColorFlag = false;
				ChangeBodyColor(FLinearColor::White);
				ChangeBodyColorFlag = false;
			}
			else if (RiskLevel <= 0.333f * MaxRiskLevel)
			{
				// etSearching State
				get_blackboard()->SetValueAsBool(bb_keys::can_see_player, false);
				Cast<AModularAIEnemy>(GetCharacter())->SetIsSearching();

				ChangeBodyColorFlag = false;
				ChangeBodyColor(FLinearColor::Yellow);
				ChangeBodyColorFlag = false;
			}
		}
		else
		{
			// 20210718 LSC
			if (RiskLevel <= MaxRiskLevel)
			{
				RiskLevel += perRiskLevel;
			}
		}
	}
}

void AModularAIController::ChangeBodyColor(FLinearColor Color) 
{
	if (!ChangeBodyColorFlag &&  material_instance)
	{
		material_instance->SetVectorParameterValue("BodyColor", FLinearColor(Color));
		this->GetCharacter()->GetMesh()->SetMaterial(0, material_instance);
		ChangeBodyColorFlag = true;
	}
}
