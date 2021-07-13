// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ModularAIController.generated.h"

/**
 * 
 */
UCLASS()
class TLOU_CLONE_API AModularAIController : public AAIController
{
	GENERATED_BODY()
public:
    void Test();
private:
    float riskLevel = 0.f;
    float MaxRiskLevel = 100.f;
};
