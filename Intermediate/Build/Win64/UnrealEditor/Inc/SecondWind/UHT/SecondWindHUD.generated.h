// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/SecondWindHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGamestyleType : uint8;
#ifdef SECONDWIND_SecondWindHUD_generated_h
#error "SecondWindHUD.generated.h already included, missing '#pragma once' in SecondWindHUD.h"
#endif
#define SECONDWIND_SecondWindHUD_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGamestyleStackAdded); \
	DECLARE_FUNCTION(execOnGamestyleAssigned);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASecondWindHUD(); \
	friend struct Z_Construct_UClass_ASecondWindHUD_Statics; \
public: \
	DECLARE_CLASS(ASecondWindHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(ASecondWindHUD)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASecondWindHUD(ASecondWindHUD&&); \
	ASecondWindHUD(const ASecondWindHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASecondWindHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASecondWindHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASecondWindHUD) \
	NO_API virtual ~ASecondWindHUD();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_14_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class ASecondWindHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
