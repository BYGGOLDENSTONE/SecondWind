// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/ArenaDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SECONDWIND_ArenaDoor_generated_h
#error "ArenaDoor.generated.h already included, missing '#pragma once' in ArenaDoor.h"
#endif
#define SECONDWIND_ArenaDoor_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnProximityEndOverlap); \
	DECLARE_FUNCTION(execOnProximityBeginOverlap);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArenaDoor(); \
	friend struct Z_Construct_UClass_AArenaDoor_Statics; \
public: \
	DECLARE_CLASS(AArenaDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(AArenaDoor)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AArenaDoor(AArenaDoor&&); \
	AArenaDoor(const AArenaDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArenaDoor) \
	NO_API virtual ~AArenaDoor();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_29_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_32_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class AArenaDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h


#define FOREACH_ENUM_EDOORSTATE(op) \
	op(EDoorState::Closed) \
	op(EDoorState::Opening) \
	op(EDoorState::Open) \
	op(EDoorState::Locked) 

enum class EDoorState : uint8;
template<> struct TIsUEnumClass<EDoorState> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EDoorState>();

#define FOREACH_ENUM_EDOORTYPE(op) \
	op(EDoorType::ArenaEntry) \
	op(EDoorType::ArenaExit) \
	op(EDoorType::SafeZone) \
	op(EDoorType::StartingHub) 

enum class EDoorType : uint8;
template<> struct TIsUEnumClass<EDoorType> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EDoorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
