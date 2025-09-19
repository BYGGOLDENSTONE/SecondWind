// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ArenaEnemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_ArenaEnemy_generated_h
#error "ArenaEnemy.generated.h already included, missing '#pragma once' in ArenaEnemy.h"
#endif
#define SECONDWIND_ArenaEnemy_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnterFinisherState); \
	DECLARE_FUNCTION(execOnEnemyDeath); \
	DECLARE_FUNCTION(execOnPhaseTransition);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArenaEnemy(); \
	friend struct Z_Construct_UClass_AArenaEnemy_Statics; \
public: \
	DECLARE_CLASS(AArenaEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(AArenaEnemy)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArenaEnemy(AArenaEnemy&&); \
	AArenaEnemy(const AArenaEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArenaEnemy) \
	NO_API virtual ~AArenaEnemy();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_11_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class AArenaEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
