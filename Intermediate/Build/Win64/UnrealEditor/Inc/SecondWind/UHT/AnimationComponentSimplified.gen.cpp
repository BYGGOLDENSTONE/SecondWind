// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/AnimationComponentSimplified.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationComponentSimplified() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
SECONDWIND_API UClass* Z_Construct_UClass_UAnimationComponentSimplified();
SECONDWIND_API UClass* Z_Construct_UClass_UAnimationComponentSimplified_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EAnimationPriority();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EAnimationType();
SECONDWIND_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationVariation();
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
		{ "AttackFront.Name", "EAnimationType::AttackFront" },
		{ "AttackLeft.Name", "EAnimationType::AttackLeft" },
		{ "AttackOverhead.Name", "EAnimationType::AttackOverhead" },
		{ "AttackRight.Name", "EAnimationType::AttackRight" },
		{ "BlockCenter.Name", "EAnimationType::BlockCenter" },
		{ "BlockLeft.Name", "EAnimationType::BlockLeft" },
		{ "BlockRight.Name", "EAnimationType::BlockRight" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Legacy animation types for backward compatibility\n" },
#endif
		{ "DodgeBack.Name", "EAnimationType::DodgeBack" },
		{ "DodgeForward.Name", "EAnimationType::DodgeForward" },
		{ "DodgeLeft.Name", "EAnimationType::DodgeLeft" },
		{ "DodgeRight.Name", "EAnimationType::DodgeRight" },
		{ "FinisherExecute.Name", "EAnimationType::FinisherExecute" },
		{ "FinisherReceive.Name", "EAnimationType::FinisherReceive" },
		{ "HackCast.Name", "EAnimationType::HackCast" },
		{ "HackResponse.Name", "EAnimationType::HackResponse" },
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
		{ "None.Name", "EAnimationType::None" },
		{ "Stagger.Name", "EAnimationType::Stagger" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Legacy animation types for backward compatibility" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimationType::None", (int64)EAnimationType::None },
		{ "EAnimationType::AttackLeft", (int64)EAnimationType::AttackLeft },
		{ "EAnimationType::AttackRight", (int64)EAnimationType::AttackRight },
		{ "EAnimationType::AttackOverhead", (int64)EAnimationType::AttackOverhead },
		{ "EAnimationType::AttackFront", (int64)EAnimationType::AttackFront },
		{ "EAnimationType::BlockLeft", (int64)EAnimationType::BlockLeft },
		{ "EAnimationType::BlockCenter", (int64)EAnimationType::BlockCenter },
		{ "EAnimationType::BlockRight", (int64)EAnimationType::BlockRight },
		{ "EAnimationType::DodgeLeft", (int64)EAnimationType::DodgeLeft },
		{ "EAnimationType::DodgeRight", (int64)EAnimationType::DodgeRight },
		{ "EAnimationType::DodgeBack", (int64)EAnimationType::DodgeBack },
		{ "EAnimationType::DodgeForward", (int64)EAnimationType::DodgeForward },
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
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
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

// Begin ScriptStruct FAnimationVariation
static_assert(std::is_polymorphic<FAnimationVariation>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAnimationVariation cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationVariation;
class UScriptStruct* FAnimationVariation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationVariation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationVariation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationVariation, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("AnimationVariation"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationVariation.OuterSingleton;
}
template<> SECONDWIND_API UScriptStruct* StaticStruct<FAnimationVariation>()
{
	return FAnimationVariation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationVariation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Simplified animation component using montage sections\n * Handles 299 animations with just 5-10 montages\n */// Animation variation data for DataTable\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simplified animation component using montage sections\nHandles 299 animations with just 5-10 montages\n // Animation variation data for DataTable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageSection_MetaData[] = {
		{ "Category", "AnimationVariation" },
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionWeight_MetaData[] = {
		{ "Category", "AnimationVariation" },
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "AnimationVariation" },
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresTarget_MetaData[] = {
		{ "Category", "AnimationVariation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \"Counter\", \"Finisher\", \"Heavy\", etc.\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\"Counter\", \"Finisher\", \"Heavy\", etc." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MontageSection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectionWeight;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
	static void NewProp_bRequiresTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationVariation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewProp_MontageSection = { "MontageSection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationVariation, MontageSection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageSection_MetaData), NewProp_MontageSection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewProp_SelectionWeight = { "SelectionWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationVariation, SelectionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionWeight_MetaData), NewProp_SelectionWeight_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationVariation, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
void Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewProp_bRequiresTarget_SetBit(void* Obj)
{
	((FAnimationVariation*)Obj)->bRequiresTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewProp_bRequiresTarget = { "bRequiresTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimationVariation), &Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewProp_bRequiresTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresTarget_MetaData), NewProp_bRequiresTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationVariation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewProp_MontageSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewProp_SelectionWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewProp_bRequiresTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationVariation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationVariation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"AnimationVariation",
	Z_Construct_UScriptStruct_FAnimationVariation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationVariation_Statics::PropPointers),
	sizeof(FAnimationVariation),
	alignof(FAnimationVariation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationVariation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationVariation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationVariation()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationVariation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationVariation.InnerSingleton, Z_Construct_UScriptStruct_FAnimationVariation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationVariation.InnerSingleton;
}
// End ScriptStruct FAnimationVariation

// Begin Class UAnimationComponentSimplified Function OnMontageEnded
struct Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics
{
	struct AnimationComponentSimplified_eventOnMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Montage callbacks\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Montage callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationComponentSimplified_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((AnimationComponentSimplified_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationComponentSimplified_eventOnMontageEnded_Parms), &Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationComponentSimplified, nullptr, "OnMontageEnded", nullptr, nullptr, Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::AnimationComponentSimplified_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::AnimationComponentSimplified_eventOnMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationComponentSimplified::execOnMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UAnimationComponentSimplified Function OnMontageEnded

// Begin Class UAnimationComponentSimplified Function OnNotifyBeginReceived
struct Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics
{
	struct AnimationComponentSimplified_eventOnNotifyBeginReceived_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload BranchingPointPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationComponentSimplified_eventOnNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::NewProp_BranchingPointPayload = { "BranchingPointPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationComponentSimplified_eventOnNotifyBeginReceived_Parms, BranchingPointPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPointPayload_MetaData), NewProp_BranchingPointPayload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::NewProp_BranchingPointPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationComponentSimplified, nullptr, "OnNotifyBeginReceived", nullptr, nullptr, Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::AnimationComponentSimplified_eventOnNotifyBeginReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::AnimationComponentSimplified_eventOnNotifyBeginReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimationComponentSimplified::execOnNotifyBeginReceived)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNotifyBeginReceived(Z_Param_NotifyName,Z_Param_Out_BranchingPointPayload);
	P_NATIVE_END;
}
// End Class UAnimationComponentSimplified Function OnNotifyBeginReceived

// Begin Class UAnimationComponentSimplified
void UAnimationComponentSimplified::StaticRegisterNativesUAnimationComponentSimplified()
{
	UClass* Class = UAnimationComponentSimplified::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMontageEnded", &UAnimationComponentSimplified::execOnMontageEnded },
		{ "OnNotifyBeginReceived", &UAnimationComponentSimplified::execOnNotifyBeginReceived },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationComponentSimplified);
UClass* Z_Construct_UClass_UAnimationComponentSimplified_NoRegister()
{
	return UAnimationComponentSimplified::StaticClass();
}
struct Z_Construct_UClass_UAnimationComponentSimplified_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AnimationComponentSimplified.h" },
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatMontage_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Master montages (each contains many sections)\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Master montages (each contains many sections)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeMontage_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Contains all attacks, counters, combos\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all attacks, counters, combos" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactionMontage_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Contains all dodges\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains all dodges" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinisherMontage_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hit reactions, staggers, deaths\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hit reactions, staggers, deaths" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockMontage_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All finisher pairs\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All finisher pairs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationVariationsTable_MetaData[] = {
		{ "Category", "Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Data table for variations\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Data table for variations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackSections_MetaData[] = {
		{ "Category", "Sections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Section name mappings (set in Blueprint for flexibility)\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Section name mappings (set in Blueprint for flexibility)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterSections_MetaData[] = {
		{ "Category", "Sections" },
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinisherExecuteSections_MetaData[] = {
		{ "Category", "Sections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Counter_1 through Counter_15\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Counter_1 through Counter_15" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinisherVictimSections_MetaData[] = {
		{ "Category", "Sections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Finisher_1 through Finisher_15\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finisher_1 through Finisher_15" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboSections_MetaData[] = {
		{ "Category", "Sections" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Victim_1 through Victim_15\n" },
#endif
		{ "ModuleRelativePath", "Components/AnimationComponentSimplified.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Victim_1 through Victim_15" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReactionMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FinisherMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationVariationsTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackSections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CounterSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CounterSections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FinisherExecuteSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FinisherExecuteSections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FinisherVictimSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FinisherVictimSections;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComboSections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComboSections;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationComponentSimplified_OnMontageEnded, "OnMontageEnded" }, // 1297816963
		{ &Z_Construct_UFunction_UAnimationComponentSimplified_OnNotifyBeginReceived, "OnNotifyBeginReceived" }, // 3433299956
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationComponentSimplified>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_CombatMontage = { "CombatMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, CombatMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatMontage_MetaData), NewProp_CombatMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_DodgeMontage = { "DodgeMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, DodgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeMontage_MetaData), NewProp_DodgeMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_ReactionMontage = { "ReactionMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, ReactionMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactionMontage_MetaData), NewProp_ReactionMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_FinisherMontage = { "FinisherMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, FinisherMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinisherMontage_MetaData), NewProp_FinisherMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_BlockMontage = { "BlockMontage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, BlockMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockMontage_MetaData), NewProp_BlockMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_AnimationVariationsTable = { "AnimationVariationsTable", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, AnimationVariationsTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationVariationsTable_MetaData), NewProp_AnimationVariationsTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_AttackSections_Inner = { "AttackSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_AttackSections = { "AttackSections", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, AttackSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackSections_MetaData), NewProp_AttackSections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_CounterSections_Inner = { "CounterSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_CounterSections = { "CounterSections", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, CounterSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterSections_MetaData), NewProp_CounterSections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_FinisherExecuteSections_Inner = { "FinisherExecuteSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_FinisherExecuteSections = { "FinisherExecuteSections", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, FinisherExecuteSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinisherExecuteSections_MetaData), NewProp_FinisherExecuteSections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_FinisherVictimSections_Inner = { "FinisherVictimSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_FinisherVictimSections = { "FinisherVictimSections", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, FinisherVictimSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinisherVictimSections_MetaData), NewProp_FinisherVictimSections_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_ComboSections_Inner = { "ComboSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_ComboSections = { "ComboSections", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationComponentSimplified, ComboSections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboSections_MetaData), NewProp_ComboSections_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationComponentSimplified_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_CombatMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_DodgeMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_ReactionMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_FinisherMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_BlockMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_AnimationVariationsTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_AttackSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_AttackSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_CounterSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_CounterSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_FinisherExecuteSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_FinisherExecuteSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_FinisherVictimSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_FinisherVictimSections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_ComboSections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationComponentSimplified_Statics::NewProp_ComboSections,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponentSimplified_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationComponentSimplified_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponentSimplified_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationComponentSimplified_Statics::ClassParams = {
	&UAnimationComponentSimplified::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimationComponentSimplified_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponentSimplified_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationComponentSimplified_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationComponentSimplified_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationComponentSimplified()
{
	if (!Z_Registration_Info_UClass_UAnimationComponentSimplified.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationComponentSimplified.OuterSingleton, Z_Construct_UClass_UAnimationComponentSimplified_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationComponentSimplified.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UAnimationComponentSimplified>()
{
	return UAnimationComponentSimplified::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationComponentSimplified);
UAnimationComponentSimplified::~UAnimationComponentSimplified() {}
// End Class UAnimationComponentSimplified

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimationType_StaticEnum, TEXT("EAnimationType"), &Z_Registration_Info_UEnum_EAnimationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3946783937U) },
		{ EAnimationPriority_StaticEnum, TEXT("EAnimationPriority"), &Z_Registration_Info_UEnum_EAnimationPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 28340324U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimationVariation::StaticStruct, Z_Construct_UScriptStruct_FAnimationVariation_Statics::NewStructOps, TEXT("AnimationVariation"), &Z_Registration_Info_UScriptStruct_AnimationVariation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationVariation), 1337873564U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationComponentSimplified, UAnimationComponentSimplified::StaticClass, TEXT("UAnimationComponentSimplified"), &Z_Registration_Info_UClass_UAnimationComponentSimplified, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationComponentSimplified), 172185763U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_348163354(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_AnimationComponentSimplified_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
