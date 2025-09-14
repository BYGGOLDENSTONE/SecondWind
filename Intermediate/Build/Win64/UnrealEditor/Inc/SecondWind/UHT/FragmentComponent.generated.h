// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/FragmentComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_FragmentComponent_generated_h
#error "FragmentComponent.generated.h already included, missing '#pragma once' in FragmentComponent.h"
#endif
#define SECONDWIND_FragmentComponent_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_7_DELEGATE \
SECONDWIND_API void FOnFragmentsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFragmentsChanged, int32 NewTotal);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFragmentComponent(); \
	friend struct Z_Construct_UClass_UFragmentComponent_Statics; \
public: \
	DECLARE_CLASS(UFragmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UFragmentComponent)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFragmentComponent(UFragmentComponent&&); \
	UFragmentComponent(const UFragmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFragmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFragmentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFragmentComponent) \
	NO_API virtual ~UFragmentComponent();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_9_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UFragmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
