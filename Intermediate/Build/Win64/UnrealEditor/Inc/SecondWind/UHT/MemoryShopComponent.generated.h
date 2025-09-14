// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MemoryShopComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SECONDWIND_MemoryShopComponent_generated_h
#error "MemoryShopComponent.generated.h already included, missing '#pragma once' in MemoryShopComponent.h"
#endif
#define SECONDWIND_MemoryShopComponent_generated_h

#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsShopOpen); \
	DECLARE_FUNCTION(execCloseMemoryShop); \
	DECLARE_FUNCTION(execOpenMemoryShop);


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMemoryShopComponent(); \
	friend struct Z_Construct_UClass_UMemoryShopComponent_Statics; \
public: \
	DECLARE_CLASS(UMemoryShopComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecondWind"), NO_API) \
	DECLARE_SERIALIZER(UMemoryShopComponent)


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMemoryShopComponent(UMemoryShopComponent&&); \
	UMemoryShopComponent(const UMemoryShopComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMemoryShopComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMemoryShopComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMemoryShopComponent) \
	NO_API virtual ~UMemoryShopComponent();


#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_7_PROLOG
#define FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECONDWIND_API UClass* StaticClass<class UMemoryShopComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
