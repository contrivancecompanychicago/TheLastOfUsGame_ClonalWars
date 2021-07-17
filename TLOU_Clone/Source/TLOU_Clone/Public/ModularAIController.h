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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		class UAISenseConfig_Sight* SightConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		float AISightRadius = 500.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		float AISightAge = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		float AILoseSightRadius = AILoseSightRadius + 50.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		float AIFieldOfView = 90.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float DistanceToDetectedPlayer = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI")
		float DistanceToPlayer = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
		float MaxRiskLevel = 100.f;

public:
	UFUNCTION(BlueprintCallable, Category = "AIPerception")
		void OnTargetDetected(const TArray<AActor*>& DetectedPawns);


	AModularAIController(FObjectInitializer const& object_initializer = FObjectInitializer::Get());

	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* aPawn) override;
	virtual void Tick(float DeltaSeconds) override;
	virtual FRotator GetControlRotation() const override;
	class UBlackboardComponent* get_blackboard() const;

private:

	UPROPERTY(VisibleAnywhere, Category = "AI")
		float riskLevel = 0.f;

	UMaterialInstanceDynamic* material_instance;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
		UBehaviorTreeComponent* btreeComp;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
		UBehaviorTree* btree;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess = "true"))
		UBlackboardComponent* BlackboardComp;


	bool bIsPlayerDetected;
	float plus = 20.0f;
	int secflags = 0;
	bool ChangeBodyColorFlag = false;
	FTimerHandle MoveAIHandle;

private:

	void SetPerceptionSystem();
	void RiskLevelTimer();
	void ChangeBodyColor(FLinearColor Color);
};
