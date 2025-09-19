// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/PhysicsHitReactionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_PhysicsHitReactionComponent_generated_h
#error "PhysicsHitReactionComponent.generated.h already included, missing '#pragma once' in PhysicsHitReactionComponent.h"
#endif
#define SECONDWIND_PhysicsHitReactionComponent_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsProfile_Statics; \
	SECONDWIND_API static class UScriptStruct* StaticStruct();


template<> SECONDWIND_API UScriptStruct* StaticStruct<struct FPhysicsProfile>();

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsHitReactionComponent(); \
	friend struct Z_Construct_UClass_UPhysicsHitReactionComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsHitReactionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsHitReactionComponent)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsHitReactionComponent(UPhysicsHitReactionComponent&&); \
	UPhysicsHitReactionComponent(const UPhysicsHitReactionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsHitReactionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsHitReactionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhysicsHitReactionComponent) \
	NO_API virtual ~UPhysicsHitReactionComponent();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_40_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_43_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UPhysicsHitReactionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h


#define FOREACH_ENUM_EHITREACTIONTYPE(op) \
	op(EHitReactionType::Light) \
	op(EHitReactionType::Medium) \
	op(EHitReactionType::Heavy) \
	op(EHitReactionType::Blocked) \
	op(EHitReactionType::WeakSide) \
	op(EHitReactionType::Hack) \
	op(EHitReactionType::Knockback) 

enum class EHitReactionType : uint8;
template<> struct TIsUEnumClass<EHitReactionType> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EHitReactionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
