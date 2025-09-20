// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AnimationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef SECONDWIND_AnimationComponent_generated_h
#error "AnimationComponent.generated.h already included, missing '#pragma once' in AnimationComponent.h"
#endif
#define SECONDWIND_AnimationComponent_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMontageBlendOut); \
	DECLARE_FUNCTION(execOnMontageEnded);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationComponent(); \
	friend struct Z_Construct_UClass_UAnimationComponent_Statics; \
public: \
	DECLARE_CLASS(UAnimationComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UAnimationComponent)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationComponent(UAnimationComponent&&); \
	UAnimationComponent(const UAnimationComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimationComponent) \
	NO_API virtual ~UAnimationComponent();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_40_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UAnimationComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h


#define FOREACH_ENUM_EANIMATIONTYPE(op) \
	op(EAnimationType::None) \
	op(EAnimationType::AttackLeft) \
	op(EAnimationType::AttackRight) \
	op(EAnimationType::AttackOverhead) \
	op(EAnimationType::BlockLeft) \
	op(EAnimationType::BlockCenter) \
	op(EAnimationType::BlockRight) \
	op(EAnimationType::DodgeLeft) \
	op(EAnimationType::DodgeRight) \
	op(EAnimationType::DodgeBack) \
	op(EAnimationType::DodgeForward) \
	op(EAnimationType::HackCast) \
	op(EAnimationType::HackResponse) \
	op(EAnimationType::Stagger) \
	op(EAnimationType::FinisherExecute) \
	op(EAnimationType::FinisherReceive) 

enum class EAnimationType : uint8;
template<> struct TIsUEnumClass<EAnimationType> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EAnimationType>();

#define FOREACH_ENUM_EANIMATIONPRIORITY(op) \
	op(EAnimationPriority::Low) \
	op(EAnimationPriority::Medium) \
	op(EAnimationPriority::High) \
	op(EAnimationPriority::Critical) 

enum class EAnimationPriority : uint8;
template<> struct TIsUEnumClass<EAnimationPriority> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EAnimationPriority>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
