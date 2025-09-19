// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HealthComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UBlockingComponent;
class UDamageType;
#ifdef SECONDWIND_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define SECONDWIND_HealthComponent_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_10_DELEGATE \
SECONDWIND_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealth);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_11_DELEGATE \
SECONDWIND_API void FOnHealthDepleted_DelegateWrapper(const FMulticastScriptDelegate& OnHealthDepleted);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_12_DELEGATE \
SECONDWIND_API void FOnPhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPhaseChanged, int32 NewPhase);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_13_DELEGATE \
SECONDWIND_API void FOnPhaseTransition_DelegateWrapper(const FMulticastScriptDelegate& OnPhaseTransition);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_14_DELEGATE \
SECONDWIND_API void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_43_DELEGATE \
static void FOnEnterFinisherState_DelegateWrapper(const FMulticastScriptDelegate& OnEnterFinisherState);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execSetMaxHealth); \
	DECLARE_FUNCTION(execHealToFull); \
	DECLARE_FUNCTION(execSetBlockingComponent); \
	DECLARE_FUNCTION(execSetMaxPhases); \
	DECLARE_FUNCTION(execResetHealth); \
	DECLARE_FUNCTION(execExecuteFinisher); \
	DECLARE_FUNCTION(execIsTrulyDead); \
	DECLARE_FUNCTION(execIsInFinisherState); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetMaxPhases); \
	DECLARE_FUNCTION(execGetCurrentPhase); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHealthComponent(UHealthComponent&&); \
	UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent) \
	NO_API virtual ~UHealthComponent();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_16_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
