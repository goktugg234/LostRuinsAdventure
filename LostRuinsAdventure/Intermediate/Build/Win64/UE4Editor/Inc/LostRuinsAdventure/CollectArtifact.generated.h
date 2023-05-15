// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LOSTRUINSADVENTURE_CollectArtifact_generated_h
#error "CollectArtifact.generated.h already included, missing '#pragma once' in CollectArtifact.h"
#endif
#define LOSTRUINSADVENTURE_CollectArtifact_generated_h

#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_9_DELEGATE \
struct _Script_LostRuinsAdventure_eventOnArtifactAdded_Parms \
{ \
	int32 TotalArtifact; \
}; \
static inline void FOnArtifactAdded_DelegateWrapper(const FMulticastScriptDelegate& OnArtifactAdded, int32 TotalArtifact) \
{ \
	_Script_LostRuinsAdventure_eventOnArtifactAdded_Parms Parms; \
	Parms.TotalArtifact=TotalArtifact; \
	OnArtifactAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_SPARSE_DATA
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_RPC_WRAPPERS
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollectArtifact(); \
	friend struct Z_Construct_UClass_UCollectArtifact_Statics; \
public: \
	DECLARE_CLASS(UCollectArtifact, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LostRuinsAdventure"), NO_API) \
	DECLARE_SERIALIZER(UCollectArtifact)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCollectArtifact(); \
	friend struct Z_Construct_UClass_UCollectArtifact_Statics; \
public: \
	DECLARE_CLASS(UCollectArtifact, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LostRuinsAdventure"), NO_API) \
	DECLARE_SERIALIZER(UCollectArtifact)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollectArtifact(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollectArtifact) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollectArtifact); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectArtifact); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollectArtifact(UCollectArtifact&&); \
	NO_API UCollectArtifact(const UCollectArtifact&); \
public:


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollectArtifact(UCollectArtifact&&); \
	NO_API UCollectArtifact(const UCollectArtifact&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollectArtifact); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectArtifact); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCollectArtifact)


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_PRIVATE_PROPERTY_OFFSET
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_11_PROLOG
#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_PRIVATE_PROPERTY_OFFSET \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_SPARSE_DATA \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_RPC_WRAPPERS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_INCLASS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_PRIVATE_PROPERTY_OFFSET \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_SPARSE_DATA \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_INCLASS_NO_PURE_DECLS \
	LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOSTRUINSADVENTURE_API UClass* StaticClass<class UCollectArtifact>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LostRuinsAdventure_Source_LostRuinsAdventure_Public_Artifact_CollectArtifact_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
