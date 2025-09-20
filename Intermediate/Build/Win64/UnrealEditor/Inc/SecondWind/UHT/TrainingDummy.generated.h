// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/TrainingDummy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_TrainingDummy_generated_h
#error "TrainingDummy.generated.h already included, missing '#pragma once' in TrainingDummy.h"
#endif
#define SECONDWIND_TrainingDummy_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPhaseTransition); \
	DECLARE_FUNCTION(execOnEnterFinisherState); \
	DECLARE_FUNCTION(execOnPhaseChanged); \
	DECLARE_FUNCTION(execOnHealthDepleted);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrainingDummy(); \
	friend struct Z_Construct_UClass_ATrainingDummy_Statics; \
public: \
	DECLARE_CLASS(ATrainingDummy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(ATrainingDummy)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATrainingDummy(ATrainingDummy&&); \
	ATrainingDummy(const ATrainingDummy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrainingDummy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrainingDummy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrainingDummy) \
	NO_API virtual ~ATrainingDummy();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_14_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class ATrainingDummy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
