// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/AnimationDataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_AnimationDataAsset_generated_h
#error "AnimationDataAsset.generated.h already included, missing '#pragma once' in AnimationDataAsset.h"
#endif
#define SECONDWIND_AnimationDataAsset_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationEntry_Statics; \
	SECONDWIND_API static class UScriptStruct* StaticStruct();


template<> SECONDWIND_API UScriptStruct* StaticStruct<struct FAnimationEntry>();

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationSet_Statics; \
	SECONDWIND_API static class UScriptStruct* StaticStruct();


template<> SECONDWIND_API UScriptStruct* StaticStruct<struct FAnimationSet>();

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTransitions_Statics; \
	SECONDWIND_API static class UScriptStruct* StaticStruct();


template<> SECONDWIND_API UScriptStruct* StaticStruct<struct FAnimationTransitions>();

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationDataAsset(); \
	friend struct Z_Construct_UClass_UAnimationDataAsset_Statics; \
public: \
	DECLARE_CLASS(UAnimationDataAsset, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UAnimationDataAsset)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimationDataAsset(UAnimationDataAsset&&); \
	UAnimationDataAsset(const UAnimationDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataAsset) \
	NO_API virtual ~UAnimationDataAsset();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_144_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_147_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UAnimationDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h


#define FOREACH_ENUM_EANIMATIONCATEGORY(op) \
	op(EAnimationCategory::Core) \
	op(EAnimationCategory::Counter) \
	op(EAnimationCategory::Finisher) \
	op(EAnimationCategory::Combo) \
	op(EAnimationCategory::HitReaction) \
	op(EAnimationCategory::Crouch) \
	op(EAnimationCategory::Special) \
	op(EAnimationCategory::Transition) \
	op(EAnimationCategory::Taunt) \
	op(EAnimationCategory::Contextual) 

enum class EAnimationCategory : uint8;
template<> struct TIsUEnumClass<EAnimationCategory> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EAnimationCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
