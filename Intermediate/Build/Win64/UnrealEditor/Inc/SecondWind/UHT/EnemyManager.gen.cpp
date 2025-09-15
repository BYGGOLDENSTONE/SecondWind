// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Systems/EnemyManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SECONDWIND_API UClass* Z_Construct_UClass_UEnemyManager();
SECONDWIND_API UClass* Z_Construct_UClass_UEnemyManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class UEnemyManager
void UEnemyManager::StaticRegisterNativesUEnemyManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyManager);
UClass* Z_Construct_UClass_UEnemyManager_NoRegister()
{
	return UEnemyManager::StaticClass();
}
struct Z_Construct_UClass_UEnemyManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/EnemyManager.h" },
		{ "ModuleRelativePath", "Systems/EnemyManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEnemies_MetaData[] = {
		{ "ModuleRelativePath", "Systems/EnemyManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveEnemies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyManager_Statics::NewProp_ActiveEnemies_Inner = { "ActiveEnemies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnemyManager_Statics::NewProp_ActiveEnemies = { "ActiveEnemies", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyManager, ActiveEnemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEnemies_MetaData), NewProp_ActiveEnemies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyManager_Statics::NewProp_ActiveEnemies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyManager_Statics::NewProp_ActiveEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEnemyManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyManager_Statics::ClassParams = {
	&UEnemyManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEnemyManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyManager()
{
	if (!Z_Registration_Info_UClass_UEnemyManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyManager.OuterSingleton, Z_Construct_UClass_UEnemyManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyManager.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UEnemyManager>()
{
	return UEnemyManager::StaticClass();
}
UEnemyManager::UEnemyManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyManager);
UEnemyManager::~UEnemyManager() {}
// End Class UEnemyManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyManager, UEnemyManager::StaticClass, TEXT("UEnemyManager"), &Z_Registration_Info_UClass_UEnemyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyManager), 1196233287U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h_3625858818(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_EnemyManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
