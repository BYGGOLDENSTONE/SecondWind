// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Systems/FragmentSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_FragmentSystem_generated_h
#error "FragmentSystem.generated.h already included, missing '#pragma once' in FragmentSystem.h"
#endif
#define SECONDWIND_FragmentSystem_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_7_DELEGATE \
SECONDWIND_API void FOnFragmentSystemChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFragmentSystemChanged, int32 NewTotal);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetForNewRun); \
	DECLARE_FUNCTION(execLoadFragments); \
	DECLARE_FUNCTION(execSaveFragments); \
	DECLARE_FUNCTION(execGetFragmentCount); \
	DECLARE_FUNCTION(execSpendFragments); \
	DECLARE_FUNCTION(execAddFragments);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFragmentSystem(); \
	friend struct Z_Construct_UClass_UFragmentSystem_Statics; \
public: \
	DECLARE_CLASS(UFragmentSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UFragmentSystem)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFragmentSystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFragmentSystem(UFragmentSystem&&); \
	UFragmentSystem(const UFragmentSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFragmentSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFragmentSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFragmentSystem) \
	NO_API virtual ~UFragmentSystem();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_9_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UFragmentSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
