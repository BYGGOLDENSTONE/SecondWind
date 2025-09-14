// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DodgeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_DodgeComponent_generated_h
#error "DodgeComponent.generated.h already included, missing '#pragma once' in DodgeComponent.h"
#endif
#define SECONDWIND_DodgeComponent_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDodgeComponent(); \
	friend struct Z_Construct_UClass_UDodgeComponent_Statics; \
public: \
	DECLARE_CLASS(UDodgeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UDodgeComponent)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDodgeComponent(UDodgeComponent&&); \
	UDodgeComponent(const UDodgeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDodgeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDodgeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDodgeComponent) \
	NO_API virtual ~UDodgeComponent();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_18_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UDodgeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h


#define FOREACH_ENUM_EDODGEDIRECTION(op) \
	op(EDodgeDirection::None) \
	op(EDodgeDirection::Left) \
	op(EDodgeDirection::Right) \
	op(EDodgeDirection::Back) \
	op(EDodgeDirection::Forward) 

enum class EDodgeDirection : uint8;
template<> struct TIsUEnumClass<EDodgeDirection> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EDodgeDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
