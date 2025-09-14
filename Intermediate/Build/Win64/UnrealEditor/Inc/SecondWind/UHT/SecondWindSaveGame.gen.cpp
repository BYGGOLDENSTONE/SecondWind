// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/SaveGame/SecondWindSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondWindSaveGame() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
SECONDWIND_API UClass* Z_Construct_UClass_USecondWindSaveGame();
SECONDWIND_API UClass* Z_Construct_UClass_USecondWindSaveGame_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class USecondWindSaveGame
void USecondWindSaveGame::StaticRegisterNativesUSecondWindSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecondWindSaveGame);
UClass* Z_Construct_UClass_USecondWindSaveGame_NoRegister()
{
	return USecondWindSaveGame::StaticClass();
}
struct Z_Construct_UClass_USecondWindSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SaveGame/SecondWindSaveGame.h" },
		{ "ModuleRelativePath", "SaveGame/SecondWindSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalFragments_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "SaveGame/SecondWindSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedMemories_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "SaveGame/SecondWindSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "SaveGame/SecondWindSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[] = {
		{ "Category", "SaveGame" },
		{ "ModuleRelativePath", "SaveGame/SecondWindSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalFragments;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnlockedMemories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockedMemories;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_UserIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecondWindSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USecondWindSaveGame_Statics::NewProp_TotalFragments = { "TotalFragments", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondWindSaveGame, TotalFragments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalFragments_MetaData), NewProp_TotalFragments_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USecondWindSaveGame_Statics::NewProp_UnlockedMemories_Inner = { "UnlockedMemories", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USecondWindSaveGame_Statics::NewProp_UnlockedMemories = { "UnlockedMemories", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondWindSaveGame, UnlockedMemories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockedMemories_MetaData), NewProp_UnlockedMemories_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USecondWindSaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondWindSaveGame, SaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveSlotName_MetaData), NewProp_SaveSlotName_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USecondWindSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecondWindSaveGame, UserIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserIndex_MetaData), NewProp_UserIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecondWindSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWindSaveGame_Statics::NewProp_TotalFragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWindSaveGame_Statics::NewProp_UnlockedMemories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWindSaveGame_Statics::NewProp_UnlockedMemories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWindSaveGame_Statics::NewProp_SaveSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondWindSaveGame_Statics::NewProp_UserIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecondWindSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USecondWindSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecondWindSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecondWindSaveGame_Statics::ClassParams = {
	&USecondWindSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USecondWindSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USecondWindSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecondWindSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USecondWindSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecondWindSaveGame()
{
	if (!Z_Registration_Info_UClass_USecondWindSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecondWindSaveGame.OuterSingleton, Z_Construct_UClass_USecondWindSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecondWindSaveGame.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<USecondWindSaveGame>()
{
	return USecondWindSaveGame::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecondWindSaveGame);
USecondWindSaveGame::~USecondWindSaveGame() {}
// End Class USecondWindSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SaveGame_SecondWindSaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USecondWindSaveGame, USecondWindSaveGame::StaticClass, TEXT("USecondWindSaveGame"), &Z_Registration_Info_UClass_USecondWindSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecondWindSaveGame), 4187260388U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SaveGame_SecondWindSaveGame_h_4188825475(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SaveGame_SecondWindSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SaveGame_SecondWindSaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
