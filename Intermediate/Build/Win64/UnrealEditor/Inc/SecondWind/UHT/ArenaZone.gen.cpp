// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Actors/ArenaZone.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaZone() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaDoor_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaEnemy_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaZone();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaZone_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AEnemySpawnPoint_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class AArenaZone Function OnZoneBoundsBeginOverlap
struct Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics
{
	struct ArenaZone_eventOnZoneBoundsBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaZone_eventOnZoneBoundsBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaZone_eventOnZoneBoundsBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaZone_eventOnZoneBoundsBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaZone_eventOnZoneBoundsBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ArenaZone_eventOnZoneBoundsBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArenaZone_eventOnZoneBoundsBeginOverlap_Parms), &Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaZone_eventOnZoneBoundsBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaZone, nullptr, "OnZoneBoundsBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::ArenaZone_eventOnZoneBoundsBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::ArenaZone_eventOnZoneBoundsBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArenaZone::execOnZoneBoundsBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnZoneBoundsBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AArenaZone Function OnZoneBoundsBeginOverlap

// Begin Class AArenaZone
void AArenaZone::StaticRegisterNativesAArenaZone()
{
	UClass* Class = AArenaZone::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnZoneBoundsBeginOverlap", &AArenaZone::execOnZoneBoundsBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArenaZone);
UClass* Z_Construct_UClass_AArenaZone_NoRegister()
{
	return AArenaZone::StaticClass();
}
struct Z_Construct_UClass_AArenaZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ArenaZone.h" },
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneNumber_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneName_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryDoor_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitDoor_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneBounds_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCleared_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveEnemies_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaZone.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZoneNumber;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ZoneName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntryDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitDoor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoneBounds;
	static void NewProp_bIsCleared_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCleared;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveEnemies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveEnemies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AArenaZone_OnZoneBoundsBeginOverlap, "OnZoneBoundsBeginOverlap" }, // 982470347
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_ZoneNumber = { "ZoneNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaZone, ZoneNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneNumber_MetaData), NewProp_ZoneNumber_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_ZoneName = { "ZoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaZone, ZoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneName_MetaData), NewProp_ZoneName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_EntryDoor = { "EntryDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaZone, EntryDoor), Z_Construct_UClass_AArenaDoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryDoor_MetaData), NewProp_EntryDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_ExitDoor = { "ExitDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaZone, ExitDoor), Z_Construct_UClass_AArenaDoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitDoor_MetaData), NewProp_ExitDoor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_ZoneBounds = { "ZoneBounds", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaZone, ZoneBounds), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneBounds_MetaData), NewProp_ZoneBounds_MetaData) };
void Z_Construct_UClass_AArenaZone_Statics::NewProp_bIsCleared_SetBit(void* Obj)
{
	((AArenaZone*)Obj)->bIsCleared = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_bIsCleared = { "bIsCleared", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AArenaZone), &Z_Construct_UClass_AArenaZone_Statics::NewProp_bIsCleared_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCleared_MetaData), NewProp_bIsCleared_MetaData) };
void Z_Construct_UClass_AArenaZone_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((AArenaZone*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AArenaZone), &Z_Construct_UClass_AArenaZone_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemySpawnPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaZone, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPoints_MetaData), NewProp_SpawnPoints_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_ActiveEnemies_Inner = { "ActiveEnemies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AArenaEnemy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AArenaZone_Statics::NewProp_ActiveEnemies = { "ActiveEnemies", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaZone, ActiveEnemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveEnemies_MetaData), NewProp_ActiveEnemies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArenaZone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_ZoneNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_ZoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_EntryDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_ExitDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_ZoneBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_bIsCleared,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_SpawnPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_SpawnPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_ActiveEnemies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaZone_Statics::NewProp_ActiveEnemies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaZone_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArenaZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArenaZone_Statics::ClassParams = {
	&AArenaZone::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AArenaZone_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AArenaZone_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaZone_Statics::Class_MetaDataParams), Z_Construct_UClass_AArenaZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArenaZone()
{
	if (!Z_Registration_Info_UClass_AArenaZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArenaZone.OuterSingleton, Z_Construct_UClass_AArenaZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArenaZone.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<AArenaZone>()
{
	return AArenaZone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaZone);
AArenaZone::~AArenaZone() {}
// End Class AArenaZone

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArenaZone, AArenaZone::StaticClass, TEXT("AArenaZone"), &Z_Registration_Info_UClass_AArenaZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArenaZone), 3598874664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_3631991466(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaZone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
