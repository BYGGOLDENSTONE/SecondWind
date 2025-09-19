// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/AnimNotifies/AttackHitboxNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttackHitboxNotify() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SECONDWIND_API UClass* Z_Construct_UClass_UAttackHitboxNotify();
SECONDWIND_API UClass* Z_Construct_UClass_UAttackHitboxNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class UAttackHitboxNotify
void UAttackHitboxNotify::StaticRegisterNativesUAttackHitboxNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttackHitboxNotify);
UClass* Z_Construct_UClass_UAttackHitboxNotify_NoRegister()
{
	return UAttackHitboxNotify::StaticClass();
}
struct Z_Construct_UClass_UAttackHitboxNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/AttackHitboxNotify.h" },
		{ "ModuleRelativePath", "AnimNotifies/AttackHitboxNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartHitbox_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "AnimNotifies/AttackHitboxNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "AnimNotifies/AttackHitboxNotify.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bStartHitbox_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartHitbox;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackHitboxNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAttackHitboxNotify_Statics::NewProp_bStartHitbox_SetBit(void* Obj)
{
	((UAttackHitboxNotify*)Obj)->bStartHitbox = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttackHitboxNotify_Statics::NewProp_bStartHitbox = { "bStartHitbox", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAttackHitboxNotify), &Z_Construct_UClass_UAttackHitboxNotify_Statics::NewProp_bStartHitbox_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartHitbox_MetaData), NewProp_bStartHitbox_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackHitboxNotify_Statics::NewProp_DamageMultiplier = { "DamageMultiplier", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackHitboxNotify, DamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplier_MetaData), NewProp_DamageMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackHitboxNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackHitboxNotify_Statics::NewProp_bStartHitbox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackHitboxNotify_Statics::NewProp_DamageMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackHitboxNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttackHitboxNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackHitboxNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackHitboxNotify_Statics::ClassParams = {
	&UAttackHitboxNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttackHitboxNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackHitboxNotify_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackHitboxNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackHitboxNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttackHitboxNotify()
{
	if (!Z_Registration_Info_UClass_UAttackHitboxNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackHitboxNotify.OuterSingleton, Z_Construct_UClass_UAttackHitboxNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackHitboxNotify.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UAttackHitboxNotify>()
{
	return UAttackHitboxNotify::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackHitboxNotify);
UAttackHitboxNotify::~UAttackHitboxNotify() {}
// End Class UAttackHitboxNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_AttackHitboxNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackHitboxNotify, UAttackHitboxNotify::StaticClass, TEXT("UAttackHitboxNotify"), &Z_Registration_Info_UClass_UAttackHitboxNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackHitboxNotify), 1268513154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_AttackHitboxNotify_h_1025691885(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_AttackHitboxNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_AttackHitboxNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
