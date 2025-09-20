// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AnimationComponentSimplified.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FBranchingPointNotifyPayload;
#ifdef SECONDWIND_AnimationComponentSimplified_generated_h
#error "AnimationComponentSimplified.generated.h already included, missing '#pragma once' in AnimationComponentSimplified.h"
#endif
#define SECONDWIND_AnimationComponentSimplified_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationVariation_Statics; \
	SECONDWIND_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SECONDWIND_API UScriptStruct* StaticStruct<struct FAnimationVariation>();

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageEnded);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationComponentSimplified(); \
	friend struct Z_Construct_UClass_UAnimationComponentSimplified_Statics; \
public: \
	DECLARE_CLASS(UAnimationComponentSimplified, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UAnimationComponentSimplified)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_69_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationComponentSimplified(UAnimationComponentSimplified&&); \
	UAnimationComponentSimplified(const UAnimationComponentSimplified&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationComponentSimplified); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationComponentSimplified); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimationComponentSimplified) \
	NO_API virtual ~UAnimationComponentSimplified();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_66_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_69_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UAnimationComponentSimplified>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h


#define FOREACH_ENUM_EANIMATIONTYPE(op) \
	op(EAnimationType::None) \
	op(EAnimationType::AttackLeft) \
	op(EAnimationType::AttackRight) \
	op(EAnimationType::AttackOverhead) \
	op(EAnimationType::AttackFront) \
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
