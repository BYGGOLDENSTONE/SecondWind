// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Actors/ArenaEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaEnemy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaEnemy();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaEnemy_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaZone_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_AEnemySpawnPoint_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UWeakSideComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class AArenaEnemy Function EnterFinisherState
struct Z_Construct_UFunction_AArenaEnemy_EnterFinisherState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaEnemy_EnterFinisherState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaEnemy, nullptr, "EnterFinisherState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaEnemy_EnterFinisherState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArenaEnemy_EnterFinisherState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AArenaEnemy_EnterFinisherState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArenaEnemy_EnterFinisherState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArenaEnemy::execEnterFinisherState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnterFinisherState();
	P_NATIVE_END;
}
// End Class AArenaEnemy Function EnterFinisherState

// Begin Class AArenaEnemy Function OnEnemyDeath
struct Z_Construct_UFunction_AArenaEnemy_OnEnemyDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaEnemy_OnEnemyDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaEnemy, nullptr, "OnEnemyDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaEnemy_OnEnemyDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArenaEnemy_OnEnemyDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AArenaEnemy_OnEnemyDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArenaEnemy_OnEnemyDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArenaEnemy::execOnEnemyDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyDeath();
	P_NATIVE_END;
}
// End Class AArenaEnemy Function OnEnemyDeath

// Begin Class AArenaEnemy Function OnPhaseTransition
struct Z_Construct_UFunction_AArenaEnemy_OnPhaseTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaEnemy_OnPhaseTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaEnemy, nullptr, "OnPhaseTransition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaEnemy_OnPhaseTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArenaEnemy_OnPhaseTransition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AArenaEnemy_OnPhaseTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArenaEnemy_OnPhaseTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArenaEnemy::execOnPhaseTransition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPhaseTransition();
	P_NATIVE_END;
}
// End Class AArenaEnemy Function OnPhaseTransition

// Begin Class AArenaEnemy
void AArenaEnemy::StaticRegisterNativesAArenaEnemy()
{
	UClass* Class = AArenaEnemy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnterFinisherState", &AArenaEnemy::execEnterFinisherState },
		{ "OnEnemyDeath", &AArenaEnemy::execOnEnemyDeath },
		{ "OnPhaseTransition", &AArenaEnemy::execOnPhaseTransition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArenaEnemy);
UClass* Z_Construct_UClass_AArenaEnemy_NoRegister()
{
	return AArenaEnemy::StaticClass();
}
struct Z_Construct_UClass_AArenaEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/ArenaEnemy.h" },
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakSideComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "Combat (Deprecated - Use CombatComponent)" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Legacy attack values - kept for backward compatibility but use CombatComponent instead\n" },
#endif
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Legacy attack values - kept for backward compatibility but use CombatComponent instead" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Combat (Deprecated - Use CombatComponent)" },
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArenaLevel_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhase_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPhases_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerZone_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeakSideComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ArenaLevel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPhase;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPhases;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerZone;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AArenaEnemy_EnterFinisherState, "EnterFinisherState" }, // 1916824088
		{ &Z_Construct_UFunction_AArenaEnemy_OnEnemyDeath, "OnEnemyDeath" }, // 3053041987
		{ &Z_Construct_UFunction_AArenaEnemy_OnPhaseTransition, "OnPhaseTransition" }, // 2985673581
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaEnemy_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaEnemy, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaEnemy_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaEnemy, CombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaEnemy_Statics::NewProp_WeakSideComponent = { "WeakSideComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaEnemy, WeakSideComponent), Z_Construct_UClass_UWeakSideComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakSideComponent_MetaData), NewProp_WeakSideComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArenaEnemy_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaEnemy, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArenaEnemy_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaEnemy, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArenaEnemy_Statics::NewProp_ArenaLevel = { "ArenaLevel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaEnemy, ArenaLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArenaLevel_MetaData), NewProp_ArenaLevel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArenaEnemy_Statics::NewProp_CurrentPhase = { "CurrentPhase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaEnemy, CurrentPhase), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhase_MetaData), NewProp_CurrentPhase_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AArenaEnemy_Statics::NewProp_MaxPhases = { "MaxPhases", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaEnemy, MaxPhases), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPhases_MetaData), NewProp_MaxPhases_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaEnemy_Statics::NewProp_OwnerZone = { "OwnerZone", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaEnemy, OwnerZone), Z_Construct_UClass_AArenaZone_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerZone_MetaData), NewProp_OwnerZone_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaEnemy_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaEnemy, SpawnPoint), Z_Construct_UClass_AEnemySpawnPoint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPoint_MetaData), NewProp_SpawnPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArenaEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaEnemy_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaEnemy_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaEnemy_Statics::NewProp_WeakSideComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaEnemy_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaEnemy_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaEnemy_Statics::NewProp_ArenaLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaEnemy_Statics::NewProp_CurrentPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaEnemy_Statics::NewProp_MaxPhases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaEnemy_Statics::NewProp_OwnerZone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaEnemy_Statics::NewProp_SpawnPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArenaEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArenaEnemy_Statics::ClassParams = {
	&AArenaEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AArenaEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AArenaEnemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AArenaEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArenaEnemy()
{
	if (!Z_Registration_Info_UClass_AArenaEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArenaEnemy.OuterSingleton, Z_Construct_UClass_AArenaEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArenaEnemy.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<AArenaEnemy>()
{
	return AArenaEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaEnemy);
AArenaEnemy::~AArenaEnemy() {}
// End Class AArenaEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArenaEnemy, AArenaEnemy::StaticClass, TEXT("AArenaEnemy"), &Z_Registration_Info_UClass_AArenaEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArenaEnemy), 1628342246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_2703767509(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
