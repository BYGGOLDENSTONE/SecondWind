// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/SafeZoneCorridor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SECONDWIND_SafeZoneCorridor_generated_h
#error "SafeZoneCorridor.generated.h already included, missing '#pragma once' in SafeZoneCorridor.h"
#endif
#define SECONDWIND_SafeZoneCorridor_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCorridorExit); \
	DECLARE_FUNCTION(execOnCorridorEnter);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASafeZoneCorridor(); \
	friend struct Z_Construct_UClass_ASafeZoneCorridor_Statics; \
public: \
	DECLARE_CLASS(ASafeZoneCorridor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(ASafeZoneCorridor)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASafeZoneCorridor(ASafeZoneCorridor&&); \
	ASafeZoneCorridor(const ASafeZoneCorridor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASafeZoneCorridor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASafeZoneCorridor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASafeZoneCorridor) \
	NO_API virtual ~ASafeZoneCorridor();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_11_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class ASafeZoneCorridor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
