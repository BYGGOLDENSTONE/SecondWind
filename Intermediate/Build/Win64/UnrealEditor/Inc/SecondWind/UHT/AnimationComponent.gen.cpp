// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/AnimationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UAnimationComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UAnimationComponent_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EAnimationPriority();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EAnimationType();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EAnimationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimationType;
static UEnum* EAnimationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EAnimationType, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EAnimationType"));
	}
	return Z_Registration_Info_UEnum_EAnimationType.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EAnimationType>()
{
	return EAnimationType_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EAnimationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttackLeft.Name", "EAnimationType::AttackLeft" },
		{ "AttackOverhead.Name", "EAnimationType::AttackOverhead" },
		{ "AttackRight.Name", "EAnimationType::AttackRight" },
		{ "BlockCenter.Name", "EAnimationType::BlockCenter" },
		{ "BlockLeft.Name", "EAnimationType::BlockLeft" },
		{ "BlockRight.Name", "EAnimationType::BlockRight" },
		{ "BlueprintType", "true" },
		{ "Dash.Name", "EAnimationType::Dash" },
		{ "DodgeBack.Name", "EAnimationType::DodgeBack" },
		{ "DodgeLeft.Name", "EAnimationType::DodgeLeft" },
		{ "DodgeRight.Name", "EAnimationType::DodgeRight" },
		{ "FinisherExecute.Name", "EAnimationType::FinisherExecute" },
		{ "FinisherReceive.Name", "EAnimationType::FinisherReceive" },
		{ "HackCast.Name", "EAnimationType::HackCast" },
		{ "HackResponse.Name", "EAnimationType::HackResponse" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
		{ "None.Name", "EAnimationType::None" },
		{ "Stagger.Name", "EAnimationType::Stagger" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimationType::None", (int64)EAnimationType::None },
		{ "EAnimationType::AttackLeft", (int64)EAnimationType::AttackLeft },
		{ "EAnimationType::AttackRight", (int64)EAnimationType::AttackRight },
		{ "EAnimationType::AttackOverhead", (int64)EAnimationType::AttackOverhead },
		{ "EAnimationType::BlockLeft", (int64)EAnimationType::BlockLeft },
		{ "EAnimationType::BlockCenter", (int64)EAnimationType::BlockCenter },
		{ "EAnimationType::BlockRight", (int64)EAnimationType::BlockRight },
		{ "EAnimationType::DodgeLeft", (int64)EAnimationType::DodgeLeft },
		{ "EAnimationType::DodgeRight", (int64)EAnimationType::DodgeRight },
		{ "EAnimationType::DodgeBack", (int64)EAnimationType::DodgeBack },
		{ "EAnimationType::Dash", (int64)EAnimationType::Dash },
		{ "EAnimationType::HackCast", (int64)EAnimationType::HackCast },
		{ "EAnimationType::HackResponse", (int64)EAnimationType::HackResponse },
		{ "EAnimationType::Stagger", (int64)EAnimationType::Stagger },
		{ "EAnimationType::FinisherExecute", (int64)EAnimationType::FinisherExecute },
		{ "EAnimationType::FinisherReceive", (int64)EAnimationType::FinisherReceive },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EAnimationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EAnimationType",
	"EAnimationType",
	Z_Construct_UEnum_SecondWind_EAnimationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EAnimationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EAnimationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EAnimationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EAnimationType()
{
	if (!Z_Registration_Info_UEnum_EAnimationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimationType.InnerSingleton, Z_Construct_UEnum_SecondWind_EAnimationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimationType.InnerSingleton;
}
// End Enum EAnimationType

// Begin Enum EAnimationPriority
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimationPriority;
static UEnum* EAnimationPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimationPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimationPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EAnimationPriority, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EAnimationPriority"));
	}
	return Z_Registration_Info_UEnum_EAnimationPriority.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EAnimationPriority>()
{
	return EAnimationPriority_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EAnimationPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Critical.Name", "EAnimationPriority::Critical" },
		{ "High.Name", "EAnimationPriority::High" },
		{ "Low.Name", "EAnimationPriority::Low" },
		{ "Medium.Name", "EAnimationPriority::Medium" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimationPriority::Low", (int64)EAnimationPriority::Low },
		{ "EAnimationPriority::Medium", (int64)EAnimationPriority::Medium },
		{ "EAnimationPriority::High", (int64)EAnimationPriority::High },
		{ "EAnimationPriority::Critical", (int64)EAnimationPriority::Critical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EAnimationPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EAnimationPriority",
	"EAnimationPriority",
	Z_Construct_UEnum_SecondWind_EAnimationPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EAnimationPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EAnimationPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EAnimationPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EAnimationPriority()
{
	if (!Z_Registration_Info_UEnum_EAnimationPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimationPriority.InnerSingleton, Z_Construct_UEnum_SecondWind_EAnimationPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimationPriority.InnerSingleton;
}
// End Enum EAnimationPriority

// Begin Class UAnimationComponent Function OnMontageBlendOut
struct Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics
{
	struct AnimationComponent_eventOnMontageBlendOut_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationComponent_eventOnMontageBlendOut_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((AnimationComponent_eventOnMontageBlendOut_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationComponent_eventOnMontageBlendOut_Parms), &Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationComponent, nullptr, "OnMontageBlendOut", nullptr, nullptr, Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::AnimationComponent_eventOnMontageBlendOut_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::AnimationComponent_eventOnMontageBlendOut_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationComponent::execOnMontageBlendOut)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageBlendOut(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UAnimationComponent Function OnMontageBlendOut

// Begin Class UAnimationComponent Function OnMontageEnded
struct Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics
{
	struct AnimationComponent_eventOnMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationComponent_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((AnimationComponent_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationComponent_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationComponent, nullptr, "OnMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::AnimationComponent_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::AnimationComponent_eventOnMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationComponent_OnMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationComponent_OnMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationComponent::execOnMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UAnimationComponent Function OnMontageEnded

// Begin Class UAnimationComponent
void UAnimationComponent::StaticRegisterNativesUAnimationComponent()
{
	UClass* Class = UAnimationComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMontageBlendOut", &UAnimationComponent::execOnMontageBlendOut },
		{ "OnMontageEnded", &UAnimationComponent::execOnMontageEnded },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationComponent);
UClass* Z_Construct_UClass_UAnimationComponent_NoRegister()
{
	return UAnimationComponent::StaticClass();
}
struct Z_Construct_UClass_UAnimationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AnimationComponent.h" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackLeftMontage_MetaData[] = {
		{ "Category", "Animations|Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation montage references (set in Blueprint)\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation montage references (set in Blueprint)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRightMontage_MetaData[] = {
		{ "Category", "Animations|Attack" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackOverheadMontage_MetaData[] = {
		{ "Category", "Animations|Attack" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockLeftMontage_MetaData[] = {
		{ "Category", "Animations|Block" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockCenterMontage_MetaData[] = {
		{ "Category", "Animations|Block" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockRightMontage_MetaData[] = {
		{ "Category", "Animations|Block" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeLeftMontage_MetaData[] = {
		{ "Category", "Animations|Dodge" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeRightMontage_MetaData[] = {
		{ "Category", "Animations|Dodge" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeBackMontage_MetaData[] = {
		{ "Category", "Animations|Dodge" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashMontage_MetaData[] = {
		{ "Category", "Animations|Special" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackCastMontage_MetaData[] = {
		{ "Category", "Animations|Special" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackResponseMontage_MetaData[] = {
		{ "Category", "Animations|Special" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaggerMontage_MetaData[] = {
		{ "Category", "Animations|Reaction" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinisherExecuteMontage_MetaData[] = {
		{ "Category", "Animations|Finisher" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinisherReceiveMontage_MetaData[] = {
		{ "Category", "Animations|Finisher" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockBlendTime_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputBufferWindow_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAnimationCanceling_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Components/AnimationComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackLeftMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackRightMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackOverheadMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockLeftMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockCenterMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockRightMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeLeftMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeRightMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeBackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HackCastMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HackResponseMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaggerMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FinisherExecuteMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FinisherReceiveMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockBlendTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputBufferWindow;
	static void NewProp_bEnableAnimationCanceling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAnimationCanceling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationComponent_OnMontageBlendOut, "OnMontageBlendOut" }, // 2985995309
		{ &Z_Construct_UFunction_UAnimationComponent_OnMontageEnded, "OnMontageEnded" }, // 345899965
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackLeftMontage = { "AttackLeftMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, AttackLeftMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackLeftMontage_MetaData), NewProp_AttackLeftMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackRightMontage = { "AttackRightMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, AttackRightMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRightMontage_MetaData), NewProp_AttackRightMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackOverheadMontage = { "AttackOverheadMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, AttackOverheadMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackOverheadMontage_MetaData), NewProp_AttackOverheadMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_BlockLeftMontage = { "BlockLeftMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, BlockLeftMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockLeftMontage_MetaData), NewProp_BlockLeftMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_BlockCenterMontage = { "BlockCenterMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, BlockCenterMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockCenterMontage_MetaData), NewProp_BlockCenterMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_BlockRightMontage = { "BlockRightMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, BlockRightMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockRightMontage_MetaData), NewProp_BlockRightMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DodgeLeftMontage = { "DodgeLeftMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, DodgeLeftMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeLeftMontage_MetaData), NewProp_DodgeLeftMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DodgeRightMontage = { "DodgeRightMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, DodgeRightMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeRightMontage_MetaData), NewProp_DodgeRightMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DodgeBackMontage = { "DodgeBackMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, DodgeBackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeBackMontage_MetaData), NewProp_DodgeBackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DashMontage = { "DashMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, DashMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashMontage_MetaData), NewProp_DashMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_HackCastMontage = { "HackCastMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, HackCastMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackCastMontage_MetaData), NewProp_HackCastMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_HackResponseMontage = { "HackResponseMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, HackResponseMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackResponseMontage_MetaData), NewProp_HackResponseMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_StaggerMontage = { "StaggerMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, StaggerMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaggerMontage_MetaData), NewProp_StaggerMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_FinisherExecuteMontage = { "FinisherExecuteMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, FinisherExecuteMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinisherExecuteMontage_MetaData), NewProp_FinisherExecuteMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_FinisherReceiveMontage = { "FinisherReceiveMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, FinisherReceiveMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinisherReceiveMontage_MetaData), NewProp_FinisherReceiveMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_BlockBlendTime = { "BlockBlendTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, BlockBlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockBlendTime_MetaData), NewProp_BlockBlendTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_InputBufferWindow = { "InputBufferWindow", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponent, InputBufferWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputBufferWindow_MetaData), NewProp_InputBufferWindow_MetaData) };
void Z_Construct_UClass_UAnimationComponent_Statics::NewProp_bEnableAnimationCanceling_SetBit(void* Obj)
{
	((UAnimationComponent*)Obj)->bEnableAnimationCanceling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationComponent_Statics::NewProp_bEnableAnimationCanceling = { "bEnableAnimationCanceling", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationComponent), &Z_Construct_UClass_UAnimationComponent_Statics::NewProp_bEnableAnimationCanceling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAnimationCanceling_MetaData), NewProp_bEnableAnimationCanceling_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackLeftMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackRightMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_AttackOverheadMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_BlockLeftMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_BlockCenterMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_BlockRightMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DodgeLeftMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DodgeRightMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DodgeBackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_DashMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_HackCastMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_HackResponseMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_StaggerMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_FinisherExecuteMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_FinisherReceiveMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_BlockBlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_InputBufferWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponent_Statics::NewProp_bEnableAnimationCanceling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationComponent_Statics::ClassParams = {
	&UAnimationComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimationComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationComponent()
{
	if (!Z_Registration_Info_UClass_UAnimationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationComponent.OuterSingleton, Z_Construct_UClass_UAnimationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UAnimationComponent>()
{
	return UAnimationComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationComponent);
UAnimationComponent::~UAnimationComponent() {}
// End Class UAnimationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimationType_StaticEnum, TEXT("EAnimationType"), &Z_Registration_Info_UEnum_EAnimationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 500354300U) },
		{ EAnimationPriority_StaticEnum, TEXT("EAnimationPriority"), &Z_Registration_Info_UEnum_EAnimationPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3930044194U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationComponent, UAnimationComponent::StaticClass, TEXT("UAnimationComponent"), &Z_Registration_Info_UClass_UAnimationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationComponent), 3900445594U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_1763091743(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
