// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Actors/SimplifiedArenaSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplifiedArenaSystem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaDoor_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaEnemy_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASafeZoneCorridor_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindCharacter_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASimplifiedArenaSystem();
SECONDWIND_API UClass* Z_Construct_UClass_ASimplifiedArenaSystem_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ATrainingDummy_NoRegister();
SECONDWIND_API UScriptStruct* Z_Construct_UScriptStruct_FArenaRoom();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin ScriptStruct FArenaRoom
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ArenaRoom;
class UScriptStruct* FArenaRoom::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ArenaRoom.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ArenaRoom.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FArenaRoom, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("ArenaRoom"));
	}
	return Z_Registration_Info_UScriptStruct_ArenaRoom.OuterSingleton;
}
template<> SECONDWIND_API UScriptStruct* StaticStruct<FArenaRoom>()
{
	return FArenaRoom::StaticStruct();
}
struct Z_Construct_UScriptStruct_FArenaRoom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryDoor_MetaData[] = {
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitDoor_MetaData[] = {
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemy_MetaData[] = {
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Corridor_MetaData[] = {
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomLocation_MetaData[] = {
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Corridor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArenaRoom>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArenaRoom_Statics::NewProp_EntryDoor = { "EntryDoor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArenaRoom, EntryDoor), Z_Construct_UClass_AArenaDoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryDoor_MetaData), NewProp_EntryDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArenaRoom_Statics::NewProp_ExitDoor = { "ExitDoor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArenaRoom, ExitDoor), Z_Construct_UClass_AArenaDoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitDoor_MetaData), NewProp_ExitDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArenaRoom_Statics::NewProp_Enemy = { "Enemy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArenaRoom, Enemy), Z_Construct_UClass_AArenaEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemy_MetaData), NewProp_Enemy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArenaRoom_Statics::NewProp_Corridor = { "Corridor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArenaRoom, Corridor), Z_Construct_UClass_ASafeZoneCorridor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Corridor_MetaData), NewProp_Corridor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FArenaRoom_Statics::NewProp_RoomLocation = { "RoomLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FArenaRoom, RoomLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomLocation_MetaData), NewProp_RoomLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArenaRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaRoom_Statics::NewProp_EntryDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaRoom_Statics::NewProp_ExitDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaRoom_Statics::NewProp_Enemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaRoom_Statics::NewProp_Corridor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArenaRoom_Statics::NewProp_RoomLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArenaRoom_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	&NewStructOps,
	"ArenaRoom",
	Z_Construct_UScriptStruct_FArenaRoom_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaRoom_Statics::PropPointers),
	sizeof(FArenaRoom),
	alignof(FArenaRoom),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArenaRoom_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FArenaRoom_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FArenaRoom()
{
	if (!Z_Registration_Info_UScriptStruct_ArenaRoom.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ArenaRoom.InnerSingleton, Z_Construct_UScriptStruct_FArenaRoom_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ArenaRoom.InnerSingleton;
}
// End ScriptStruct FArenaRoom

// Begin Class ASimplifiedArenaSystem
void ASimplifiedArenaSystem::StaticRegisterNativesASimplifiedArenaSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASimplifiedArenaSystem);
UClass* Z_Construct_UClass_ASimplifiedArenaSystem_NoRegister()
{
	return ASimplifiedArenaSystem::StaticClass();
}
struct Z_Construct_UClass_ASimplifiedArenaSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/SimplifiedArenaSystem.h" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorClass_MetaData[] = {
		{ "Category", "Arena Settings" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorridorClass_MetaData[] = {
		{ "Category", "Arena Settings" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Arena Settings" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainingDummyClass_MetaData[] = {
		{ "Category", "Arena Settings" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomSpacing_MetaData[] = {
		{ "Category", "Arena Settings" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorridorLength_MetaData[] = {
		{ "Category", "Arena Settings" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalArenas_MetaData[] = {
		{ "Category", "Arena Settings" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingHubLocation_MetaData[] = {
		{ "Category", "Arena Settings" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEnemy_MetaData[] = {
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainingDummy_MetaData[] = {
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaTrigger_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/SimplifiedArenaSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DoorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CorridorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrainingDummyClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomSpacing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CorridorLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalArenas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartingHubLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEnemy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrainingDummy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArenaTrigger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASimplifiedArenaSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_DoorClass = { "DoorClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, DoorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AArenaDoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorClass_MetaData), NewProp_DoorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_CorridorClass = { "CorridorClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, CorridorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASafeZoneCorridor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorridorClass_MetaData), NewProp_CorridorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AArenaEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_TrainingDummyClass = { "TrainingDummyClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, TrainingDummyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATrainingDummy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainingDummyClass_MetaData), NewProp_TrainingDummyClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_RoomSpacing = { "RoomSpacing", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, RoomSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomSpacing_MetaData), NewProp_RoomSpacing_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_CorridorLength = { "CorridorLength", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, CorridorLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorridorLength_MetaData), NewProp_CorridorLength_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_TotalArenas = { "TotalArenas", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, TotalArenas), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalArenas_MetaData), NewProp_TotalArenas_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_StartingHubLocation = { "StartingHubLocation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, StartingHubLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingHubLocation_MetaData), NewProp_StartingHubLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_CurrentEnemy = { "CurrentEnemy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, CurrentEnemy), Z_Construct_UClass_AArenaEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEnemy_MetaData), NewProp_CurrentEnemy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_TrainingDummy = { "TrainingDummy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, TrainingDummy), Z_Construct_UClass_ATrainingDummy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainingDummy_MetaData), NewProp_TrainingDummy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, PlayerCharacter), Z_Construct_UClass_ASecondWindCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_ArenaTrigger = { "ArenaTrigger", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASimplifiedArenaSystem, ArenaTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaTrigger_MetaData), NewProp_ArenaTrigger_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASimplifiedArenaSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_DoorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_CorridorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_TrainingDummyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_RoomSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_CorridorLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_TotalArenas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_StartingHubLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_CurrentEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_TrainingDummy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASimplifiedArenaSystem_Statics::NewProp_ArenaTrigger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimplifiedArenaSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASimplifiedArenaSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASimplifiedArenaSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASimplifiedArenaSystem_Statics::ClassParams = {
	&ASimplifiedArenaSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASimplifiedArenaSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASimplifiedArenaSystem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASimplifiedArenaSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASimplifiedArenaSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASimplifiedArenaSystem()
{
	if (!Z_Registration_Info_UClass_ASimplifiedArenaSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASimplifiedArenaSystem.OuterSingleton, Z_Construct_UClass_ASimplifiedArenaSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASimplifiedArenaSystem.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<ASimplifiedArenaSystem>()
{
	return ASimplifiedArenaSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASimplifiedArenaSystem);
ASimplifiedArenaSystem::~ASimplifiedArenaSystem() {}
// End Class ASimplifiedArenaSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SimplifiedArenaSystem_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FArenaRoom::StaticStruct, Z_Construct_UScriptStruct_FArenaRoom_Statics::NewStructOps, TEXT("ArenaRoom"), &Z_Registration_Info_UScriptStruct_ArenaRoom, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FArenaRoom), 3944730969U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASimplifiedArenaSystem, ASimplifiedArenaSystem::StaticClass, TEXT("ASimplifiedArenaSystem"), &Z_Registration_Info_UClass_ASimplifiedArenaSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASimplifiedArenaSystem), 218431279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SimplifiedArenaSystem_h_2619473045(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SimplifiedArenaSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SimplifiedArenaSystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SimplifiedArenaSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SimplifiedArenaSystem_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
