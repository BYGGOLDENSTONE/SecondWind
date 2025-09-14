// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/CameraLockOnComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraLockOnComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UCameraLockOnComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UCameraLockOnComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class UCameraLockOnComponent
void UCameraLockOnComponent::StaticRegisterNativesUCameraLockOnComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraLockOnComponent);
UClass* Z_Construct_UClass_UCameraLockOnComponent_NoRegister()
{
	return UCameraLockOnComponent::StaticClass();
}
struct Z_Construct_UClass_UCameraLockOnComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/CameraLockOnComponent.h" },
		{ "ModuleRelativePath", "Components/CameraLockOnComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainingDummyLockRange_MetaData[] = {
		{ "Category", "Lock-On Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Lock-on settings\n" },
#endif
		{ "ModuleRelativePath", "Components/CameraLockOnComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lock-on settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaEnemyLockRange_MetaData[] = {
		{ "Category", "Lock-On Settings" },
		{ "ModuleRelativePath", "Components/CameraLockOnComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLagSpeed_MetaData[] = {
		{ "Category", "Lock-On Settings" },
		{ "ModuleRelativePath", "Components/CameraLockOnComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Lock-On Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reduced for smoother camera movement\n" },
#endif
		{ "ModuleRelativePath", "Components/CameraLockOnComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reduced for smoother camera movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialLockOnSpeed_MetaData[] = {
		{ "Category", "Lock-On Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Reduced for smoother character rotation\n" },
#endif
		{ "ModuleRelativePath", "Components/CameraLockOnComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reduced for smoother character rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLockOn_MetaData[] = {
		{ "Category", "Lock-On Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Even slower speed for initial lock-on\n" },
#endif
		{ "ModuleRelativePath", "Components/CameraLockOnComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Even slower speed for initial lock-on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockedCameraPitch_MetaData[] = {
		{ "Category", "Lock-On Settings" },
		{ "ModuleRelativePath", "Components/CameraLockOnComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainPitchWhenLocked_MetaData[] = {
		{ "Category", "Lock-On Settings" },
		{ "ModuleRelativePath", "Components/CameraLockOnComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current target\n" },
#endif
		{ "ModuleRelativePath", "Components/CameraLockOnComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current target" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrainingDummyLockRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArenaEnemyLockRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLagSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialLockOnSpeed;
	static void NewProp_bAutoLockOn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLockOn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockedCameraPitch;
	static void NewProp_bMaintainPitchWhenLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainPitchWhenLocked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraLockOnComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_TrainingDummyLockRange = { "TrainingDummyLockRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraLockOnComponent, TrainingDummyLockRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainingDummyLockRange_MetaData), NewProp_TrainingDummyLockRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_ArenaEnemyLockRange = { "ArenaEnemyLockRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraLockOnComponent, ArenaEnemyLockRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaEnemyLockRange_MetaData), NewProp_ArenaEnemyLockRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_CameraLagSpeed = { "CameraLagSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraLockOnComponent, CameraLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLagSpeed_MetaData), NewProp_CameraLagSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraLockOnComponent, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_InitialLockOnSpeed = { "InitialLockOnSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraLockOnComponent, InitialLockOnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialLockOnSpeed_MetaData), NewProp_InitialLockOnSpeed_MetaData) };
void Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_bAutoLockOn_SetBit(void* Obj)
{
	((UCameraLockOnComponent*)Obj)->bAutoLockOn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_bAutoLockOn = { "bAutoLockOn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraLockOnComponent), &Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_bAutoLockOn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoLockOn_MetaData), NewProp_bAutoLockOn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_LockedCameraPitch = { "LockedCameraPitch", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraLockOnComponent, LockedCameraPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockedCameraPitch_MetaData), NewProp_LockedCameraPitch_MetaData) };
void Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_bMaintainPitchWhenLocked_SetBit(void* Obj)
{
	((UCameraLockOnComponent*)Obj)->bMaintainPitchWhenLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_bMaintainPitchWhenLocked = { "bMaintainPitchWhenLocked", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraLockOnComponent), &Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_bMaintainPitchWhenLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaintainPitchWhenLocked_MetaData), NewProp_bMaintainPitchWhenLocked_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraLockOnComponent, CurrentTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTarget_MetaData), NewProp_CurrentTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraLockOnComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_TrainingDummyLockRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_ArenaEnemyLockRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_CameraLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_InitialLockOnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_bAutoLockOn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_LockedCameraPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_bMaintainPitchWhenLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraLockOnComponent_Statics::NewProp_CurrentTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLockOnComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraLockOnComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLockOnComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraLockOnComponent_Statics::ClassParams = {
	&UCameraLockOnComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraLockOnComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLockOnComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLockOnComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraLockOnComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraLockOnComponent()
{
	if (!Z_Registration_Info_UClass_UCameraLockOnComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraLockOnComponent.OuterSingleton, Z_Construct_UClass_UCameraLockOnComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraLockOnComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UCameraLockOnComponent>()
{
	return UCameraLockOnComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraLockOnComponent);
UCameraLockOnComponent::~UCameraLockOnComponent() {}
// End Class UCameraLockOnComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_CameraLockOnComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraLockOnComponent, UCameraLockOnComponent::StaticClass, TEXT("UCameraLockOnComponent"), &Z_Registration_Info_UClass_UCameraLockOnComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraLockOnComponent), 4206573070U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_CameraLockOnComponent_h_419943021(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_CameraLockOnComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_CameraLockOnComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
