// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LostRuinsAdventure/Public/Widgets/WB_DeathScreenBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWB_DeathScreenBase() {}
// Cross Module References
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_UWB_DeathScreenBase_NoRegister();
	LOSTRUINSADVENTURE_API UClass* Z_Construct_UClass_UWB_DeathScreenBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LostRuinsAdventure();
// End Cross Module References
	DEFINE_FUNCTION(UWB_DeathScreenBase::execOnQuitButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWB_DeathScreenBase::execOnRestartButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartButtonClicked();
		P_NATIVE_END;
	}
	void UWB_DeathScreenBase::StaticRegisterNativesUWB_DeathScreenBase()
	{
		UClass* Class = UWB_DeathScreenBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQuitButtonClicked", &UWB_DeathScreenBase::execOnQuitButtonClicked },
			{ "OnRestartButtonClicked", &UWB_DeathScreenBase::execOnRestartButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWB_DeathScreenBase_OnQuitButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWB_DeathScreenBase_OnQuitButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/WB_DeathScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWB_DeathScreenBase_OnQuitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWB_DeathScreenBase, nullptr, "OnQuitButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWB_DeathScreenBase_OnQuitButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWB_DeathScreenBase_OnQuitButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWB_DeathScreenBase_OnQuitButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWB_DeathScreenBase_OnQuitButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWB_DeathScreenBase_OnRestartButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWB_DeathScreenBase_OnRestartButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/WB_DeathScreenBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWB_DeathScreenBase_OnRestartButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWB_DeathScreenBase, nullptr, "OnRestartButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWB_DeathScreenBase_OnRestartButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWB_DeathScreenBase_OnRestartButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWB_DeathScreenBase_OnRestartButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWB_DeathScreenBase_OnRestartButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWB_DeathScreenBase_NoRegister()
	{
		return UWB_DeathScreenBase::StaticClass();
	}
	struct Z_Construct_UClass_UWB_DeathScreenBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWB_DeathScreenBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LostRuinsAdventure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWB_DeathScreenBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWB_DeathScreenBase_OnQuitButtonClicked, "OnQuitButtonClicked" }, // 3240303466
		{ &Z_Construct_UFunction_UWB_DeathScreenBase_OnRestartButtonClicked, "OnRestartButtonClicked" }, // 3200641690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWB_DeathScreenBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/WB_DeathScreenBase.h" },
		{ "ModuleRelativePath", "Public/Widgets/WB_DeathScreenBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWB_DeathScreenBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWB_DeathScreenBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWB_DeathScreenBase_Statics::ClassParams = {
		&UWB_DeathScreenBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWB_DeathScreenBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWB_DeathScreenBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWB_DeathScreenBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWB_DeathScreenBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWB_DeathScreenBase, 1254369829);
	template<> LOSTRUINSADVENTURE_API UClass* StaticClass<UWB_DeathScreenBase>()
	{
		return UWB_DeathScreenBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWB_DeathScreenBase(Z_Construct_UClass_UWB_DeathScreenBase, &UWB_DeathScreenBase::StaticClass, TEXT("/Script/LostRuinsAdventure"), TEXT("UWB_DeathScreenBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWB_DeathScreenBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
