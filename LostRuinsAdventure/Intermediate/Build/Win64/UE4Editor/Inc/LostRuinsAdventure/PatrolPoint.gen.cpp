// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LostRuinsAdventure/Public/Patroling/PatrolPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolPoint() {}
// Cross Module References
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_APatrolPoint_NoRegister();
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_APatrolPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LostRuinsAdventure();
// End Cross Module References
	void APatrolPoint::StaticRegisterNativesAPatrolPoint()
	{
	}
	UClass* Z_Construct_UClass_APatrolPoint_NoRegister()
	{
		return APatrolPoint::StaticClass();
	}
	struct Z_Construct_UClass_APatrolPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PatrolOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatrolPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LostRuinsAdventure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Patroling/PatrolPoint.h" },
		{ "ModuleRelativePath", "Public/Patroling/PatrolPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolPoint_Statics::NewProp_PatrolOrder_MetaData[] = {
		{ "Category", "Patrol Point" },
		{ "ModuleRelativePath", "Public/Patroling/PatrolPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APatrolPoint_Statics::NewProp_PatrolOrder = { "PatrolOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatrolPoint, PatrolOrder), METADATA_PARAMS(Z_Construct_UClass_APatrolPoint_Statics::NewProp_PatrolOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPoint_Statics::NewProp_PatrolOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatrolPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolPoint_Statics::NewProp_PatrolOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatrolPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrolPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatrolPoint_Statics::ClassParams = {
		&APatrolPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APatrolPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APatrolPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatrolPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatrolPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatrolPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatrolPoint, 2845307087);
	template<> LOSTRUINSADVENTURE_API UClass* StaticClass<APatrolPoint>()
	{
		return APatrolPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatrolPoint(Z_Construct_UClass_APatrolPoint, &APatrolPoint::StaticClass, TEXT("/Script/LostRuinsAdventure"), TEXT("APatrolPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatrolPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
