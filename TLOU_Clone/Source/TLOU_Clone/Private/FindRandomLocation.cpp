// Fill out your copyright notice in the Description page of Project Settings.


#include "FindRandomLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "ModularAIController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "blackboard_keys.h"
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include "Engine/TargetPoint.h"

UFindRandomLocation::UFindRandomLocation(FObjectInitializer const& object_initializer)
{
	NodeName = TEXT("Find Random Location");
}

EBTNodeResult::Type UFindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//AI컨트롤러, 폰 가져오기
	auto const cont = Cast<AModularAIController>(OwnerComp.GetAIOwner());
	auto const npc = cont->GetPawn();

	//npc 위치 가져오기
	//FVector const origin = npc->GetActorLocation();
	//FNavLocation loc;


	TArray<AActor*> FoundActor;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), FoundActor);

	short seed = FMath::RandRange(0, FoundActor.Num()-1);
	UE_LOG(LogTemp, Warning, TEXT("%d"), seed);
	FVector WayPoint = FoundActor[seed]->GetActorLocation();
	cont->get_blackboard()->SetValueAsVector(bb_keys::target_location, WayPoint);


	//내비시스템, 랜덤위치
	//UNavigationSystemV1* const nav_sys = UNavigationSystemV1::GetCurrent(GetWorld());
	//if (nav_sys->GetRandomPointInNavigableRadius(origin, search_radius, loc, nullptr))
	//{
	//	cont->get_blackboard()->SetValueAsVector(bb_keys::target_location, loc.Location);
	//}

	//마무리
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);

	return EBTNodeResult::Type();
}
