// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TLOU_Clone/Public/ModularAIEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAIEnemy() {}
// Cross Module References
	TLOU_CLONE_API UClass* Z_Construct_UClass_AModularAIEnemy_NoRegister();
	TLOU_CLONE_API UClass* Z_Construct_UClass_AModularAIEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TLOU_Clone();
// End Cross Module References
	static FName NAME_AModularAIEnemy_StatusChanged = FName(TEXT("StatusChanged"));
	void AModularAIEnemy::StatusChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AModularAIEnemy_StatusChanged),NULL);
	}
	void AModularAIEnemy::StaticRegisterNativesAModularAIEnemy()
	{
	}
	struct Z_Construct_UFunction_AModularAIEnemy_StatusChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AModularAIEnemy_StatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularAIEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AModularAIEnemy_StatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AModularAIEnemy, nullptr, "StatusChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AModularAIEnemy_StatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AModularAIEnemy_StatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AModularAIEnemy_StatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AModularAIEnemy_StatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AModularAIEnemy_NoRegister()
	{
		return AModularAIEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AModularAIEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsChase_MetaData[];
#endif
		static void NewProp_IsChase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsChase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModularAIEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TLOU_Clone,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AModularAIEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AModularAIEnemy_StatusChanged, "StatusChanged" }, // 2506637333
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ModularAIEnemy.h" },
		{ "ModuleRelativePath", "Public/ModularAIEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModularAIEnemy_Statics::NewProp_IsChase_MetaData[] = {
		{ "Category", "ModularAIEnemy" },
		{ "ModuleRelativePath", "Public/ModularAIEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AModularAIEnemy_Statics::NewProp_IsChase_SetBit(void* Obj)
	{
		((AModularAIEnemy*)Obj)->IsChase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AModularAIEnemy_Statics::NewProp_IsChase = { "IsChase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AModularAIEnemy), &Z_Construct_UClass_AModularAIEnemy_Statics::NewProp_IsChase_SetBit, METADATA_PARAMS(Z_Construct_UClass_AModularAIEnemy_Statics::NewProp_IsChase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIEnemy_Statics::NewProp_IsChase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModularAIEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModularAIEnemy_Statics::NewProp_IsChase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModularAIEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularAIEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModularAIEnemy_Statics::ClassParams = {
		&AModularAIEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AModularAIEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModularAIEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModularAIEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModularAIEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModularAIEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModularAIEnemy, 1465389626);
	template<> TLOU_CLONE_API UClass* StaticClass<AModularAIEnemy>()
	{
		return AModularAIEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModularAIEnemy(Z_Construct_UClass_AModularAIEnemy, &AModularAIEnemy::StaticClass, TEXT("/Script/TLOU_Clone"), TEXT("AModularAIEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModularAIEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
