// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LostRuinsAdventure/Public/Artifact/CollectArtifact.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectArtifact() {}
// Cross Module References
	LOSTRUINSADVENTURE_API UFunction* Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_LostRuinsAdventure();
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_UCollectArtifact_NoRegister();
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_UCollectArtifact();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics
	{
		struct _Script_LostRuinsAdventure_eventOnArtifactAdded_Parms
		{
			int32 TotalArtifact;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalArtifact;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics::NewProp_TotalArtifact = { "TotalArtifact", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_LostRuinsAdventure_eventOnArtifactAdded_Parms, TotalArtifact), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics::NewProp_TotalArtifact,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Artifact/CollectArtifact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LostRuinsAdventure, nullptr, "OnArtifactAdded__DelegateSignature", nullptr, nullptr, sizeof(_Script_LostRuinsAdventure_eventOnArtifactAdded_Parms), Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_LostRuinsAdventure_OnArtifactAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UCollectArtifact::StaticRegisterNativesUCollectArtifact()
	{
	}
	UClass* Z_Construct_UClass_UCollectArtifact_NoRegister()
	{
		return UCollectArtifact::StaticClass();
	}
	struct Z_Construct_UClass_UCollectArtifact_Statics
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
	UObject* (*const Z_Construct_UClass_UCollectArtifact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LostRuinsAdventure,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectArtifact_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Artifact/CollectArtifact.h" },
		{ "ModuleRelativePath", "Public/Artifact/CollectArtifact.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCollectArtifact_Statics::NewProp_ArtifactList_Inner = { "ArtifactList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollectArtifact_Statics::NewProp_ArtifactList_MetaData[] = {
		{ "Category", "CollectArtifact" },
		{ "ModuleRelativePath", "Public/Artifact/CollectArtifact.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCollectArtifact_Statics::NewProp_ArtifactList = { "ArtifactList", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCollectArtifact, ArtifactList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCollectArtifact_Statics::NewProp_ArtifactList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectArtifact_Statics::NewProp_ArtifactList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollectArtifact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectArtifact_Statics::NewProp_ArtifactList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollectArtifact_Statics::NewProp_ArtifactList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollectArtifact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollectArtifact>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCollectArtifact_Statics::ClassParams = {
		&UCollectArtifact::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollectArtifact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollectArtifact_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCollectArtifact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollectArtifact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollectArtifact()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCollectArtifact_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollectArtifact, 438031584);
	template<> LOSTRUINSADVENTURE_API UClass* StaticClass<UCollectArtifact>()
	{
		return UCollectArtifact::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollectArtifact(Z_Construct_UClass_UCollectArtifact, &UCollectArtifact::StaticClass, TEXT("/Script/LostRuinsAdventure"), TEXT("UCollectArtifact"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollectArtifact);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
