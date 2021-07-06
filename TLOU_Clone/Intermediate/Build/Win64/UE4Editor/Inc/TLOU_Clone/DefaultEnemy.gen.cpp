// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TLOU_Clone/DefaultEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultEnemy() {}
// Cross Module References
	TLOU_CLONE_API UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister();
	TLOU_CLONE_API UClass* Z_Construct_UClass_ADefaultEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TLOU_Clone();
// End Cross Module References
	void ADefaultEnemy::StaticRegisterNativesADefaultEnemy()
	{
	}
	UClass* Z_Construct_UClass_ADefaultEnemy_NoRegister()
	{
		return ADefaultEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TLOU_Clone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DefaultEnemy.h" },
		{ "ModuleRelativePath", "DefaultEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADefaultEnemy_Statics::ClassParams = {
		&ADefaultEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADefaultEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADefaultEnemy, 1638338816);
	template<> TLOU_CLONE_API UClass* StaticClass<ADefaultEnemy>()
	{
		return ADefaultEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADefaultEnemy(Z_Construct_UClass_ADefaultEnemy, &ADefaultEnemy::StaticClass, TEXT("/Script/TLOU_Clone"), TEXT("ADefaultEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
