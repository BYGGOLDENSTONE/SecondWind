// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ArenaManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_ArenaManager_generated_h
#error "ArenaManager.generated.h already included, missing '#pragma once' in ArenaManager.h"
#endif
#define SECONDWIND_ArenaManager_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArenaManager(); \
	friend struct Z_Construct_UClass_AArenaManager_Statics; \
public: \
	DECLARE_CLASS(AArenaManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(AArenaManager)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArenaManager(AArenaManager&&); \
	AArenaManager(const AArenaManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArenaManager) \
	NO_API virtual ~AArenaManager();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_19_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class AArenaManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h


#define FOREACH_ENUM_EGAMEPHASE(op) \
	op(EGamePhase::SafeZone) \
	op(EGamePhase::Arena) \
	op(EGamePhase::IntermediateSafeZone) \
	op(EGamePhase::GameComplete) 

enum class EGamePhase : uint8;
template<> struct TIsUEnumClass<EGamePhase> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EGamePhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
