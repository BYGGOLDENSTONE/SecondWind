// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/PhysicsHitReactionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsHitReactionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UPhysicsHitReactionComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UPhysicsHitReactionComponent_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EHitReactionType();
SECONDWIND_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsProfile();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EHitReactionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitReactionType;
static UEnum* EHitReactionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHitReactionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHitReactionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EHitReactionType, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EHitReactionType"));
	}
	return Z_Registration_Info_UEnum_EHitReactionType.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EHitReactionType>()
{
	return EHitReactionType_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EHitReactionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Blocked.Name", "EHitReactionType::Blocked" },
		{ "BlueprintType", "true" },
		{ "Hack.Name", "EHitReactionType::Hack" },
		{ "Heavy.Name", "EHitReactionType::Heavy" },
		{ "Knockback.Name", "EHitReactionType::Knockback" },
		{ "Light.Name", "EHitReactionType::Light" },
		{ "Medium.Name", "EHitReactionType::Medium" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
		{ "WeakSide.Name", "EHitReactionType::WeakSide" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHitReactionType::Light", (int64)EHitReactionType::Light },
		{ "EHitReactionType::Medium", (int64)EHitReactionType::Medium },
		{ "EHitReactionType::Heavy", (int64)EHitReactionType::Heavy },
		{ "EHitReactionType::Blocked", (int64)EHitReactionType::Blocked },
		{ "EHitReactionType::WeakSide", (int64)EHitReactionType::WeakSide },
		{ "EHitReactionType::Hack", (int64)EHitReactionType::Hack },
		{ "EHitReactionType::Knockback", (int64)EHitReactionType::Knockback },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EHitReactionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EHitReactionType",
	"EHitReactionType",
	Z_Construct_UEnum_SecondWind_EHitReactionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EHitReactionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EHitReactionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EHitReactionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EHitReactionType()
{
	if (!Z_Registration_Info_UEnum_EHitReactionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitReactionType.InnerSingleton, Z_Construct_UEnum_SecondWind_EHitReactionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHitReactionType.InnerSingleton;
}
// End Enum EHitReactionType

// Begin ScriptStruct FPhysicsProfile
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsProfile;
class UScriptStruct* FPhysicsProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsProfile, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("PhysicsProfile"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsProfile.OuterSingleton;
}
template<> SECONDWIND_API UScriptStruct* StaticStruct<FPhysicsProfile>()
{
	return FPhysicsProfile::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPhysicsProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "PhysicsProfile" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StrengthMultiplier_MetaData[] = {
		{ "Category", "PhysicsProfile" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeSelf_MetaData[] = {
		{ "Category", "PhysicsProfile" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeBelow_MetaData[] = {
		{ "Category", "PhysicsProfile" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StrengthMultiplier;
	static void NewProp_bIncludeSelf_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeSelf;
	static void NewProp_bIncludeBelow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBelow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsProfile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsProfile, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_StrengthMultiplier = { "StrengthMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPhysicsProfile, StrengthMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StrengthMultiplier_MetaData), NewProp_StrengthMultiplier_MetaData) };
void Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_bIncludeSelf_SetBit(void* Obj)
{
	((FPhysicsProfile*)Obj)->bIncludeSelf = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_bIncludeSelf = { "bIncludeSelf", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPhysicsProfile), &Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_bIncludeSelf_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeSelf_MetaData), NewProp_bIncludeSelf_MetaData) };
void Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_bIncludeBelow_SetBit(void* Obj)
{
	((FPhysicsProfile*)Obj)->bIncludeBelow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_bIncludeBelow = { "bIncludeBelow", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPhysicsProfile), &Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_bIncludeBelow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeBelow_MetaData), NewProp_bIncludeBelow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_StrengthMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_bIncludeSelf,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewProp_bIncludeBelow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsProfile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsProfile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	&NewStructOps,
	"PhysicsProfile",
	Z_Construct_UScriptStruct_FPhysicsProfile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsProfile_Statics::PropPointers),
	sizeof(FPhysicsProfile),
	alignof(FPhysicsProfile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsProfile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPhysicsProfile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPhysicsProfile()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsProfile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsProfile.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsProfile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PhysicsProfile.InnerSingleton;
}
// End ScriptStruct FPhysicsProfile

// Begin Class UPhysicsHitReactionComponent
void UPhysicsHitReactionComponent::StaticRegisterNativesUPhysicsHitReactionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsHitReactionComponent);
UClass* Z_Construct_UClass_UPhysicsHitReactionComponent_NoRegister()
{
	return UPhysicsHitReactionComponent::StaticClass();
}
struct Z_Construct_UClass_UPhysicsHitReactionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/PhysicsHitReactionComponent.h" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightHitImpulse_MetaData[] = {
		{ "Category", "Physics|Impulse" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Impulse strengths for different hit types (much lower for controlled reactions)\n" },
#endif
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Impulse strengths for different hit types (much lower for controlled reactions)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediumHitImpulse_MetaData[] = {
		{ "Category", "Physics|Impulse" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeavyHitImpulse_MetaData[] = {
		{ "Category", "Physics|Impulse" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockedHitImpulse_MetaData[] = {
		{ "Category", "Physics|Impulse" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakSideImpulse_MetaData[] = {
		{ "Category", "Physics|Impulse" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackHeadImpulse_MetaData[] = {
		{ "Category", "Physics|Impulse" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnockbackImpulse_MetaData[] = {
		{ "Category", "Physics|Impulse" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsTakeoverTime_MetaData[] = {
		{ "Category", "Physics|Blending" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blend timings\n" },
#endif
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blend timings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendBackTime_MetaData[] = {
		{ "Category", "Physics|Blending" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPhysicsTime_MetaData[] = {
		{ "Category", "Physics|Blending" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsProfiles_MetaData[] = {
		{ "Category", "Physics|Bones" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bone profiles for physics\n" },
#endif
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bone profiles for physics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullPhysicsDistance_MetaData[] = {
		{ "Category", "Physics|Performance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// LOD settings\n" },
#endif
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LOD settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimplifiedPhysicsDistance_MetaData[] = {
		{ "Category", "Physics|Performance" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousBones_MetaData[] = {
		{ "Category", "Physics|Performance" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBoneName_MetaData[] = {
		{ "Category", "Physics|Skeleton" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skeleton bone names (configurable for different skeletons)\n" },
#endif
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeleton bone names (configurable for different skeletons)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHitBoneName_MetaData[] = {
		{ "Category", "Physics|Skeleton" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadBoneName_MetaData[] = {
		{ "Category", "Physics|Skeleton" },
		{ "ModuleRelativePath", "Components/PhysicsHitReactionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightHitImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MediumHitImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeavyHitImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockedHitImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeakSideImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HackHeadImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_KnockbackImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PhysicsTakeoverTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendBackTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPhysicsTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsProfiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicsProfiles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FullPhysicsDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplifiedPhysicsDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSimultaneousBones;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PelvisBoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultHitBoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeadBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsHitReactionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_LightHitImpulse = { "LightHitImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, LightHitImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightHitImpulse_MetaData), NewProp_LightHitImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_MediumHitImpulse = { "MediumHitImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, MediumHitImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediumHitImpulse_MetaData), NewProp_MediumHitImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_HeavyHitImpulse = { "HeavyHitImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, HeavyHitImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeavyHitImpulse_MetaData), NewProp_HeavyHitImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_BlockedHitImpulse = { "BlockedHitImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, BlockedHitImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockedHitImpulse_MetaData), NewProp_BlockedHitImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_WeakSideImpulse = { "WeakSideImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, WeakSideImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakSideImpulse_MetaData), NewProp_WeakSideImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_HackHeadImpulse = { "HackHeadImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, HackHeadImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackHeadImpulse_MetaData), NewProp_HackHeadImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_KnockbackImpulse = { "KnockbackImpulse", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, KnockbackImpulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnockbackImpulse_MetaData), NewProp_KnockbackImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_PhysicsTakeoverTime = { "PhysicsTakeoverTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, PhysicsTakeoverTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsTakeoverTime_MetaData), NewProp_PhysicsTakeoverTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_BlendBackTime = { "BlendBackTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, BlendBackTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendBackTime_MetaData), NewProp_BlendBackTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_MaxPhysicsTime = { "MaxPhysicsTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, MaxPhysicsTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPhysicsTime_MetaData), NewProp_MaxPhysicsTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_PhysicsProfiles_Inner = { "PhysicsProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPhysicsProfile, METADATA_PARAMS(0, nullptr) }; // 3501688197
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_PhysicsProfiles = { "PhysicsProfiles", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, PhysicsProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsProfiles_MetaData), NewProp_PhysicsProfiles_MetaData) }; // 3501688197
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_FullPhysicsDistance = { "FullPhysicsDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, FullPhysicsDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullPhysicsDistance_MetaData), NewProp_FullPhysicsDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_SimplifiedPhysicsDistance = { "SimplifiedPhysicsDistance", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, SimplifiedPhysicsDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimplifiedPhysicsDistance_MetaData), NewProp_SimplifiedPhysicsDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_MaxSimultaneousBones = { "MaxSimultaneousBones", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, MaxSimultaneousBones), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimultaneousBones_MetaData), NewProp_MaxSimultaneousBones_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_PelvisBoneName = { "PelvisBoneName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, PelvisBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PelvisBoneName_MetaData), NewProp_PelvisBoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_DefaultHitBoneName = { "DefaultHitBoneName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, DefaultHitBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHitBoneName_MetaData), NewProp_DefaultHitBoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_HeadBoneName = { "HeadBoneName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsHitReactionComponent, HeadBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadBoneName_MetaData), NewProp_HeadBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_LightHitImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_MediumHitImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_HeavyHitImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_BlockedHitImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_WeakSideImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_HackHeadImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_KnockbackImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_PhysicsTakeoverTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_BlendBackTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_MaxPhysicsTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_PhysicsProfiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_PhysicsProfiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_FullPhysicsDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_SimplifiedPhysicsDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_MaxSimultaneousBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_PelvisBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_DefaultHitBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::NewProp_HeadBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::ClassParams = {
	&UPhysicsHitReactionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsHitReactionComponent()
{
	if (!Z_Registration_Info_UClass_UPhysicsHitReactionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsHitReactionComponent.OuterSingleton, Z_Construct_UClass_UPhysicsHitReactionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsHitReactionComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UPhysicsHitReactionComponent>()
{
	return UPhysicsHitReactionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsHitReactionComponent);
UPhysicsHitReactionComponent::~UPhysicsHitReactionComponent() {}
// End Class UPhysicsHitReactionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHitReactionType_StaticEnum, TEXT("EHitReactionType"), &Z_Registration_Info_UEnum_EHitReactionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1477250650U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPhysicsProfile::StaticStruct, Z_Construct_UScriptStruct_FPhysicsProfile_Statics::NewStructOps, TEXT("PhysicsProfile"), &Z_Registration_Info_UScriptStruct_PhysicsProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsProfile), 3501688197U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsHitReactionComponent, UPhysicsHitReactionComponent::StaticClass, TEXT("UPhysicsHitReactionComponent"), &Z_Registration_Info_UClass_UPhysicsHitReactionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsHitReactionComponent), 3868905630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_3376996782(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_PhysicsHitReactionComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
