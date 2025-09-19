// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WeakSideComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWeakSide : uint8;
#ifdef SECONDWIND_WeakSideComponent_generated_h
#error "WeakSideComponent.generated.h already included, missing '#pragma once' in WeakSideComponent.h"
#endif
#define SECONDWIND_WeakSideComponent_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAttackFromWeakSide); \
	DECLARE_FUNCTION(execOnWeakSideHit); \
	DECLARE_FUNCTION(execIsWeakSideActive); \
	DECLARE_FUNCTION(execGetCurrentWeakSide); \
	DECLARE_FUNCTION(execDeactivateWeakSide); \
	DECLARE_FUNCTION(execActivateWeakSide);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeakSideComponent(); \
	friend struct Z_Construct_UClass_UWeakSideComponent_Statics; \
public: \
	DECLARE_CLASS(UWeakSideComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UWeakSideComponent)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWeakSideComponent(UWeakSideComponent&&); \
	UWeakSideComponent(const UWeakSideComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeakSideComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeakSideComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeakSideComponent) \
	NO_API virtual ~UWeakSideComponent();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_15_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UWeakSideComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h


#define FOREACH_ENUM_EWEAKSIDE(op) \
	op(EWeakSide::None) \
	op(EWeakSide::Left) \
	op(EWeakSide::Right) 

enum class EWeakSide : uint8;
template<> struct TIsUEnumClass<EWeakSide> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EWeakSide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
