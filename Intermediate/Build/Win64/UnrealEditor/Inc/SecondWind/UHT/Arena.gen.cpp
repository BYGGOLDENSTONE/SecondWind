// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Actors/Arena.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArena() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SECONDWIND_API UClass* Z_Construct_UClass_AArena();
SECONDWIND_API UClass* Z_Construct_UClass_AArena_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaEnemy_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindCharacter_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EArenaState();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EArenaState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArenaState;
static UEnum* EArenaState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArenaState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArenaState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EArenaState, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EArenaState"));
	}
	return Z_Registration_Info_UEnum_EArenaState.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EArenaState>()
{
	return EArenaState_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EArenaState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Defeat.Name", "EArenaState::Defeat" },
		{ "Inactive.Name", "EArenaState::Inactive" },
		{ "InCombat.Name", "EArenaState::InCombat" },
		{ "ModuleRelativePath", "Actors/Arena.h" },
		{ "Preparing.Name", "EArenaState::Preparing" },
		{ "Victory.Name", "EArenaState::Victory" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArenaState::Inactive", (int64)EArenaState::Inactive },
		{ "EArenaState::Preparing", (int64)EArenaState::Preparing },
		{ "EArenaState::InCombat", (int64)EArenaState::InCombat },
		{ "EArenaState::Victory", (int64)EArenaState::Victory },
		{ "EArenaState::Defeat", (int64)EArenaState::Defeat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EArenaState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EArenaState",
	"EArenaState",
	Z_Construct_UEnum_SecondWind_EArenaState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EArenaState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EArenaState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EArenaState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EArenaState()
{
	if (!Z_Registration_Info_UEnum_EArenaState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArenaState.InnerSingleton, Z_Construct_UEnum_SecondWind_EArenaState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArenaState.InnerSingleton;
}
// End Enum EArenaState

// Begin Class AArena Function OnEnemyDefeated
struct Z_Construct_UFunction_AArena_OnEnemyDefeated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArena_OnEnemyDefeated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArena, nullptr, "OnEnemyDefeated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArena_OnEnemyDefeated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArena_OnEnemyDefeated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AArena_OnEnemyDefeated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArena_OnEnemyDefeated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArena::execOnEnemyDefeated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyDefeated();
	P_NATIVE_END;
}
// End Class AArena Function OnEnemyDefeated

// Begin Class AArena Function OnPlayerDefeated
struct Z_Construct_UFunction_AArena_OnPlayerDefeated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArena_OnPlayerDefeated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArena, nullptr, "OnPlayerDefeated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArena_OnPlayerDefeated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArena_OnPlayerDefeated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AArena_OnPlayerDefeated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArena_OnPlayerDefeated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArena::execOnPlayerDefeated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerDefeated();
	P_NATIVE_END;
}
// End Class AArena Function OnPlayerDefeated

// Begin Class AArena
void AArena::StaticRegisterNativesAArena()
{
	UClass* Class = AArena::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnemyDefeated", &AArena::execOnEnemyDefeated },
		{ "OnPlayerDefeated", &AArena::execOnPlayerDefeated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArena);
UClass* Z_Construct_UClass_AArena_NoRegister()
{
	return AArena::StaticClass();
}
struct Z_Construct_UClass_AArena_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Arena.h" },
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaRadius_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSpawnOffset_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnOffset_MetaData[] = {
		{ "Category", "Arena" },
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaNumber_MetaData[] = {
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEnemy_MetaData[] = {
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Actors/Arena.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArenaRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSpawnOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EnemySpawnOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArenaNumber;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentEnemy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AArena_OnEnemyDefeated, "OnEnemyDefeated" }, // 967048913
		{ &Z_Construct_UFunction_AArena_OnPlayerDefeated, "OnPlayerDefeated" }, // 86824734
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArena>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArena, EnemyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AArenaEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemyClass_MetaData), NewProp_EnemyClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_ArenaRadius = { "ArenaRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArena, ArenaRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaRadius_MetaData), NewProp_ArenaRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_PlayerSpawnOffset = { "PlayerSpawnOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArena, PlayerSpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSpawnOffset_MetaData), NewProp_PlayerSpawnOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_EnemySpawnOffset = { "EnemySpawnOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArena, EnemySpawnOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnemySpawnOffset_MetaData), NewProp_EnemySpawnOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_ArenaNumber = { "ArenaNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArena, ArenaNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaNumber_MetaData), NewProp_ArenaNumber_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArena_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArena, CurrentState), Z_Construct_UEnum_SecondWind_EArenaState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 2374607439
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_CurrentEnemy = { "CurrentEnemy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArena, CurrentEnemy), Z_Construct_UClass_AArenaEnemy_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEnemy_MetaData), NewProp_CurrentEnemy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArena_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArena, PlayerCharacter), Z_Construct_UClass_ASecondWindCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArena_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_EnemyClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_ArenaRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_PlayerSpawnOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_EnemySpawnOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_ArenaNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_CurrentEnemy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArena_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArena_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArena_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArena_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArena_Statics::ClassParams = {
	&AArena::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AArena_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AArena_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArena_Statics::Class_MetaDataParams), Z_Construct_UClass_AArena_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArena()
{
	if (!Z_Registration_Info_UClass_AArena.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArena.OuterSingleton, Z_Construct_UClass_AArena_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArena.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<AArena>()
{
	return AArena::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArena);
AArena::~AArena() {}
// End Class AArena

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EArenaState_StaticEnum, TEXT("EArenaState"), &Z_Registration_Info_UEnum_EArenaState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2374607439U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArena, AArena::StaticClass, TEXT("AArena"), &Z_Registration_Info_UClass_AArena, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArena), 263113373U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_1239712977(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_Arena_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
