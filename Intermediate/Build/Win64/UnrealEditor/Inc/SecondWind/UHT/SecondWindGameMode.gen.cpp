// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/SecondWindGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondWindGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindGameMode();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class ASecondWindGameMode
void ASecondWindGameMode::StaticRegisterNativesASecondWindGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondWindGameMode);
UClass* Z_Construct_UClass_ASecondWindGameMode_NoRegister()
{
	return ASecondWindGameMode::StaticClass();
}
struct Z_Construct_UClass_ASecondWindGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SecondWindGameMode.h" },
		{ "ModuleRelativePath", "SecondWindGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondWindGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASecondWindGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondWindGameMode_Statics::ClassParams = {
	&ASecondWindGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecondWindGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASecondWindGameMode()
{
	if (!Z_Registration_Info_UClass_ASecondWindGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondWindGameMode.OuterSingleton, Z_Construct_UClass_ASecondWindGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASecondWindGameMode.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<ASecondWindGameMode>()
{
	return ASecondWindGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondWindGameMode);
ASecondWindGameMode::~ASecondWindGameMode() {}
// End Class ASecondWindGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SecondWindGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASecondWindGameMode, ASecondWindGameMode::StaticClass, TEXT("ASecondWindGameMode"), &Z_Registration_Info_UClass_ASecondWindGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondWindGameMode), 1472313945U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SecondWindGameMode_h_46269589(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SecondWindGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SecondWindGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
