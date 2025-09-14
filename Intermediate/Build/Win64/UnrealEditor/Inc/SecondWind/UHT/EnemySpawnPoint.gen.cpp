// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Actors/EnemySpawnPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpawnPoint() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaEnemy_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AEnemySpawnPoint();
SECONDWIND_API UClass* Z_Construct_UClass_AEnemySpawnPoint_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ATrainingDummy_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class AEnemySpawnPoint
void AEnemySpawnPoint::StaticRegisterNativesAEnemySpawnPoint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpawnPoint);
UClass* Z_Construct_UClass_AEnemySpawnPoint_NoRegister()
{
	return AEnemySpawnPoint::StaticClass();
}
struct Z_Construct_UClass_AEnemySpawnPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/EnemySpawnPoint.h" },
		{ "ModuleRelativePath", "Actors/EnemySpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaNumber_MetaData[] = {
		{ "Category", "Spawn Settings" },
		{ "ModuleRelativePath", "Actors/EnemySpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Spawn Settings" },
		{ "ModuleRelativePath", "Actors/EnemySpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseOverride_MetaData[] = {
		{ "Category", "Spawn Settings" },
		{ "ModuleRelativePath", "Actors/EnemySpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTrainingDummy_MetaData[] = {
		{ "Category", "Spawn Settings" },
		{ "ModuleRelativePath", "Actors/EnemySpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrainingDummyClass_MetaData[] = {
		{ "Category", "Spawn Settings" },
		{ "ModuleRelativePath", "Actors/EnemySpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionIndicator_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/EnemySpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorSprite_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/EnemySpawnPoint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActor_MetaData[] = {
		{ "ModuleRelativePath", "Actors/EnemySpawnPoint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArenaNumber;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PhaseOverride;
	static void NewProp_bIsTrainingDummy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTrainingDummy;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrainingDummyClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectionIndicator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorSprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpawnPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_ArenaNumber = { "ArenaNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawnPoint, ArenaNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaNumber_MetaData), NewProp_ArenaNumber_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawnPoint, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AArenaEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_PhaseOverride = { "PhaseOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawnPoint, PhaseOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseOverride_MetaData), NewProp_PhaseOverride_MetaData) };
void Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_bIsTrainingDummy_SetBit(void* Obj)
{
	((AEnemySpawnPoint*)Obj)->bIsTrainingDummy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_bIsTrainingDummy = { "bIsTrainingDummy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemySpawnPoint), &Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_bIsTrainingDummy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTrainingDummy_MetaData), NewProp_bIsTrainingDummy_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_TrainingDummyClass = { "TrainingDummyClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawnPoint, TrainingDummyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATrainingDummy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrainingDummyClass_MetaData), NewProp_TrainingDummyClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_DirectionIndicator = { "DirectionIndicator", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawnPoint, DirectionIndicator), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionIndicator_MetaData), NewProp_DirectionIndicator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_EditorSprite = { "EditorSprite", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawnPoint, EditorSprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorSprite_MetaData), NewProp_EditorSprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpawnPoint, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedActor_MetaData), NewProp_SpawnedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpawnPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_ArenaNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_PhaseOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_bIsTrainingDummy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_TrainingDummyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_DirectionIndicator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_EditorSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpawnPoint_Statics::NewProp_SpawnedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemySpawnPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpawnPoint_Statics::ClassParams = {
	&AEnemySpawnPoint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemySpawnPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnPoint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpawnPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpawnPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemySpawnPoint()
{
	if (!Z_Registration_Info_UClass_AEnemySpawnPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpawnPoint.OuterSingleton, Z_Construct_UClass_AEnemySpawnPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemySpawnPoint.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<AEnemySpawnPoint>()
{
	return AEnemySpawnPoint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpawnPoint);
AEnemySpawnPoint::~AEnemySpawnPoint() {}
// End Class AEnemySpawnPoint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpawnPoint, AEnemySpawnPoint::StaticClass, TEXT("AEnemySpawnPoint"), &Z_Registration_Info_UClass_AEnemySpawnPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpawnPoint), 593961662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h_1313575353(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_EnemySpawnPoint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
