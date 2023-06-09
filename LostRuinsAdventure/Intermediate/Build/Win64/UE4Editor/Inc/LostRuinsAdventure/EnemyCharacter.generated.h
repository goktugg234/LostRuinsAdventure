// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef LOSTRUINSADVENTURE_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define LOSTRUINSADVENTURE_EnemyCharacter_generated_h

#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_SPARSE_DATA
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPatroling); \
	DECLARE_FUNCTION(execOnChasePlayer); \
	DECLARE_FUNCTION(execOnSeePawn); \
	DECLARE_FUNCTION(execOnHitPlayer);


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPatroling); \
	DECLARE_FUNCTION(execOnChasePlayer); \
	DECLARE_FUNCTION(execOnSeePawn); \
	DECLARE_FUNCTION(execOnHitPlayer);


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LostRuinsAdventure"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LostRuinsAdventure"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public:


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Damage() { return STRUCT_OFFSET(AEnemyCharacter, Damage); } \
	FORCEINLINE static uint32 __PPO__PawnSensingComponent() { return STRUCT_OFFSET(AEnemyCharacter, PawnSensingComponent); } \
	FORCEINLINE static uint32 __PPO__CurrentPatrolPointIndex() { return STRUCT_OFFSET(AEnemyCharacter, CurrentPatrolPointIndex); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AEnemyCharacter, MovementSpeed); } \
	FORCEINLINE static uint32 __PPO__DistanceThreshold() { return STRUCT_OFFSET(AEnemyCharacter, DistanceThreshold); }


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_11_PROLOG
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_SPARSE_DATA \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_RPC_WRAPPERS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_INCLASS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_SPARSE_DATA \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_INCLASS_NO_PURE_DECLS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOSTRUINSADVENTURE_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LostRuinsAdventure_Source_LostRuinsAdventure_Public_Enemy_EnemyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
