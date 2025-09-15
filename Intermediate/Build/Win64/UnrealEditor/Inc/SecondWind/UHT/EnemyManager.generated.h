// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/EnemyManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_EnemyManager_generated_h
#error "EnemyManager.generated.h already included, missing '#pragma once' in EnemyManager.h"
#endif
#define SECONDWIND_EnemyManager_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyManager(); \
	friend struct Z_Construct_UClass_UEnemyManager_Statics; \
public: \
	DECLARE_CLASS(UEnemyManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UEnemyManager)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnemyManager(UEnemyManager&&); \
	UEnemyManager(const UEnemyManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemyManager) \
	NO_API virtual ~UEnemyManager();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h_7_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UEnemyManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
