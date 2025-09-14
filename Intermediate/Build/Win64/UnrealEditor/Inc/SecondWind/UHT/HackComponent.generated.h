// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HackComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_HackComponent_generated_h
#error "HackComponent.generated.h already included, missing '#pragma once' in HackComponent.h"
#endif
#define SECONDWIND_HackComponent_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_7_DELEGATE \
SECONDWIND_API void FOnCounterProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCounterProgressChanged, int32 CurrentCounters);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_8_DELEGATE \
SECONDWIND_API void FOnHackAvailable_DelegateWrapper(const FMulticastScriptDelegate& OnHackAvailable);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_9_DELEGATE \
SECONDWIND_API void FOnHackExecuted_DelegateWrapper(const FMulticastScriptDelegate& OnHackExecuted);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_10_DELEGATE \
SECONDWIND_API void FOnCountersReset_DelegateWrapper(const FMulticastScriptDelegate& OnCountersReset);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRequiredCounters); \
	DECLARE_FUNCTION(execGetUnblockedHits); \
	DECLARE_FUNCTION(execGetRequiredCounters); \
	DECLARE_FUNCTION(execGetCurrentCounters); \
	DECLARE_FUNCTION(execIsHackAvailable); \
	DECLARE_FUNCTION(execTryExecuteHack); \
	DECLARE_FUNCTION(execResetCounters); \
	DECLARE_FUNCTION(execRegisterUnblockedHit); \
	DECLARE_FUNCTION(execAddCounter);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHackComponent(); \
	friend struct Z_Construct_UClass_UHackComponent_Statics; \
public: \
	DECLARE_CLASS(UHackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UHackComponent)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHackComponent(UHackComponent&&); \
	UHackComponent(const UHackComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHackComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHackComponent) \
	NO_API virtual ~UHackComponent();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_12_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UHackComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
