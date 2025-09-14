// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Actors/ArenaManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SECONDWIND_API UClass* Z_Construct_UClass_AArena_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaManager();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaManager_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindCharacter_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EGamePhase();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EGamePhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGamePhase;
static UEnum* EGamePhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGamePhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGamePhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EGamePhase, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EGamePhase"));
	}
	return Z_Registration_Info_UEnum_EGamePhase.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EGamePhase>()
{
	return EGamePhase_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EGamePhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Arena.Name", "EGamePhase::Arena" },
		{ "BlueprintType", "true" },
		{ "GameComplete.Name", "EGamePhase::GameComplete" },
		{ "IntermediateSafeZone.Name", "EGamePhase::IntermediateSafeZone" },
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
		{ "SafeZone.Name", "EGamePhase::SafeZone" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGamePhase::SafeZone", (int64)EGamePhase::SafeZone },
		{ "EGamePhase::Arena", (int64)EGamePhase::Arena },
		{ "EGamePhase::IntermediateSafeZone", (int64)EGamePhase::IntermediateSafeZone },
		{ "EGamePhase::GameComplete", (int64)EGamePhase::GameComplete },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EGamePhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EGamePhase",
	"EGamePhase",
	Z_Construct_UEnum_SecondWind_EGamePhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EGamePhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EGamePhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EGamePhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EGamePhase()
{
	if (!Z_Registration_Info_UEnum_EGamePhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGamePhase.InnerSingleton, Z_Construct_UEnum_SecondWind_EGamePhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGamePhase.InnerSingleton;
}
// End Enum EGamePhase

// Begin Class AArenaManager
void AArenaManager::StaticRegisterNativesAArenaManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArenaManager);
UClass* Z_Construct_UClass_AArenaManager_NoRegister()
{
	return AArenaManager::StaticClass();
}
struct Z_Construct_UClass_AArenaManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ArenaManager.h" },
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaClass_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaSpawnLocation_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SafeZoneLocation_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxArenas_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentArenaNumber_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalFragments_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGamePhase_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentArena_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ArenaClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArenaSpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SafeZoneLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxArenas;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentArenaNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalFragments;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGamePhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGamePhase;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentArena;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArenaManager_Statics::NewProp_ArenaClass = { "ArenaClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaManager, ArenaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AArena_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaClass_MetaData), NewProp_ArenaClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArenaManager_Statics::NewProp_ArenaSpawnLocation = { "ArenaSpawnLocation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaManager, ArenaSpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaSpawnLocation_MetaData), NewProp_ArenaSpawnLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArenaManager_Statics::NewProp_SafeZoneLocation = { "SafeZoneLocation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaManager, SafeZoneLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SafeZoneLocation_MetaData), NewProp_SafeZoneLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArenaManager_Statics::NewProp_MaxArenas = { "MaxArenas", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaManager, MaxArenas), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxArenas_MetaData), NewProp_MaxArenas_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArenaManager_Statics::NewProp_CurrentArenaNumber = { "CurrentArenaNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaManager, CurrentArenaNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentArenaNumber_MetaData), NewProp_CurrentArenaNumber_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArenaManager_Statics::NewProp_TotalFragments = { "TotalFragments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaManager, TotalFragments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalFragments_MetaData), NewProp_TotalFragments_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArenaManager_Statics::NewProp_CurrentGamePhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AArenaManager_Statics::NewProp_CurrentGamePhase = { "CurrentGamePhase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaManager, CurrentGamePhase), Z_Construct_UEnum_SecondWind_EGamePhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGamePhase_MetaData), NewProp_CurrentGamePhase_MetaData) }; // 3749785450
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaManager_Statics::NewProp_CurrentArena = { "CurrentArena", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaManager, CurrentArena), Z_Construct_UClass_AArena_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentArena_MetaData), NewProp_CurrentArena_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaManager_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaManager, PlayerCharacter), Z_Construct_UClass_ASecondWindCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArenaManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaManager_Statics::NewProp_ArenaClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaManager_Statics::NewProp_ArenaSpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaManager_Statics::NewProp_SafeZoneLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaManager_Statics::NewProp_MaxArenas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaManager_Statics::NewProp_CurrentArenaNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaManager_Statics::NewProp_TotalFragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaManager_Statics::NewProp_CurrentGamePhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaManager_Statics::NewProp_CurrentGamePhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaManager_Statics::NewProp_CurrentArena,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaManager_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArenaManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArenaManager_Statics::ClassParams = {
	&AArenaManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AArenaManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AArenaManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AArenaManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArenaManager()
{
	if (!Z_Registration_Info_UClass_AArenaManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArenaManager.OuterSingleton, Z_Construct_UClass_AArenaManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArenaManager.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<AArenaManager>()
{
	return AArenaManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaManager);
AArenaManager::~AArenaManager() {}
// End Class AArenaManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGamePhase_StaticEnum, TEXT("EGamePhase"), &Z_Registration_Info_UEnum_EGamePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3749785450U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArenaManager, AArenaManager::StaticClass, TEXT("AArenaManager"), &Z_Registration_Info_UClass_AArenaManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArenaManager), 3822352938U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_2442708698(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaManager_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
