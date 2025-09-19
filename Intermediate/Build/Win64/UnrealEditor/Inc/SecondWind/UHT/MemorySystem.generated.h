// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/MemorySystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FMemoryData;
#ifdef SECONDWIND_MemorySystem_generated_h
#error "MemorySystem.generated.h already included, missing '#pragma once' in MemorySystem.h"
#endif
#define SECONDWIND_MemorySystem_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMemoryData_Statics; \
	SECONDWIND_API static class UScriptStruct* StaticStruct();


template<> SECONDWIND_API UScriptStruct* StaticStruct<struct FMemoryData>();

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_48_DELEGATE \
SECONDWIND_API void FOnMemoryUnlocked_DelegateWrapper(const FMulticastScriptDelegate& OnMemoryUnlocked, const FString& MemoryID);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetForNewRun); \
	DECLARE_FUNCTION(execGetHackCounterRequirement); \
	DECLARE_FUNCTION(execApplyMemoryEffects); \
	DECLARE_FUNCTION(execGetMemoryData); \
	DECLARE_FUNCTION(execGetUnlockedMemories); \
	DECLARE_FUNCTION(execGetAvailableMemories); \
	DECLARE_FUNCTION(execIsMemoryUnlocked); \
	DECLARE_FUNCTION(execUnlockMemory);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMemorySystem(); \
	friend struct Z_Construct_UClass_UMemorySystem_Statics; \
public: \
	DECLARE_CLASS(UMemorySystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UMemorySystem)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMemorySystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMemorySystem(UMemorySystem&&); \
	UMemorySystem(const UMemorySystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMemorySystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMemorySystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMemorySystem) \
	NO_API virtual ~UMemorySystem();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_50_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_53_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UMemorySystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h


#define FOREACH_ENUM_EMEMORYTYPE(op) \
	op(EMemoryType::WeakSide) \
	op(EMemoryType::HackReduction) \
	op(EMemoryType::AttackBoost) \
	op(EMemoryType::DefenseBoost) \
	op(EMemoryType::HealthBoost) 

enum class EMemoryType : uint8;
template<> struct TIsUEnumClass<EMemoryType> { enum { Value = true }; };
template<> SECONDWIND_API UEnum* StaticEnum<EMemoryType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
