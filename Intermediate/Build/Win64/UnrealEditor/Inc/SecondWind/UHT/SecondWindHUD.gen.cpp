// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/UI/SecondWindHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondWindHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindCharacter_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindHUD();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindHUD_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UBlockingComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UFragmentComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UHackComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class ASecondWindHUD
void ASecondWindHUD::StaticRegisterNativesASecondWindHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondWindHUD);
UClass* Z_Construct_UClass_ASecondWindHUD_NoRegister()
{
	return ASecondWindHUD::StaticClass();
}
struct Z_Construct_UClass_ASecondWindHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/SecondWindHUD.h" },
		{ "ModuleRelativePath", "UI/SecondWindHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "UI/SecondWindHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEnemy_MetaData[] = {
		{ "ModuleRelativePath", "UI/SecondWindHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHealthComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SecondWindHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyHealthComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SecondWindHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SecondWindHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SecondWindHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/SecondWindHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEnemy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHealthComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyHealthComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FragmentComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HackComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondWindHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindHUD, PlayerCharacter), Z_Construct_UClass_ASecondWindCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_CurrentEnemy = { "CurrentEnemy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindHUD, CurrentEnemy), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEnemy_MetaData), NewProp_CurrentEnemy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_PlayerHealthComponent = { "PlayerHealthComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindHUD, PlayerHealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHealthComponent_MetaData), NewProp_PlayerHealthComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_EnemyHealthComponent = { "EnemyHealthComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindHUD, EnemyHealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyHealthComponent_MetaData), NewProp_EnemyHealthComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_FragmentComponent = { "FragmentComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindHUD, FragmentComponent), Z_Construct_UClass_UFragmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentComponent_MetaData), NewProp_FragmentComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_HackComponent = { "HackComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindHUD, HackComponent), Z_Construct_UClass_UHackComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackComponent_MetaData), NewProp_HackComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_BlockingComponent = { "BlockingComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindHUD, BlockingComponent), Z_Construct_UClass_UBlockingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingComponent_MetaData), NewProp_BlockingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASecondWindHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_CurrentEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_PlayerHealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_EnemyHealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_FragmentComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_HackComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindHUD_Statics::NewProp_BlockingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASecondWindHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondWindHUD_Statics::ClassParams = {
	&ASecondWindHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASecondWindHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecondWindHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASecondWindHUD()
{
	if (!Z_Registration_Info_UClass_ASecondWindHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondWindHUD.OuterSingleton, Z_Construct_UClass_ASecondWindHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASecondWindHUD.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<ASecondWindHUD>()
{
	return ASecondWindHUD::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondWindHUD);
ASecondWindHUD::~ASecondWindHUD() {}
// End Class ASecondWindHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASecondWindHUD, ASecondWindHUD::StaticClass, TEXT("ASecondWindHUD"), &Z_Registration_Info_UClass_ASecondWindHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondWindHUD), 1917586533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_2739040734(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_UI_SecondWindHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
