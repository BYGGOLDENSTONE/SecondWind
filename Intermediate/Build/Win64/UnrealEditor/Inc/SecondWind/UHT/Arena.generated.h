// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Arena.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_Arena_generated_h
#error "Arena.generated.h already included, missing '#pragma once' in Arena.h"
#endif
#define SECONDWIND_Arena_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayerDefeated); \
	DECLARE_FUNCTION(execOnEnemyDefeated);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArena(); \
	friend struct Z_Construct_UClass_AArena_Statics; \
public: \
	DECLARE_CLASS(AArena, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(AArena)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArena(AArena&&); \
	AArena(const AArena&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArena); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArena); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArena) \
	NO_API virtual ~AArena();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_20_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_23_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class AArena>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h


#define FOREACH_ENUM_EARENASTATE(op) \
	op(EArenaState::Inactive) \
	op(EArenaState::Preparing) \
	op(EArenaState::InCombat) \
	op(EArenaState::Victory) \
	op(EArenaState::Defeat) 

enum class EArenaState : uint8;
template<> struct TIsUEnumClass<EArenaState> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EArenaState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
