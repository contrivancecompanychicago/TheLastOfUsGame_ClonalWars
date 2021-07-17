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
		RiskLevel = MaxRiskLevel;
	}
	plus = 20.0f;
	bIsPlayerDetected = true;

	get_blackboard()->SetValueAsBool(bb_keys::can_see_player, true);
	Cast<AModularAIEnemy>(GetCharacter())->SetIsChase(true);
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

		if (RiskLevel >= MaxRiskLevel)
		{
			ChangeBodyColor(FLinearColor::Red);
			RiskLevel = 0.0f;
		}
		RiskLevel += plus;

		if (plus < 0.0f && RiskLevel <= 0.0f) {
			get_blackboard()->SetValueAsBool(bb_keys::can_see_player, false);
			Cast<AModularAIEnemy>(GetCharacter())->SetIsChase(false);
			bIsPlayerDetected = false;

			ChangeBodyColorFlag = false;
			ChangeBodyColor(FLinearColor::White);
			ChangeBodyColorFlag = false;
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
