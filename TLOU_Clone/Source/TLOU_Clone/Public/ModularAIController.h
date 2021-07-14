// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ModularAIController.generated.h"

/**
 * 
 */
class UBehaviorTreeComponent;
class UBlackboardComponent;

UCLASS(config = Game)
class TLOU_CLONE_API AModularAIController : public AAIController
{
	GENERATED_BODY()

public:
	AModularAIController();

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* aPawn) override;
	virtual void Tick(float DeltaSeconds) override;
	virtual FRotator GetControlRotation() const override;

	UFUNCTION()
		void OnPawnDetected(const TArray<AActor*>& DetectedPawns);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float AISightRadius = 500.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float AISightAge = 5.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float AILoseSightRadius = AILoseSightRadius + 50.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float AIFieldOfView = 90.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		class UAISenseConfig_Sight* SightConfig;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		bool bIsPlayerDetected;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float DistanceToDetectedPlayer = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float DistanceToPlayer = 0.0f;
private:
	UPROPERTY(VisibleAnywhere, Category = "AI")
	float riskLevel = 0.f;

	UPROPERTY(VisibleAnywhere, Category = "AI")
	float MaxRiskLevel = 100.f;

	float plus = 20.0f;

	int secflags = 0;
	void AdvanceTimer();

	FTimerHandle MoveAIHandle;

	UPROPERTY(transient)
		UBlackboardComponent* BlackboardComp;

	UPROPERTY(transient)
		UBehaviorTreeComponent* BehaviorComp;

};
