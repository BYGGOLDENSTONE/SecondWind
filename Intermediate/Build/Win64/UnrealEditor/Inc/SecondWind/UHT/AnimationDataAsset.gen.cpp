// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Data/AnimationDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationDataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
SECONDWIND_API UClass* Z_Construct_UClass_UAnimationDataAsset();
SECONDWIND_API UClass* Z_Construct_UClass_UAnimationDataAsset_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EAnimationCategory();
SECONDWIND_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationEntry();
SECONDWIND_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationSet();
SECONDWIND_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitions();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EAnimationCategory
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimationCategory;
static UEnum* EAnimationCategory_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAnimationCategory.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAnimationCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EAnimationCategory, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EAnimationCategory"));
	}
	return Z_Registration_Info_UEnum_EAnimationCategory.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EAnimationCategory>()
{
	return EAnimationCategory_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EAnimationCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Combo.Comment", "// 15 finisher pairs\n" },
		{ "Combo.Name", "EAnimationCategory::Combo" },
		{ "Combo.ToolTip", "15 finisher pairs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation categories for organization\n" },
#endif
		{ "Contextual.Comment", "// Taunts and emotes\n" },
		{ "Contextual.Name", "EAnimationCategory::Contextual" },
		{ "Contextual.ToolTip", "Taunts and emotes" },
		{ "Core.Name", "EAnimationCategory::Core" },
		{ "Counter.Comment", "// 17 essential animations\n" },
		{ "Counter.Name", "EAnimationCategory::Counter" },
		{ "Counter.ToolTip", "17 essential animations" },
		{ "Crouch.Comment", "// Directional hit reactions\n" },
		{ "Crouch.Name", "EAnimationCategory::Crouch" },
		{ "Crouch.ToolTip", "Directional hit reactions" },
		{ "Finisher.Comment", "// 15 counter animations\n" },
		{ "Finisher.Name", "EAnimationCategory::Finisher" },
		{ "Finisher.ToolTip", "15 counter animations" },
		{ "HitReaction.Comment", "// Multi-hit combos\n" },
		{ "HitReaction.Name", "EAnimationCategory::HitReaction" },
		{ "HitReaction.ToolTip", "Multi-hit combos" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
		{ "Special.Comment", "// Crouch combat system\n" },
		{ "Special.Name", "EAnimationCategory::Special" },
		{ "Special.ToolTip", "Crouch combat system" },
		{ "Taunt.Comment", "// Movement transitions\n" },
		{ "Taunt.Name", "EAnimationCategory::Taunt" },
		{ "Taunt.ToolTip", "Movement transitions" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation categories for organization" },
#endif
		{ "Transition.Comment", "// Special moves\n" },
		{ "Transition.Name", "EAnimationCategory::Transition" },
		{ "Transition.ToolTip", "Special moves" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAnimationCategory::Core", (int64)EAnimationCategory::Core },
		{ "EAnimationCategory::Counter", (int64)EAnimationCategory::Counter },
		{ "EAnimationCategory::Finisher", (int64)EAnimationCategory::Finisher },
		{ "EAnimationCategory::Combo", (int64)EAnimationCategory::Combo },
		{ "EAnimationCategory::HitReaction", (int64)EAnimationCategory::HitReaction },
		{ "EAnimationCategory::Crouch", (int64)EAnimationCategory::Crouch },
		{ "EAnimationCategory::Special", (int64)EAnimationCategory::Special },
		{ "EAnimationCategory::Transition", (int64)EAnimationCategory::Transition },
		{ "EAnimationCategory::Taunt", (int64)EAnimationCategory::Taunt },
		{ "EAnimationCategory::Contextual", (int64)EAnimationCategory::Contextual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EAnimationCategory_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EAnimationCategory",
	"EAnimationCategory",
	Z_Construct_UEnum_SecondWind_EAnimationCategory_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EAnimationCategory_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EAnimationCategory_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EAnimationCategory_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EAnimationCategory()
{
	if (!Z_Registration_Info_UEnum_EAnimationCategory.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimationCategory.InnerSingleton, Z_Construct_UEnum_SecondWind_EAnimationCategory_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAnimationCategory.InnerSingleton;
}
// End Enum EAnimationCategory

// Begin ScriptStruct FAnimationEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationEntry;
class UScriptStruct* FAnimationEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationEntry, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("AnimationEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationEntry.OuterSingleton;
}
template<> SECONDWIND_API UScriptStruct* StaticStruct<FAnimationEntry>()
{
	return FAnimationEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Detailed animation metadata\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detailed animation metadata" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationID_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLooping_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresRootMotion_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageWindow_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combat-specific metadata\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat-specific metadata" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageWindowStart_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvincibilityWindow_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvincibilityStart_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboFollowUps_MetaData[] = {
		{ "Category", "Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Combo data\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combo data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboWindowStart_MetaData[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboWindowDuration_MetaData[] = {
		{ "Category", "Combo" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Category;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_bIsLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
	static void NewProp_bRequiresRootMotion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresRootMotion;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageWindowStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvincibilityWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvincibilityStart;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComboFollowUps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ComboFollowUps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComboWindowStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComboWindowDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_AnimationID = { "AnimationID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, AnimationID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationID_MetaData), NewProp_AnimationID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimSequence_MetaData), NewProp_AnimSequence_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimMontage_MetaData), NewProp_AnimMontage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, Category), Z_Construct_UEnum_SecondWind_EAnimationCategory, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) }; // 686108435
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
void Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_bIsLooping_SetBit(void* Obj)
{
	((FAnimationEntry*)Obj)->bIsLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimationEntry), &Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLooping_MetaData), NewProp_bIsLooping_MetaData) };
void Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_bRequiresRootMotion_SetBit(void* Obj)
{
	((FAnimationEntry*)Obj)->bRequiresRootMotion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_bRequiresRootMotion = { "bRequiresRootMotion", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAnimationEntry), &Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_bRequiresRootMotion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequiresRootMotion_MetaData), NewProp_bRequiresRootMotion_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_DamageWindow = { "DamageWindow", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, DamageWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageWindow_MetaData), NewProp_DamageWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_DamageWindowStart = { "DamageWindowStart", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, DamageWindowStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageWindowStart_MetaData), NewProp_DamageWindowStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_InvincibilityWindow = { "InvincibilityWindow", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, InvincibilityWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvincibilityWindow_MetaData), NewProp_InvincibilityWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_InvincibilityStart = { "InvincibilityStart", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, InvincibilityStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvincibilityStart_MetaData), NewProp_InvincibilityStart_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_ComboFollowUps_Inner = { "ComboFollowUps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_ComboFollowUps = { "ComboFollowUps", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, ComboFollowUps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboFollowUps_MetaData), NewProp_ComboFollowUps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_ComboWindowStart = { "ComboWindowStart", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, ComboWindowStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboWindowStart_MetaData), NewProp_ComboWindowStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_ComboWindowDuration = { "ComboWindowDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationEntry, ComboWindowDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboWindowDuration_MetaData), NewProp_ComboWindowDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_AnimationID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_AnimSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_AnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_Category_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_bIsLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_bRequiresRootMotion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_DamageWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_DamageWindowStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_InvincibilityWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_InvincibilityStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_ComboFollowUps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_ComboFollowUps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_ComboWindowStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewProp_ComboWindowDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	&NewStructOps,
	"AnimationEntry",
	Z_Construct_UScriptStruct_FAnimationEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationEntry_Statics::PropPointers),
	sizeof(FAnimationEntry),
	alignof(FAnimationEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationEntry()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationEntry.InnerSingleton, Z_Construct_UScriptStruct_FAnimationEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationEntry.InnerSingleton;
}
// End ScriptStruct FAnimationEntry

// Begin ScriptStruct FAnimationSet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationSet;
class UScriptStruct* FAnimationSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationSet, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("AnimationSet"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationSet.OuterSingleton;
}
template<> SECONDWIND_API UScriptStruct* StaticStruct<FAnimationSet>()
{
	return FAnimationSet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation set for a character/enemy type\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation set for a character/enemy type" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackFront_MetaData[] = {
		{ "Category", "Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Core combat animations\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core combat animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackLeft_MetaData[] = {
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRight_MetaData[] = {
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackVariations_MetaData[] = {
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeForward_MetaData[] = {
		{ "Category", "Dodge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dodge animations\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dodge animations" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeBack_MetaData[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeLeft_MetaData[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeRight_MetaData[] = {
		{ "Category", "Dodge" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackAttack_MetaData[] = {
		{ "Category", "Special" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Special abilities\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackResponse_MetaData[] = {
		{ "Category", "Special" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterAttacks_MetaData[] = {
		{ "Category", "Counter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Counter attacks (randomly selected)\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Counter attacks (randomly selected)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinisherExecute_MetaData[] = {
		{ "Category", "Finisher" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Finisher pairs\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finisher pairs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinisherReceive_MetaData[] = {
		{ "Category", "Finisher" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackFront;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttackVariations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AttackVariations;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DodgeForward;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DodgeBack;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DodgeLeft;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DodgeRight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HackAttack;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HackResponse;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CounterAttacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CounterAttacks;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FinisherExecute_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FinisherExecute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FinisherReceive_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FinisherReceive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationSet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_AttackFront = { "AttackFront", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, AttackFront), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackFront_MetaData), NewProp_AttackFront_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_AttackLeft = { "AttackLeft", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, AttackLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackLeft_MetaData), NewProp_AttackLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_AttackRight = { "AttackRight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, AttackRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRight_MetaData), NewProp_AttackRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_AttackVariations_Inner = { "AttackVariations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_AttackVariations = { "AttackVariations", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, AttackVariations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackVariations_MetaData), NewProp_AttackVariations_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_DodgeForward = { "DodgeForward", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, DodgeForward), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeForward_MetaData), NewProp_DodgeForward_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_DodgeBack = { "DodgeBack", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, DodgeBack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeBack_MetaData), NewProp_DodgeBack_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_DodgeLeft = { "DodgeLeft", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, DodgeLeft), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeLeft_MetaData), NewProp_DodgeLeft_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_DodgeRight = { "DodgeRight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, DodgeRight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeRight_MetaData), NewProp_DodgeRight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_HackAttack = { "HackAttack", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, HackAttack), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackAttack_MetaData), NewProp_HackAttack_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_HackResponse = { "HackResponse", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, HackResponse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackResponse_MetaData), NewProp_HackResponse_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_CounterAttacks_Inner = { "CounterAttacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_CounterAttacks = { "CounterAttacks", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, CounterAttacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterAttacks_MetaData), NewProp_CounterAttacks_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_FinisherExecute_Inner = { "FinisherExecute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_FinisherExecute = { "FinisherExecute", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, FinisherExecute), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinisherExecute_MetaData), NewProp_FinisherExecute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_FinisherReceive_Inner = { "FinisherReceive", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_FinisherReceive = { "FinisherReceive", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationSet, FinisherReceive), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinisherReceive_MetaData), NewProp_FinisherReceive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_AttackFront,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_AttackLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_AttackRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_AttackVariations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_AttackVariations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_DodgeForward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_DodgeBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_DodgeLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_DodgeRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_HackAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_HackResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_CounterAttacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_CounterAttacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_FinisherExecute_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_FinisherExecute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_FinisherReceive_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationSet_Statics::NewProp_FinisherReceive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationSet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	&NewStructOps,
	"AnimationSet",
	Z_Construct_UScriptStruct_FAnimationSet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSet_Statics::PropPointers),
	sizeof(FAnimationSet),
	alignof(FAnimationSet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationSet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationSet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationSet()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationSet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationSet.InnerSingleton, Z_Construct_UScriptStruct_FAnimationSet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationSet.InnerSingleton;
}
// End ScriptStruct FAnimationSet

// Begin ScriptStruct FAnimationTransitions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationTransitions;
class UScriptStruct* FAnimationTransitions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationTransitions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationTransitions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationTransitions, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("AnimationTransitions"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationTransitions.OuterSingleton;
}
template<> SECONDWIND_API UScriptStruct* StaticStruct<FAnimationTransitions>()
{
	return FAnimationTransitions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAnimationTransitions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transition rules wrapper\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transition rules wrapper" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTransitions_MetaData[] = {
		{ "Category", "AnimationTransitions" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AllowedTransitions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedTransitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationTransitions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationTransitions_Statics::NewProp_AllowedTransitions_Inner = { "AllowedTransitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationTransitions_Statics::NewProp_AllowedTransitions = { "AllowedTransitions", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationTransitions, AllowedTransitions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedTransitions_MetaData), NewProp_AllowedTransitions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationTransitions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitions_Statics::NewProp_AllowedTransitions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTransitions_Statics::NewProp_AllowedTransitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationTransitions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	&NewStructOps,
	"AnimationTransitions",
	Z_Construct_UScriptStruct_FAnimationTransitions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitions_Statics::PropPointers),
	sizeof(FAnimationTransitions),
	alignof(FAnimationTransitions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTransitions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationTransitions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimationTransitions()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationTransitions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationTransitions.InnerSingleton, Z_Construct_UScriptStruct_FAnimationTransitions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimationTransitions.InnerSingleton;
}
// End ScriptStruct FAnimationTransitions

// Begin Class UAnimationDataAsset
void UAnimationDataAsset::StaticRegisterNativesUAnimationDataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationDataAsset);
UClass* Z_Construct_UClass_UAnimationDataAsset_NoRegister()
{
	return UAnimationDataAsset::StaticClass();
}
struct Z_Construct_UClass_UAnimationDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Central animation database for the game\n */" },
#endif
		{ "IncludePath", "Data/AnimationDataAsset.h" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Central animation database for the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationDatabase_MetaData[] = {
		{ "Category", "Database" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Master animation database\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Master animation database" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerAnimationSet_MetaData[] = {
		{ "Category", "Sets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Character-specific animation sets\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character-specific animation sets" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyAnimationSets_MetaData[] = {
		{ "Category", "Sets" },
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedTransitions_MetaData[] = {
		{ "Category", "Transitions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Animation transition rules\n" },
#endif
		{ "ModuleRelativePath", "Data/AnimationDataAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Animation transition rules" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationDatabase_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationDatabase_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AnimationDatabase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerAnimationSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnemyAnimationSets_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EnemyAnimationSets_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EnemyAnimationSets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedTransitions_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AllowedTransitions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllowedTransitions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AnimationDatabase_ValueProp = { "AnimationDatabase", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAnimationEntry, METADATA_PARAMS(0, nullptr) }; // 1421000878
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AnimationDatabase_Key_KeyProp = { "AnimationDatabase_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AnimationDatabase = { "AnimationDatabase", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataAsset, AnimationDatabase), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationDatabase_MetaData), NewProp_AnimationDatabase_MetaData) }; // 1421000878
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_PlayerAnimationSet = { "PlayerAnimationSet", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataAsset, PlayerAnimationSet), Z_Construct_UScriptStruct_FAnimationSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerAnimationSet_MetaData), NewProp_PlayerAnimationSet_MetaData) }; // 1351221468
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_EnemyAnimationSets_ValueProp = { "EnemyAnimationSets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAnimationSet, METADATA_PARAMS(0, nullptr) }; // 1351221468
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_EnemyAnimationSets_Key_KeyProp = { "EnemyAnimationSets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_EnemyAnimationSets = { "EnemyAnimationSets", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataAsset, EnemyAnimationSets), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyAnimationSets_MetaData), NewProp_EnemyAnimationSets_MetaData) }; // 1351221468
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AllowedTransitions_ValueProp = { "AllowedTransitions", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FAnimationTransitions, METADATA_PARAMS(0, nullptr) }; // 3554135477
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AllowedTransitions_Key_KeyProp = { "AllowedTransitions_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AllowedTransitions = { "AllowedTransitions", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataAsset, AllowedTransitions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedTransitions_MetaData), NewProp_AllowedTransitions_MetaData) }; // 3554135477
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AnimationDatabase_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AnimationDatabase_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AnimationDatabase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_PlayerAnimationSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_EnemyAnimationSets_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_EnemyAnimationSets_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_EnemyAnimationSets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AllowedTransitions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AllowedTransitions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataAsset_Statics::NewProp_AllowedTransitions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimationDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationDataAsset_Statics::ClassParams = {
	&UAnimationDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimationDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationDataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationDataAsset()
{
	if (!Z_Registration_Info_UClass_UAnimationDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationDataAsset.OuterSingleton, Z_Construct_UClass_UAnimationDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationDataAsset.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UAnimationDataAsset>()
{
	return UAnimationDataAsset::StaticClass();
}
UAnimationDataAsset::UAnimationDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationDataAsset);
UAnimationDataAsset::~UAnimationDataAsset() {}
// End Class UAnimationDataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAnimationCategory_StaticEnum, TEXT("EAnimationCategory"), &Z_Registration_Info_UEnum_EAnimationCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 686108435U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAnimationEntry::StaticStruct, Z_Construct_UScriptStruct_FAnimationEntry_Statics::NewStructOps, TEXT("AnimationEntry"), &Z_Registration_Info_UScriptStruct_AnimationEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationEntry), 1421000878U) },
		{ FAnimationSet::StaticStruct, Z_Construct_UScriptStruct_FAnimationSet_Statics::NewStructOps, TEXT("AnimationSet"), &Z_Registration_Info_UScriptStruct_AnimationSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationSet), 1351221468U) },
		{ FAnimationTransitions::StaticStruct, Z_Construct_UScriptStruct_FAnimationTransitions_Statics::NewStructOps, TEXT("AnimationTransitions"), &Z_Registration_Info_UScriptStruct_AnimationTransitions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationTransitions), 3554135477U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationDataAsset, UAnimationDataAsset::StaticClass, TEXT("UAnimationDataAsset"), &Z_Registration_Info_UClass_UAnimationDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationDataAsset), 3974595005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_1140040757(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Data_AnimationDataAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
