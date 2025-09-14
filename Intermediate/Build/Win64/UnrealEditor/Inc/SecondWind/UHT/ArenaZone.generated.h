// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ArenaZone.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SECONDWIND_ArenaZone_generated_h
#error "ArenaZone.generated.h already included, missing '#pragma once' in ArenaZone.h"
#endif
#define SECONDWIND_ArenaZone_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnZoneBoundsBeginOverlap);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArenaZone(); \
	friend struct Z_Construct_UClass_AArenaZone_Statics; \
public: \
	DECLARE_CLASS(AArenaZone, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(AArenaZone)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArenaZone(AArenaZone&&); \
	AArenaZone(const AArenaZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaZone); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArenaZone) \
	NO_API virtual ~AArenaZone();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_13_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class AArenaZone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
