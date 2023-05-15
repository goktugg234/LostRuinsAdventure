// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LostRuinsAdventure/Public/GameInstance/LRAGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLRAGameInstance() {}
// Cross Module References
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_ULRAGameInstance_NoRegister();
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_ULRAGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_LostRuinsAdventure();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ULRAGameInstance::StaticRegisterNativesULRAGameInstance()
	{
	}
	UClass* Z_Construct_UClass_ULRAGameInstance_NoRegister()
	{
		return ULRAGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_ULRAGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArtifactList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArtifactList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArtifactList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULRAGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_LostRuinsAdventure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULRAGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameInstance/LRAGameInstance.h" },
		{ "ModuleRelativePath", "Public/GameInstance/LRAGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULRAGameInstance_Statics::NewProp_ArtifactList_Inner = { "ArtifactList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULRAGameInstance_Statics::NewProp_ArtifactList_MetaData[] = {
		{ "Category", "LRAGameInstance" },
		{ "ModuleRelativePath", "Public/GameInstance/LRAGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULRAGameInstance_Statics::NewProp_ArtifactList = { "ArtifactList", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULRAGameInstance, ArtifactList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULRAGameInstance_Statics::NewProp_ArtifactList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULRAGameInstance_Statics::NewProp_ArtifactList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULRAGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULRAGameInstance_Statics::NewProp_ArtifactList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULRAGameInstance_Statics::NewProp_ArtifactList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULRAGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULRAGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULRAGameInstance_Statics::ClassParams = {
		&ULRAGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULRAGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULRAGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULRAGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULRAGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULRAGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULRAGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULRAGameInstance, 3190281314);
	template<> LOSTRUINSADVENTURE_API UClass* StaticClass<ULRAGameInstance>()
	{
		return ULRAGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULRAGameInstance(Z_Construct_UClass_ULRAGameInstance, &ULRAGameInstance::StaticClass, TEXT("/Script/LostRuinsAdventure"), TEXT("ULRAGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULRAGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
