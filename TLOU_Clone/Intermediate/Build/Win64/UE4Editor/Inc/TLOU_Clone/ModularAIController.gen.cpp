// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TLOU_Clone/Public/ModularAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAIController() {}
// Cross Module References
	TLOU_CLONE_API UClass* Z_Construct_UClass_AModularAIController_NoRegister();
	TLOU_CLONE_API UClass* Z_Construct_UClass_AModularAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_TLOU_Clone();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AModularAIController::execOnPawnDetected)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_DetectedPawns);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDetected(Z_Param_Out_DetectedPawns);
		P_NATIVE_END;
	}
	void AModularAIController::StaticRegisterNativesAModularAIController()
	{
		UClass* Class = AModularAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnDetected", &AModularAIController::execOnPawnDetected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics
	{
		struct ModularAIController_eventOnPawnDetected_Parms
		{
			TArray<AActor*> DetectedPawns;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetectedPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetectedPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DetectedPawns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner = { "DetectedPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::NewProp_DetectedPawns = { "DetectedPawns", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModularAIController_eventOnPawnDetected_Parms, DetectedPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::NewProp_DetectedPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::NewProp_DetectedPawns,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularAIController, nullptr, "OnPawnDetected", nullptr, nullptr, sizeof(ModularAIController_eventOnPawnDetected_Parms), Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModularAIController_OnPawnDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModularAIController_OnPawnDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModularAIController_NoRegister()
	{
		return AModularAIController::StaticClass();
	}
	struct Z_Construct_UClass_AModularAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISightAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AISightAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AILoseSightRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AILoseSightRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIFieldOfView_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AIFieldOfView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerDetected_MetaData[];
#endif
		static void NewProp_bIsPlayerDetected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerDetected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToDetectedPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToDetectedPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_riskLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_riskLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRiskLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRiskLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TLOU_Clone,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModularAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModularAIController_OnPawnDetected, "OnPawnDetected" }, // 3652178560
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ModularAIController.h" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_AISightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_AISightRadius = { "AISightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, AISightRadius), METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_AISightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_AISightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_AISightAge_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_AISightAge = { "AISightAge", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, AISightAge), METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_AISightAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_AISightAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_AILoseSightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_AILoseSightRadius = { "AILoseSightRadius", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, AILoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_AILoseSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_AILoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_AIFieldOfView_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_AIFieldOfView = { "AIFieldOfView", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, AIFieldOfView), METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_AIFieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_AIFieldOfView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_SightConfig_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_SightConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_SightConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_bIsPlayerDetected_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	void Z_Construct_UClass_AModularAIController_Statics::NewProp_bIsPlayerDetected_SetBit(void* Obj)
	{
		((AModularAIController*)Obj)->bIsPlayerDetected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_bIsPlayerDetected = { "bIsPlayerDetected", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularAIController), &Z_Construct_UClass_AModularAIController_Statics::NewProp_bIsPlayerDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_bIsPlayerDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_bIsPlayerDetected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_DistanceToDetectedPlayer_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_DistanceToDetectedPlayer = { "DistanceToDetectedPlayer", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, DistanceToDetectedPlayer), METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_DistanceToDetectedPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_DistanceToDetectedPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_DistanceToPlayer_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_DistanceToPlayer = { "DistanceToPlayer", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, DistanceToPlayer), METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_DistanceToPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_DistanceToPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_riskLevel_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_riskLevel = { "riskLevel", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, riskLevel), METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_riskLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_riskLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_MaxRiskLevel_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_MaxRiskLevel = { "MaxRiskLevel", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, MaxRiskLevel), METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_MaxRiskLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_MaxRiskLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_BlackboardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_BlackboardComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIController_Statics::NewProp_BehaviorComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModularAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModularAIController_Statics::NewProp_BehaviorComp = { "BehaviorComp", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModularAIController, BehaviorComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::NewProp_BehaviorComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::NewProp_BehaviorComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_AISightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_AISightAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_AILoseSightRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_AIFieldOfView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_SightConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_bIsPlayerDetected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_DistanceToDetectedPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_DistanceToPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_riskLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_MaxRiskLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_BlackboardComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIController_Statics::NewProp_BehaviorComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModularAIController_Statics::ClassParams = {
		&AModularAIController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AModularAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularAIController, 933937623);
	template<> TLOU_CLONE_API UClass* StaticClass<AModularAIController>()
	{
		return AModularAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularAIController(Z_Construct_UClass_AModularAIController, &AModularAIController::StaticClass, TEXT("/Script/TLOU_Clone"), TEXT("AModularAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
