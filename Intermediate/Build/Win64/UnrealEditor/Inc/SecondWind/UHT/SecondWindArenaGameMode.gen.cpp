// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/GameModes/SecondWindArenaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondWindArenaGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaManager_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindArenaGameMode();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindArenaGameMode_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindCharacter_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ATrainingDummy_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class ASecondWindArenaGameMode
void ASecondWindArenaGameMode::StaticRegisterNativesASecondWindArenaGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondWindArenaGameMode);
UClass* Z_Construct_UClass_ASecondWindArenaGameMode_NoRegister()
{
	return ASecondWindArenaGameMode::StaticClass();
}
struct Z_Construct_UClass_ASecondWindArenaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/SecondWindArenaGameMode.h" },
		{ "ModuleRelativePath", "GameModes/SecondWindArenaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaManagerClass_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "GameModes/SecondWindArenaGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainingDummyClass_MetaData[] = {
		{ "Category", "Training" },
		{ "ModuleRelativePath", "GameModes/SecondWindArenaGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeZoneSpawnLocation_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "GameModes/SecondWindArenaGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainingDummySpawnLocation_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "GameModes/SecondWindArenaGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaManager_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/SecondWindArenaGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainingDummy_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/SecondWindArenaGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/SecondWindArenaGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInSafeZone_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/SecondWindArenaGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentArenaProgress_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/SecondWindArenaGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ArenaManagerClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrainingDummyClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SafeZoneSpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrainingDummySpawnLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArenaManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainingDummy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static void NewProp_bInSafeZone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSafeZone;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentArenaProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondWindArenaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_ArenaManagerClass = { "ArenaManagerClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindArenaGameMode, ArenaManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AArenaManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaManagerClass_MetaData), NewProp_ArenaManagerClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_TrainingDummyClass = { "TrainingDummyClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindArenaGameMode, TrainingDummyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATrainingDummy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainingDummyClass_MetaData), NewProp_TrainingDummyClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_SafeZoneSpawnLocation = { "SafeZoneSpawnLocation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindArenaGameMode, SafeZoneSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeZoneSpawnLocation_MetaData), NewProp_SafeZoneSpawnLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_TrainingDummySpawnLocation = { "TrainingDummySpawnLocation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindArenaGameMode, TrainingDummySpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainingDummySpawnLocation_MetaData), NewProp_TrainingDummySpawnLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_ArenaManager = { "ArenaManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindArenaGameMode, ArenaManager), Z_Construct_UClass_AArenaManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaManager_MetaData), NewProp_ArenaManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_TrainingDummy = { "TrainingDummy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindArenaGameMode, TrainingDummy), Z_Construct_UClass_ATrainingDummy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainingDummy_MetaData), NewProp_TrainingDummy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindArenaGameMode, PlayerCharacter), Z_Construct_UClass_ASecondWindCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
void Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_bInSafeZone_SetBit(void* Obj)
{
	((ASecondWindArenaGameMode*)Obj)->bInSafeZone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_bInSafeZone = { "bInSafeZone", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASecondWindArenaGameMode), &Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_bInSafeZone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInSafeZone_MetaData), NewProp_bInSafeZone_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_CurrentArenaProgress = { "CurrentArenaProgress", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindArenaGameMode, CurrentArenaProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentArenaProgress_MetaData), NewProp_CurrentArenaProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASecondWindArenaGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_ArenaManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_TrainingDummyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_SafeZoneSpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_TrainingDummySpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_ArenaManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_TrainingDummy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_bInSafeZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindArenaGameMode_Statics::NewProp_CurrentArenaProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindArenaGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASecondWindArenaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindArenaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondWindArenaGameMode_Statics::ClassParams = {
	&ASecondWindArenaGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASecondWindArenaGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindArenaGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindArenaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecondWindArenaGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASecondWindArenaGameMode()
{
	if (!Z_Registration_Info_UClass_ASecondWindArenaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondWindArenaGameMode.OuterSingleton, Z_Construct_UClass_ASecondWindArenaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASecondWindArenaGameMode.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<ASecondWindArenaGameMode>()
{
	return ASecondWindArenaGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondWindArenaGameMode);
ASecondWindArenaGameMode::~ASecondWindArenaGameMode() {}
// End Class ASecondWindArenaGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_GameModes_SecondWindArenaGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASecondWindArenaGameMode, ASecondWindArenaGameMode::StaticClass, TEXT("ASecondWindArenaGameMode"), &Z_Registration_Info_UClass_ASecondWindArenaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondWindArenaGameMode), 3621966481U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_GameModes_SecondWindArenaGameMode_h_666684238(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_GameModes_SecondWindArenaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_GameModes_SecondWindArenaGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
