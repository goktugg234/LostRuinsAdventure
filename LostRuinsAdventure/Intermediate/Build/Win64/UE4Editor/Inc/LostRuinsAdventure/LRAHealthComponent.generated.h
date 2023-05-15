// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef LOSTRUINSADVENTURE_LRAHealthComponent_generated_h
#error "LRAHealthComponent.generated.h already included, missing '#pragma once' in LRAHealthComponent.h"
#endif
#define LOSTRUINSADVENTURE_LRAHealthComponent_generated_h

#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_10_DELEGATE \
static inline void FOnUpdateHealth_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateHealth) \
{ \
	OnUpdateHealth.ProcessMulticastDelegate<UObject>(NULL); \
}


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_9_DELEGATE \
static inline void FOnPlayerDied_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerDied) \
{ \
	OnPlayerDied.ProcessMulticastDelegate<UObject>(NULL); \
}


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_SPARSE_DATA
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeDamage);


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULRAHealthComponent(); \
	friend struct Z_Construct_UClass_ULRAHealthComponent_Statics; \
public: \
	DECLARE_CLASS(ULRAHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LostRuinsAdventure"), NO_API) \
	DECLARE_SERIALIZER(ULRAHealthComponent)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULRAHealthComponent(); \
	friend struct Z_Construct_UClass_ULRAHealthComponent_Statics; \
public: \
	DECLARE_CLASS(ULRAHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LostRuinsAdventure"), NO_API) \
	DECLARE_SERIALIZER(ULRAHealthComponent)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULRAHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULRAHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULRAHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULRAHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULRAHealthComponent(ULRAHealthComponent&&); \
	NO_API ULRAHealthComponent(const ULRAHealthComponent&); \
public:


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULRAHealthComponent(ULRAHealthComponent&&); \
	NO_API ULRAHealthComponent(const ULRAHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULRAHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULRAHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULRAHealthComponent)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_12_PROLOG
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_SPARSE_DATA \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_RPC_WRAPPERS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_INCLASS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_SPARSE_DATA \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_INCLASS_NO_PURE_DECLS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOSTRUINSADVENTURE_API UClass* StaticClass<class ULRAHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LostRuinsAdventure_Source_LostRuinsAdventure_Public_Health_LRAHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
