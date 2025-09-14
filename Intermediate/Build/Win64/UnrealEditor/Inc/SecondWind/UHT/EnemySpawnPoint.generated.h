// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/EnemySpawnPoint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_EnemySpawnPoint_generated_h
#error "EnemySpawnPoint.generated.h already included, missing '#pragma once' in EnemySpawnPoint.h"
#endif
#define SECONDWIND_EnemySpawnPoint_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawnPoint(); \
	friend struct Z_Construct_UClass_AEnemySpawnPoint_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawnPoint)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AEnemySpawnPoint(AEnemySpawnPoint&&); \
	AEnemySpawnPoint(const AEnemySpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawnPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemySpawnPoint) \
	NO_API virtual ~AEnemySpawnPoint();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h_12_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class AEnemySpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
