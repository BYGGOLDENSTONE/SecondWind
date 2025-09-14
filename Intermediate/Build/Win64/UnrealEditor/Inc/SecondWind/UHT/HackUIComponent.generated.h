// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/HackUIComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_HackUIComponent_generated_h
#error "HackUIComponent.generated.h already included, missing '#pragma once' in HackUIComponent.h"
#endif
#define SECONDWIND_HackUIComponent_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCountersReset); \
	DECLARE_FUNCTION(execOnHackExecuted); \
	DECLARE_FUNCTION(execOnHackAvailable); \
	DECLARE_FUNCTION(execOnCounterProgressChanged);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHackUIComponent(); \
	friend struct Z_Construct_UClass_UHackUIComponent_Statics; \
public: \
	DECLARE_CLASS(UHackUIComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UHackUIComponent)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHackUIComponent(UHackUIComponent&&); \
	UHackUIComponent(const UHackUIComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHackUIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHackUIComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHackUIComponent) \
	NO_API virtual ~UHackUIComponent();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_9_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UHackUIComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
