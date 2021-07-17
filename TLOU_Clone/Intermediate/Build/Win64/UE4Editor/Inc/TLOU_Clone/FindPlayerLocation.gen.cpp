// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TLOU_Clone/Public/FindPlayerLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindPlayerLocation() {}
// Cross Module References
	TLOU_CLONE_API UClass* Z_Construct_UClass_UFindPlayerLocation_NoRegister();
	TLOU_CLONE_API UClass* Z_Construct_UClass_UFindPlayerLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_TLOU_Clone();
// End Cross Module References
	void UFindPlayerLocation::StaticRegisterNativesUFindPlayerLocation()
	{
	}
	UClass* Z_Construct_UClass_UFindPlayerLocation_NoRegister()
	{
		return UFindPlayerLocation::StaticClass();
	}
	struct Z_Construct_UClass_UFindPlayerLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_search_random_MetaData[];
#endif
		static void NewProp_search_random_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_search_random;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_search_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_search_radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindPlayerLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TLOU_Clone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FindPlayerLocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FindPlayerLocation.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random_MetaData[] = {
		{ "AllowProtectedAccess", "true" },
		{ "Category", "Search" },
		{ "ModuleRelativePath", "Public/FindPlayerLocation.h" },
	};
#endif
	void Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random_SetBit(void* Obj)
	{
		((UFindPlayerLocation*)Obj)->search_random = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random = { "search_random", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFindPlayerLocation), &Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_radius_MetaData[] = {
		{ "AllowProtectedAccess", "true" },
		{ "Category", "Search" },
		{ "ModuleRelativePath", "Public/FindPlayerLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_radius = { "search_radius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindPlayerLocation, search_radius), METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindPlayerLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_random,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindPlayerLocation_Statics::NewProp_search_radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindPlayerLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindPlayerLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindPlayerLocation_Statics::ClassParams = {
		&UFindPlayerLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFindPlayerLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindPlayerLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindPlayerLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindPlayerLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindPlayerLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindPlayerLocation, 3435160808);
	template<> TLOU_CLONE_API UClass* StaticClass<UFindPlayerLocation>()
	{
		return UFindPlayerLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindPlayerLocation(Z_Construct_UClass_UFindPlayerLocation, &UFindPlayerLocation::StaticClass, TEXT("/Script/TLOU_Clone"), TEXT("UFindPlayerLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindPlayerLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
