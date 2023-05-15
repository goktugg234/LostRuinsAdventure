// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LostRuinsAdventure/Public/Characters/LRACharacterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLRACharacterBase() {}
// Cross Module References
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_ALRACharacterBase_NoRegister();
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_ALRACharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_LostRuinsAdventure();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALRACharacterBase::execPlayerDied)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerDied();
		P_NATIVE_END;
	}
	static FName NAME_ALRACharacterBase_OnArtifactAdded = FName(TEXT("OnArtifactAdded"));
	void ALRACharacterBase::OnArtifactAdded(int32 Artifact)
	{
		LRACharacterBase_eventOnArtifactAdded_Parms Parms;
		Parms.Artifact=Artifact;
		ProcessEvent(FindFunctionChecked(NAME_ALRACharacterBase_OnArtifactAdded),&Parms);
	}
	static FName NAME_ALRACharacterBase_OnHealthUpdated = FName(TEXT("OnHealthUpdated"));
	void ALRACharacterBase::OnHealthUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALRACharacterBase_OnHealthUpdated),NULL);
	}
	void ALRACharacterBase::StaticRegisterNativesALRACharacterBase()
	{
		UClass* Class = ALRACharacterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayerDied", &ALRACharacterBase::execPlayerDied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Artifact;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics::NewProp_Artifact = { "Artifact", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LRACharacterBase_eventOnArtifactAdded_Parms, Artifact), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics::NewProp_Artifact,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LRACharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALRACharacterBase, nullptr, "OnArtifactAdded", nullptr, nullptr, sizeof(LRACharacterBase_eventOnArtifactAdded_Parms), Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALRACharacterBase_OnHealthUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALRACharacterBase_OnHealthUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LRACharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALRACharacterBase_OnHealthUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALRACharacterBase, nullptr, "OnHealthUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALRACharacterBase_OnHealthUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALRACharacterBase_OnHealthUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALRACharacterBase_OnHealthUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALRACharacterBase_OnHealthUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALRACharacterBase_PlayerDied_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALRACharacterBase_PlayerDied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/LRACharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALRACharacterBase_PlayerDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALRACharacterBase, nullptr, "PlayerDied", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALRACharacterBase_PlayerDied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALRACharacterBase_PlayerDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALRACharacterBase_PlayerDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALRACharacterBase_PlayerDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALRACharacterBase_NoRegister()
	{
		return ALRACharacterBase::StaticClass();
	}
	struct Z_Construct_UClass_ALRACharacterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookAtRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookAtRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALRACharacterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LostRuinsAdventure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALRACharacterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALRACharacterBase_OnArtifactAdded, "OnArtifactAdded" }, // 3548260794
		{ &Z_Construct_UFunction_ALRACharacterBase_OnHealthUpdated, "OnHealthUpdated" }, // 3935953867
		{ &Z_Construct_UFunction_ALRACharacterBase_PlayerDied, "PlayerDied" }, // 2307250935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRACharacterBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/LRACharacterBase.h" },
		{ "ModuleRelativePath", "Public/Characters/LRACharacterBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/LRACharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALRACharacterBase, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/LRACharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALRACharacterBase, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/LRACharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALRACharacterBase, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Characters/LRACharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALRACharacterBase, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_BaseLookAtRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Characters/LRACharacterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_BaseLookAtRate = { "BaseLookAtRate", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALRACharacterBase, BaseLookAtRate), METADATA_PARAMS(Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_BaseLookAtRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_BaseLookAtRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALRACharacterBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_SpringArmComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALRACharacterBase_Statics::NewProp_BaseLookAtRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALRACharacterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALRACharacterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALRACharacterBase_Statics::ClassParams = {
		&ALRACharacterBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALRACharacterBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALRACharacterBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALRACharacterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALRACharacterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALRACharacterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALRACharacterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALRACharacterBase, 3779244467);
	template<> LOSTRUINSADVENTURE_API UClass* StaticClass<ALRACharacterBase>()
	{
		return ALRACharacterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALRACharacterBase(Z_Construct_UClass_ALRACharacterBase, &ALRACharacterBase::StaticClass, TEXT("/Script/LostRuinsAdventure"), TEXT("ALRACharacterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALRACharacterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
