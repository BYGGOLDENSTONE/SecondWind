// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/RunManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_RunManager_generated_h
#error "RunManager.generated.h already included, missing '#pragma once' in RunManager.h"
#endif
#define SECONDWIND_RunManager_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_7_DELEGATE \
SECONDWIND_API void FOnRunStarted_DelegateWrapper(const FMulticastScriptDelegate& OnRunStarted, int32 RunNumber);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_8_DELEGATE \
SECONDWIND_API void FOnRunEnded_DelegateWrapper(const FMulticastScriptDelegate& OnRunEnded, int32 RunNumber, bool bCompleted);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsRunActive); \
	DECLARE_FUNCTION(execGetCurrentRunNumber); \
	DECLARE_FUNCTION(execOnPlayerDeath); \
	DECLARE_FUNCTION(execEndCurrentRun); \
	DECLARE_FUNCTION(execStartNewRun);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURunManager(); \
	friend struct Z_Construct_UClass_URunManager_Statics; \
public: \
	DECLARE_CLASS(URunManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(URunManager)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URunManager(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URunManager(URunManager&&); \
	URunManager(const URunManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URunManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URunManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URunManager) \
	NO_API virtual ~URunManager();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_10_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class URunManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
