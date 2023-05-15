// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LostRuinsAdventure/LostRuinsAdventureGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLostRuinsAdventureGameMode() {}
// Cross Module References
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_ALostRuinsAdventureGameMode_NoRegister();
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_ALostRuinsAdventureGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_LostRuinsAdventure();
// End Cross Module References
	void ALostRuinsAdventureGameMode::StaticRegisterNativesALostRuinsAdventureGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALostRuinsAdventureGameMode_NoRegister()
	{
		return ALostRuinsAdventureGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALostRuinsAdventureGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALostRuinsAdventureGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LostRuinsAdventure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALostRuinsAdventureGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LostRuinsAdventureGameMode.h" },
		{ "ModuleRelativePath", "LostRuinsAdventureGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALostRuinsAdventureGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALostRuinsAdventureGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALostRuinsAdventureGameMode_Statics::ClassParams = {
		&ALostRuinsAdventureGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ALostRuinsAdventureGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALostRuinsAdventureGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALostRuinsAdventureGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALostRuinsAdventureGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALostRuinsAdventureGameMode, 4055198971);
	template<> LOSTRUINSADVENTURE_API UClass* StaticClass<ALostRuinsAdventureGameMode>()
	{
		return ALostRuinsAdventureGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALostRuinsAdventureGameMode(Z_Construct_UClass_ALostRuinsAdventureGameMode, &ALostRuinsAdventureGameMode::StaticClass, TEXT("/Script/LostRuinsAdventure"), TEXT("ALostRuinsAdventureGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALostRuinsAdventureGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
