// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Actors/LevelLayoutManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelLayoutManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaDoor_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaZone_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AEnemySpawnPoint_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ALevelLayoutManager();
SECONDWIND_API UClass* Z_Construct_UClass_ALevelLayoutManager_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASafeZoneCorridor_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ATrainingDummy_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class ALevelLayoutManager
void ALevelLayoutManager::StaticRegisterNativesALevelLayoutManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelLayoutManager);
UClass* Z_Construct_UClass_ALevelLayoutManager_NoRegister()
{
	return ALevelLayoutManager::StaticClass();
}
struct Z_Construct_UClass_ALevelLayoutManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/LevelLayoutManager.h" },
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaZones_MetaData[] = {
		{ "Category", "Level Layout" },
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "Level Layout" },
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllDoors_MetaData[] = {
		{ "Category", "Level Layout" },
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllCorridors_MetaData[] = {
		{ "Category", "Level Layout" },
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentArenaNumber_MetaData[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInCombat_MetaData[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalArenasCleared_MetaData[] = {
		{ "Category", "Game State" },
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTrainingDummyClass_MetaData[] = {
		{ "Category", "Spawn Settings" },
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainingDummySpawnPoint_MetaData[] = {
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTrainingDummy_MetaData[] = {
		{ "ModuleRelativePath", "Actors/LevelLayoutManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArenaZones_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArenaZones_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ArenaZones;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllDoors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllDoors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllCorridors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCorridors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentArenaNumber;
	static void NewProp_bInCombat_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCombat;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalArenasCleared;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultTrainingDummyClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainingDummySpawnPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTrainingDummy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelLayoutManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_ArenaZones_ValueProp = { "ArenaZones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_AArenaZone_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_ArenaZones_Key_KeyProp = { "ArenaZones_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_ArenaZones = { "ArenaZones", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelLayoutManager, ArenaZones), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaZones_MetaData), NewProp_ArenaZones_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemySpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelLayoutManager, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPoints_MetaData), NewProp_SpawnPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_AllDoors_Inner = { "AllDoors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AArenaDoor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_AllDoors = { "AllDoors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelLayoutManager, AllDoors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllDoors_MetaData), NewProp_AllDoors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_AllCorridors_Inner = { "AllCorridors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ASafeZoneCorridor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_AllCorridors = { "AllCorridors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelLayoutManager, AllCorridors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllCorridors_MetaData), NewProp_AllCorridors_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_CurrentArenaNumber = { "CurrentArenaNumber", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelLayoutManager, CurrentArenaNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentArenaNumber_MetaData), NewProp_CurrentArenaNumber_MetaData) };
void Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_bInCombat_SetBit(void* Obj)
{
	((ALevelLayoutManager*)Obj)->bInCombat = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_bInCombat = { "bInCombat", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelLayoutManager), &Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_bInCombat_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInCombat_MetaData), NewProp_bInCombat_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_TotalArenasCleared = { "TotalArenasCleared", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelLayoutManager, TotalArenasCleared), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalArenasCleared_MetaData), NewProp_TotalArenasCleared_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_DefaultTrainingDummyClass = { "DefaultTrainingDummyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelLayoutManager, DefaultTrainingDummyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATrainingDummy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTrainingDummyClass_MetaData), NewProp_DefaultTrainingDummyClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_TrainingDummySpawnPoint = { "TrainingDummySpawnPoint", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelLayoutManager, TrainingDummySpawnPoint), Z_Construct_UClass_AEnemySpawnPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainingDummySpawnPoint_MetaData), NewProp_TrainingDummySpawnPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_CurrentTrainingDummy = { "CurrentTrainingDummy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALevelLayoutManager, CurrentTrainingDummy), Z_Construct_UClass_ATrainingDummy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTrainingDummy_MetaData), NewProp_CurrentTrainingDummy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelLayoutManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_ArenaZones_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_ArenaZones_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_ArenaZones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_SpawnPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_SpawnPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_AllDoors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_AllDoors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_AllCorridors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_AllCorridors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_CurrentArenaNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_bInCombat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_TotalArenasCleared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_DefaultTrainingDummyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_TrainingDummySpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelLayoutManager_Statics::NewProp_CurrentTrainingDummy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelLayoutManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALevelLayoutManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelLayoutManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelLayoutManager_Statics::ClassParams = {
	&ALevelLayoutManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALevelLayoutManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALevelLayoutManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelLayoutManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelLayoutManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelLayoutManager()
{
	if (!Z_Registration_Info_UClass_ALevelLayoutManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelLayoutManager.OuterSingleton, Z_Construct_UClass_ALevelLayoutManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelLayoutManager.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<ALevelLayoutManager>()
{
	return ALevelLayoutManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelLayoutManager);
ALevelLayoutManager::~ALevelLayoutManager() {}
// End Class ALevelLayoutManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_LevelLayoutManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelLayoutManager, ALevelLayoutManager::StaticClass, TEXT("ALevelLayoutManager"), &Z_Registration_Info_UClass_ALevelLayoutManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelLayoutManager), 277063295U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_LevelLayoutManager_h_2693631258(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_LevelLayoutManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_LevelLayoutManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
