// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef TLOU_CLONE_ModularAIController_generated_h
#error "ModularAIController.generated.h already included, missing '#pragma once' in ModularAIController.h"
#endif
#define TLOU_CLONE_ModularAIController_generated_h

#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_SPARSE_DATA
#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnDetected);


#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAModularAIController(); \
	friend struct Z_Construct_UClass_AModularAIController_Statics; \
public: \
	DECLARE_CLASS(AModularAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TLOU_Clone"), NO_API) \
	DECLARE_SERIALIZER(AModularAIController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAModularAIController(); \
	friend struct Z_Construct_UClass_AModularAIController_Statics; \
public: \
	DECLARE_CLASS(AModularAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TLOU_Clone"), NO_API) \
	DECLARE_SERIALIZER(AModularAIController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AModularAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AModularAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModularAIController(AModularAIController&&); \
	NO_API AModularAIController(const AModularAIController&); \
public:


#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AModularAIController(AModularAIController&&); \
	NO_API AModularAIController(const AModularAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AModularAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AModularAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AModularAIController)


#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__riskLevel() { return STRUCT_OFFSET(AModularAIController, riskLevel); } \
	FORCEINLINE static uint32 __PPO__MaxRiskLevel() { return STRUCT_OFFSET(AModularAIController, MaxRiskLevel); } \
	FORCEINLINE static uint32 __PPO__BlackboardComp() { return STRUCT_OFFSET(AModularAIController, BlackboardComp); } \
	FORCEINLINE static uint32 __PPO__BehaviorComp() { return STRUCT_OFFSET(AModularAIController, BehaviorComp); }


#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_15_PROLOG
#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_SPARSE_DATA \
	TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_RPC_WRAPPERS \
	TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_INCLASS \
	TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_SPARSE_DATA \
	TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_INCLASS_NO_PURE_DECLS \
	TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TLOU_CLONE_API UClass* StaticClass<class AModularAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TLOU_Clone_Source_TLOU_Clone_Public_ModularAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
