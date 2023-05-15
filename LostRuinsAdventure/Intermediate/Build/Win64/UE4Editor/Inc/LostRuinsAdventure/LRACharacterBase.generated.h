// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOSTRUINSADVENTURE_LRACharacterBase_generated_h
#error "LRACharacterBase.generated.h already included, missing '#pragma once' in LRACharacterBase.h"
#endif
#define LOSTRUINSADVENTURE_LRACharacterBase_generated_h

#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_SPARSE_DATA
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayerDied);


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayerDied);


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_EVENT_PARMS \
	struct LRACharacterBase_eventOnArtifactAdded_Parms \
	{ \
		int32 Artifact; \
	};


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_CALLBACK_WRAPPERS
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALRACharacterBase(); \
	friend struct Z_Construct_UClass_ALRACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ALRACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LostRuinsAdventure"), NO_API) \
	DECLARE_SERIALIZER(ALRACharacterBase)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesALRACharacterBase(); \
	friend struct Z_Construct_UClass_ALRACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ALRACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LostRuinsAdventure"), NO_API) \
	DECLARE_SERIALIZER(ALRACharacterBase)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALRACharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALRACharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALRACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALRACharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALRACharacterBase(ALRACharacterBase&&); \
	NO_API ALRACharacterBase(const ALRACharacterBase&); \
public:


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALRACharacterBase(ALRACharacterBase&&); \
	NO_API ALRACharacterBase(const ALRACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALRACharacterBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALRACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALRACharacterBase)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseTurnRate() { return STRUCT_OFFSET(ALRACharacterBase, BaseTurnRate); } \
	FORCEINLINE static uint32 __PPO__BaseLookAtRate() { return STRUCT_OFFSET(ALRACharacterBase, BaseLookAtRate); }


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_15_PROLOG \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_EVENT_PARMS


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_PRIVATE_PROPERTY_OFFSET \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_SPARSE_DATA \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_RPC_WRAPPERS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_CALLBACK_WRAPPERS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_INCLASS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_PRIVATE_PROPERTY_OFFSET \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_SPARSE_DATA \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_CALLBACK_WRAPPERS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_INCLASS_NO_PURE_DECLS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOSTRUINSADVENTURE_API UClass* StaticClass<class ALRACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LostRuinsAdventure_Source_LostRuinsAdventure_Public_Characters_LRACharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
