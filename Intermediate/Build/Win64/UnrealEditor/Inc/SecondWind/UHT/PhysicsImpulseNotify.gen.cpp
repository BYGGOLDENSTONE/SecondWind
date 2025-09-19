// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/AnimNotifies/PhysicsImpulseNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsImpulseNotify() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SECONDWIND_API UClass* Z_Construct_UClass_UPhysicsImpulseNotify();
SECONDWIND_API UClass* Z_Construct_UClass_UPhysicsImpulseNotify_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EHitReactionType();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class UPhysicsImpulseNotify
void UPhysicsImpulseNotify::StaticRegisterNativesUPhysicsImpulseNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsImpulseNotify);
UClass* Z_Construct_UClass_UPhysicsImpulseNotify_NoRegister()
{
	return UPhysicsImpulseNotify::StaticClass();
}
struct Z_Construct_UClass_UPhysicsImpulseNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/PhysicsImpulseNotify.h" },
		{ "ModuleRelativePath", "AnimNotifies/PhysicsImpulseNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactionType_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "AnimNotifies/PhysicsImpulseNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "AnimNotifies/PhysicsImpulseNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpulseDirection_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "AnimNotifies/PhysicsImpulseNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHitLocation_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "AnimNotifies/PhysicsImpulseNotify.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReactionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReactionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpulseMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpulseDirection;
	static void NewProp_bUseHitLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHitLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsImpulseNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_ReactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_ReactionType = { "ReactionType", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsImpulseNotify, ReactionType), Z_Construct_UEnum_SecondWind_EHitReactionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactionType_MetaData), NewProp_ReactionType_MetaData) }; // 1477250650
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_ImpulseMultiplier = { "ImpulseMultiplier", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsImpulseNotify, ImpulseMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseMultiplier_MetaData), NewProp_ImpulseMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_ImpulseDirection = { "ImpulseDirection", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPhysicsImpulseNotify, ImpulseDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpulseDirection_MetaData), NewProp_ImpulseDirection_MetaData) };
void Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_bUseHitLocation_SetBit(void* Obj)
{
	((UPhysicsImpulseNotify*)Obj)->bUseHitLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_bUseHitLocation = { "bUseHitLocation", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPhysicsImpulseNotify), &Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_bUseHitLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHitLocation_MetaData), NewProp_bUseHitLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsImpulseNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_ReactionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_ReactionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_ImpulseMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_ImpulseDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsImpulseNotify_Statics::NewProp_bUseHitLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsImpulseNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPhysicsImpulseNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsImpulseNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsImpulseNotify_Statics::ClassParams = {
	&UPhysicsImpulseNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPhysicsImpulseNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsImpulseNotify_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsImpulseNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UPhysicsImpulseNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPhysicsImpulseNotify()
{
	if (!Z_Registration_Info_UClass_UPhysicsImpulseNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsImpulseNotify.OuterSingleton, Z_Construct_UClass_UPhysicsImpulseNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPhysicsImpulseNotify.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UPhysicsImpulseNotify>()
{
	return UPhysicsImpulseNotify::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsImpulseNotify);
UPhysicsImpulseNotify::~UPhysicsImpulseNotify() {}
// End Class UPhysicsImpulseNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_PhysicsImpulseNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsImpulseNotify, UPhysicsImpulseNotify::StaticClass, TEXT("UPhysicsImpulseNotify"), &Z_Registration_Info_UClass_UPhysicsImpulseNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsImpulseNotify), 3664990302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_PhysicsImpulseNotify_h_1354189032(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_PhysicsImpulseNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_PhysicsImpulseNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
