// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Actors/TrainingDummy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrainingDummy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SECONDWIND_API UClass* Z_Construct_UClass_ATrainingDummy();
SECONDWIND_API UClass* Z_Construct_UClass_ATrainingDummy_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UAnimationComponentSimplified_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UWeakSideComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class ATrainingDummy Function OnEnterFinisherState
struct Z_Construct_UFunction_ATrainingDummy_OnEnterFinisherState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainingDummy_OnEnterFinisherState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainingDummy, nullptr, "OnEnterFinisherState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainingDummy_OnEnterFinisherState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainingDummy_OnEnterFinisherState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATrainingDummy_OnEnterFinisherState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainingDummy_OnEnterFinisherState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainingDummy::execOnEnterFinisherState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnterFinisherState();
	P_NATIVE_END;
}
// End Class ATrainingDummy Function OnEnterFinisherState

// Begin Class ATrainingDummy Function OnHealthDepleted
struct Z_Construct_UFunction_ATrainingDummy_OnHealthDepleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainingDummy_OnHealthDepleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainingDummy, nullptr, "OnHealthDepleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainingDummy_OnHealthDepleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainingDummy_OnHealthDepleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATrainingDummy_OnHealthDepleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainingDummy_OnHealthDepleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainingDummy::execOnHealthDepleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHealthDepleted();
	P_NATIVE_END;
}
// End Class ATrainingDummy Function OnHealthDepleted

// Begin Class ATrainingDummy Function OnPhaseChanged
struct Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics
{
	struct TrainingDummy_eventOnPhaseChanged_Parms
	{
		int32 NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrainingDummy_eventOnPhaseChanged_Parms, NewPhase), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainingDummy, nullptr, "OnPhaseChanged", nullptr, nullptr, Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::TrainingDummy_eventOnPhaseChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::TrainingDummy_eventOnPhaseChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainingDummy::execOnPhaseChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewPhase);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPhaseChanged(Z_Param_NewPhase);
	P_NATIVE_END;
}
// End Class ATrainingDummy Function OnPhaseChanged

// Begin Class ATrainingDummy Function OnPhaseTransition
struct Z_Construct_UFunction_ATrainingDummy_OnPhaseTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrainingDummy_OnPhaseTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrainingDummy, nullptr, "OnPhaseTransition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATrainingDummy_OnPhaseTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATrainingDummy_OnPhaseTransition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATrainingDummy_OnPhaseTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATrainingDummy_OnPhaseTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATrainingDummy::execOnPhaseTransition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPhaseTransition();
	P_NATIVE_END;
}
// End Class ATrainingDummy Function OnPhaseTransition

// Begin Class ATrainingDummy
void ATrainingDummy::StaticRegisterNativesATrainingDummy()
{
	UClass* Class = ATrainingDummy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnEnterFinisherState", &ATrainingDummy::execOnEnterFinisherState },
		{ "OnHealthDepleted", &ATrainingDummy::execOnHealthDepleted },
		{ "OnPhaseChanged", &ATrainingDummy::execOnPhaseChanged },
		{ "OnPhaseTransition", &ATrainingDummy::execOnPhaseTransition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrainingDummy);
UClass* Z_Construct_UClass_ATrainingDummy_NoRegister()
{
	return ATrainingDummy::StaticClass();
}
struct Z_Construct_UClass_ATrainingDummy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Actors/TrainingDummy.h" },
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakSideComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "Training Dummy" },
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackInterval_MetaData[] = {
		{ "Category", "Training Dummy" },
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoAttackPlayer_MetaData[] = {
		{ "Category", "Training Dummy" },
		{ "ModuleRelativePath", "Actors/TrainingDummy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeakSideComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackInterval;
	static void NewProp_bAutoAttackPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoAttackPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrainingDummy_OnEnterFinisherState, "OnEnterFinisherState" }, // 3356234870
		{ &Z_Construct_UFunction_ATrainingDummy_OnHealthDepleted, "OnHealthDepleted" }, // 3439798476
		{ &Z_Construct_UFunction_ATrainingDummy_OnPhaseChanged, "OnPhaseChanged" }, // 2303368213
		{ &Z_Construct_UFunction_ATrainingDummy_OnPhaseTransition, "OnPhaseTransition" }, // 1284530539
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrainingDummy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainingDummy_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainingDummy, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainingDummy_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainingDummy, CombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainingDummy_Statics::NewProp_WeakSideComponent = { "WeakSideComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainingDummy, WeakSideComponent), Z_Construct_UClass_UWeakSideComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakSideComponent_MetaData), NewProp_WeakSideComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrainingDummy_Statics::NewProp_AnimationComponent = { "AnimationComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainingDummy, AnimationComponent), Z_Construct_UClass_UAnimationComponentSimplified_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationComponent_MetaData), NewProp_AnimationComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainingDummy_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainingDummy, RespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnDelay_MetaData), NewProp_RespawnDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrainingDummy_Statics::NewProp_AttackInterval = { "AttackInterval", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrainingDummy, AttackInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackInterval_MetaData), NewProp_AttackInterval_MetaData) };
void Z_Construct_UClass_ATrainingDummy_Statics::NewProp_bAutoAttackPlayer_SetBit(void* Obj)
{
	((ATrainingDummy*)Obj)->bAutoAttackPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATrainingDummy_Statics::NewProp_bAutoAttackPlayer = { "bAutoAttackPlayer", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATrainingDummy), &Z_Construct_UClass_ATrainingDummy_Statics::NewProp_bAutoAttackPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoAttackPlayer_MetaData), NewProp_bAutoAttackPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrainingDummy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainingDummy_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainingDummy_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainingDummy_Statics::NewProp_WeakSideComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainingDummy_Statics::NewProp_AnimationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainingDummy_Statics::NewProp_RespawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainingDummy_Statics::NewProp_AttackInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrainingDummy_Statics::NewProp_bAutoAttackPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainingDummy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATrainingDummy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainingDummy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrainingDummy_Statics::ClassParams = {
	&ATrainingDummy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATrainingDummy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATrainingDummy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrainingDummy_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrainingDummy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATrainingDummy()
{
	if (!Z_Registration_Info_UClass_ATrainingDummy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrainingDummy.OuterSingleton, Z_Construct_UClass_ATrainingDummy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrainingDummy.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<ATrainingDummy>()
{
	return ATrainingDummy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATrainingDummy);
ATrainingDummy::~ATrainingDummy() {}
// End Class ATrainingDummy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrainingDummy, ATrainingDummy::StaticClass, TEXT("ATrainingDummy"), &Z_Registration_Info_UClass_ATrainingDummy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrainingDummy), 2034468582U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_151708333(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_TrainingDummy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
