// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/BlockingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBlockDirection : uint8;
#ifdef SECONDWIND_BlockingComponent_generated_h
#error "BlockingComponent.generated.h already included, missing '#pragma once' in BlockingComponent.h"
#endif
#define SECONDWIND_BlockingComponent_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTriggerCounterWindow); \
	DECLARE_FUNCTION(execIsInCounterWindow); \
	DECLARE_FUNCTION(execCalculateDamageReduction); \
	DECLARE_FUNCTION(execGetBlockDirection); \
	DECLARE_FUNCTION(execIsBlocking); \
	DECLARE_FUNCTION(execUpdateBlockDirection); \
	DECLARE_FUNCTION(execStopBlocking); \
	DECLARE_FUNCTION(execStartBlocking);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlockingComponent(); \
	friend struct Z_Construct_UClass_UBlockingComponent_Statics; \
public: \
	DECLARE_CLASS(UBlockingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UBlockingComponent)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlockingComponent(UBlockingComponent&&); \
	UBlockingComponent(const UBlockingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlockingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlockingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlockingComponent) \
	NO_API virtual ~UBlockingComponent();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_16_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UBlockingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h


#define FOREACH_ENUM_EBLOCKDIRECTION(op) \
	op(EBlockDirection::None) \
	op(EBlockDirection::Left) \
	op(EBlockDirection::Center) \
	op(EBlockDirection::Right) 

enum class EBlockDirection : uint8;
template<> struct TIsUEnumClass<EBlockDirection> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EBlockDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
