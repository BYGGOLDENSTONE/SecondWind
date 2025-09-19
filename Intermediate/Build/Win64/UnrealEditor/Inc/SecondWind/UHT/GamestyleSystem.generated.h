// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/GamestyleSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class EGamestyleType : uint8;
struct FGamestyleData;
#ifdef SECONDWIND_GamestyleSystem_generated_h
#error "GamestyleSystem.generated.h already included, missing '#pragma once' in GamestyleSystem.h"
#endif
#define SECONDWIND_GamestyleSystem_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGamestyleData_Statics; \
	SECONDWIND_API static class UScriptStruct* StaticStruct();


template<> SECONDWIND_API UScriptStruct* StaticStruct<struct FGamestyleData>();

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_43_DELEGATE \
SECONDWIND_API void FOnGamestyleAssigned_DelegateWrapper(const FMulticastScriptDelegate& OnGamestyleAssigned, EGamestyleType Gamestyle, const FString& DisplayName);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_44_DELEGATE \
SECONDWIND_API void FOnGamestyleStackAdded_DelegateWrapper(const FMulticastScriptDelegate& OnGamestyleStackAdded, int32 NewStackCount);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTechnomancerHackReduction); \
	DECLARE_FUNCTION(execGetUtilityCounterBonus); \
	DECLARE_FUNCTION(execGetMobilitySpeedBonus); \
	DECLARE_FUNCTION(execGetDefenseHealthBonus); \
	DECLARE_FUNCTION(execGetOffenseDamageBonus); \
	DECLARE_FUNCTION(execResetForNewRun); \
	DECLARE_FUNCTION(execApplyGamestyleEffects); \
	DECLARE_FUNCTION(execGetStackCount); \
	DECLARE_FUNCTION(execGetCurrentGamestyleData); \
	DECLARE_FUNCTION(execGetCurrentGamestyle); \
	DECLARE_FUNCTION(execAddGamestyleStack); \
	DECLARE_FUNCTION(execAssignRandomGamestyle);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGamestyleSystem(); \
	friend struct Z_Construct_UClass_UGamestyleSystem_Statics; \
public: \
	DECLARE_CLASS(UGamestyleSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UGamestyleSystem)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGamestyleSystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGamestyleSystem(UGamestyleSystem&&); \
	UGamestyleSystem(const UGamestyleSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGamestyleSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGamestyleSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGamestyleSystem) \
	NO_API virtual ~UGamestyleSystem();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_46_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_49_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UGamestyleSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h


#define FOREACH_ENUM_EGAMESTYLETYPE(op) \
	op(EGamestyleType::Defense) \
	op(EGamestyleType::Offense) \
	op(EGamestyleType::Mobility) \
	op(EGamestyleType::Utility) \
	op(EGamestyleType::Technomancer) 

enum class EGamestyleType : uint8;
template<> struct TIsUEnumClass<EGamestyleType> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EGamestyleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
