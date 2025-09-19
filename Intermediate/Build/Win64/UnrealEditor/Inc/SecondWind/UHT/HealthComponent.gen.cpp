// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/HealthComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UBlockingComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UHealthComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnDeath__DelegateSignature();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHealthDepleted__DelegateSignature();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnPhaseTransition__DelegateSignature();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_UHealthComponent_OnEnterFinisherState__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Delegate FOnHealthChanged
struct Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics
{
	struct _Script_SecondWind_eventOnHealthChanged_Parms
	{
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnHealthChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::_Script_SecondWind_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::_Script_SecondWind_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealth)
{
	struct _Script_SecondWind_eventOnHealthChanged_Parms
	{
		float NewHealth;
	};
	_Script_SecondWind_eventOnHealthChanged_Parms Parms;
	Parms.NewHealth=NewHealth;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthChanged

// Begin Delegate FOnHealthDepleted
struct Z_Construct_UDelegateFunction_SecondWind_OnHealthDepleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnHealthDepleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnHealthDepleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnHealthDepleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnHealthDepleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHealthDepleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnHealthDepleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthDepleted_DelegateWrapper(const FMulticastScriptDelegate& OnHealthDepleted)
{
	OnHealthDepleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHealthDepleted

// Begin Delegate FOnPhaseChanged
struct Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics
{
	struct _Script_SecondWind_eventOnPhaseChanged_Parms
	{
		int32 NewPhase;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPhase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhase = { "NewPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnPhaseChanged_Parms, NewPhase), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::NewProp_NewPhase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnPhaseChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::_Script_SecondWind_eventOnPhaseChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::_Script_SecondWind_eventOnPhaseChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPhaseChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPhaseChanged, int32 NewPhase)
{
	struct _Script_SecondWind_eventOnPhaseChanged_Parms
	{
		int32 NewPhase;
	};
	_Script_SecondWind_eventOnPhaseChanged_Parms Parms;
	Parms.NewPhase=NewPhase;
	OnPhaseChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPhaseChanged

// Begin Delegate FOnPhaseTransition
struct Z_Construct_UDelegateFunction_SecondWind_OnPhaseTransition__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnPhaseTransition__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnPhaseTransition__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnPhaseTransition__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnPhaseTransition__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnPhaseTransition__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnPhaseTransition__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPhaseTransition_DelegateWrapper(const FMulticastScriptDelegate& OnPhaseTransition)
{
	OnPhaseTransition.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnPhaseTransition

// Begin Delegate FOnDeath
struct Z_Construct_UDelegateFunction_SecondWind_OnDeath__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnDeath__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnDeath__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnDeath__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnDeath__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnDeath__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnDeath__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDeath_DelegateWrapper(const FMulticastScriptDelegate& OnDeath)
{
	OnDeath.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDeath

// Begin Delegate FOnEnterFinisherState
struct Z_Construct_UDelegateFunction_UHealthComponent_OnEnterFinisherState__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UHealthComponent_OnEnterFinisherState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "OnEnterFinisherState__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UHealthComponent_OnEnterFinisherState__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UHealthComponent_OnEnterFinisherState__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UHealthComponent_OnEnterFinisherState__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UHealthComponent_OnEnterFinisherState__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UHealthComponent::FOnEnterFinisherState_DelegateWrapper(const FMulticastScriptDelegate& OnEnterFinisherState)
{
	OnEnterFinisherState.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnEnterFinisherState

// Begin Class UHealthComponent Function ExecuteFinisher
struct Z_Construct_UFunction_UHealthComponent_ExecuteFinisher_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_ExecuteFinisher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "ExecuteFinisher", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_ExecuteFinisher_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_ExecuteFinisher_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthComponent_ExecuteFinisher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_ExecuteFinisher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execExecuteFinisher)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteFinisher();
	P_NATIVE_END;
}
// End Class UHealthComponent Function ExecuteFinisher

// Begin Class UHealthComponent Function GetCurrentHealth
struct Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics
{
	struct HealthComponent_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::HealthComponent_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::HealthComponent_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// End Class UHealthComponent Function GetCurrentHealth

// Begin Class UHealthComponent Function GetCurrentPhase
struct Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics
{
	struct HealthComponent_eventGetCurrentPhase_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventGetCurrentPhase_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "GetCurrentPhase", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::HealthComponent_eventGetCurrentPhase_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::HealthComponent_eventGetCurrentPhase_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_GetCurrentPhase()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_GetCurrentPhase_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execGetCurrentPhase)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentPhase();
	P_NATIVE_END;
}
// End Class UHealthComponent Function GetCurrentPhase

// Begin Class UHealthComponent Function GetMaxHealth
struct Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics
{
	struct HealthComponent_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::HealthComponent_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::HealthComponent_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class UHealthComponent Function GetMaxHealth

// Begin Class UHealthComponent Function GetMaxPhases
struct Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics
{
	struct HealthComponent_eventGetMaxPhases_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventGetMaxPhases_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "GetMaxPhases", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::HealthComponent_eventGetMaxPhases_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::HealthComponent_eventGetMaxPhases_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_GetMaxPhases()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_GetMaxPhases_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execGetMaxPhases)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxPhases();
	P_NATIVE_END;
}
// End Class UHealthComponent Function GetMaxPhases

// Begin Class UHealthComponent Function HealToFull
struct Z_Construct_UFunction_UHealthComponent_HealToFull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_HealToFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "HealToFull", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_HealToFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_HealToFull_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthComponent_HealToFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_HealToFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execHealToFull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HealToFull();
	P_NATIVE_END;
}
// End Class UHealthComponent Function HealToFull

// Begin Class UHealthComponent Function IsAlive
struct Z_Construct_UFunction_UHealthComponent_IsAlive_Statics
{
	struct HealthComponent_eventIsAlive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HealthComponent_eventIsAlive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HealthComponent_eventIsAlive_Parms), &Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "IsAlive", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::HealthComponent_eventIsAlive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::HealthComponent_eventIsAlive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_IsAlive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_IsAlive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execIsAlive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAlive();
	P_NATIVE_END;
}
// End Class UHealthComponent Function IsAlive

// Begin Class UHealthComponent Function IsInFinisherState
struct Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics
{
	struct HealthComponent_eventIsInFinisherState_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HealthComponent_eventIsInFinisherState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HealthComponent_eventIsInFinisherState_Parms), &Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "IsInFinisherState", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::HealthComponent_eventIsInFinisherState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::HealthComponent_eventIsInFinisherState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_IsInFinisherState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_IsInFinisherState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execIsInFinisherState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInFinisherState();
	P_NATIVE_END;
}
// End Class UHealthComponent Function IsInFinisherState

// Begin Class UHealthComponent Function IsTrulyDead
struct Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics
{
	struct HealthComponent_eventIsTrulyDead_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HealthComponent_eventIsTrulyDead_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HealthComponent_eventIsTrulyDead_Parms), &Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "IsTrulyDead", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::HealthComponent_eventIsTrulyDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::HealthComponent_eventIsTrulyDead_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_IsTrulyDead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_IsTrulyDead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execIsTrulyDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTrulyDead();
	P_NATIVE_END;
}
// End Class UHealthComponent Function IsTrulyDead

// Begin Class UHealthComponent Function ResetHealth
struct Z_Construct_UFunction_UHealthComponent_ResetHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_ResetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "ResetHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_ResetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_ResetHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHealthComponent_ResetHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_ResetHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execResetHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetHealth();
	P_NATIVE_END;
}
// End Class UHealthComponent Function ResetHealth

// Begin Class UHealthComponent Function SetBlockingComponent
struct Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics
{
	struct HealthComponent_eventSetBlockingComponent_Parms
	{
		UBlockingComponent* InBlockingComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBlockingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlockingComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::NewProp_InBlockingComponent = { "InBlockingComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventSetBlockingComponent_Parms, InBlockingComponent), Z_Construct_UClass_UBlockingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBlockingComponent_MetaData), NewProp_InBlockingComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::NewProp_InBlockingComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "SetBlockingComponent", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::HealthComponent_eventSetBlockingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::HealthComponent_eventSetBlockingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_SetBlockingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_SetBlockingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execSetBlockingComponent)
{
	P_GET_OBJECT(UBlockingComponent,Z_Param_InBlockingComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlockingComponent(Z_Param_InBlockingComponent);
	P_NATIVE_END;
}
// End Class UHealthComponent Function SetBlockingComponent

// Begin Class UHealthComponent Function SetCurrentHealth
struct Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics
{
	struct HealthComponent_eventSetCurrentHealth_Parms
	{
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventSetCurrentHealth_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "SetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::HealthComponent_eventSetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::HealthComponent_eventSetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_SetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_SetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execSetCurrentHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentHealth(Z_Param_NewHealth);
	P_NATIVE_END;
}
// End Class UHealthComponent Function SetCurrentHealth

// Begin Class UHealthComponent Function SetMaxHealth
struct Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics
{
	struct HealthComponent_eventSetMaxHealth_Parms
	{
		float NewMaxHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventSetMaxHealth_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::NewProp_NewMaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "SetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::HealthComponent_eventSetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::HealthComponent_eventSetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_SetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_SetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execSetMaxHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxHealth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxHealth(Z_Param_NewMaxHealth);
	P_NATIVE_END;
}
// End Class UHealthComponent Function SetMaxHealth

// Begin Class UHealthComponent Function SetMaxPhases
struct Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics
{
	struct HealthComponent_eventSetMaxPhases_Parms
	{
		int32 NewMaxPhases;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewMaxPhases;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::NewProp_NewMaxPhases = { "NewMaxPhases", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventSetMaxPhases_Parms, NewMaxPhases), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::NewProp_NewMaxPhases,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "SetMaxPhases", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::HealthComponent_eventSetMaxPhases_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::HealthComponent_eventSetMaxPhases_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_SetMaxPhases()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_SetMaxPhases_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execSetMaxPhases)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewMaxPhases);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxPhases(Z_Param_NewMaxPhases);
	P_NATIVE_END;
}
// End Class UHealthComponent Function SetMaxPhases

// Begin Class UHealthComponent Function TakeDamage
struct Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics
{
	struct HealthComponent_eventTakeDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
		const UDamageType* DamageType;
		AController* InstigatedBy;
		AActor* DamageCauser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageType_MetaData), NewProp_DamageType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_InstigatedBy = { "InstigatedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HealthComponent_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_InstigatedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::NewProp_DamageCauser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthComponent, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::HealthComponent_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::HealthComponent_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHealthComponent_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHealthComponent_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHealthComponent::execTakeDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(UDamageType,Z_Param_DamageType);
	P_GET_OBJECT(AController,Z_Param_InstigatedBy);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_DamagedActor,Z_Param_Damage,Z_Param_DamageType,Z_Param_InstigatedBy,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class UHealthComponent Function TakeDamage

// Begin Class UHealthComponent
void UHealthComponent::StaticRegisterNativesUHealthComponent()
{
	UClass* Class = UHealthComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExecuteFinisher", &UHealthComponent::execExecuteFinisher },
		{ "GetCurrentHealth", &UHealthComponent::execGetCurrentHealth },
		{ "GetCurrentPhase", &UHealthComponent::execGetCurrentPhase },
		{ "GetMaxHealth", &UHealthComponent::execGetMaxHealth },
		{ "GetMaxPhases", &UHealthComponent::execGetMaxPhases },
		{ "HealToFull", &UHealthComponent::execHealToFull },
		{ "IsAlive", &UHealthComponent::execIsAlive },
		{ "IsInFinisherState", &UHealthComponent::execIsInFinisherState },
		{ "IsTrulyDead", &UHealthComponent::execIsTrulyDead },
		{ "ResetHealth", &UHealthComponent::execResetHealth },
		{ "SetBlockingComponent", &UHealthComponent::execSetBlockingComponent },
		{ "SetCurrentHealth", &UHealthComponent::execSetCurrentHealth },
		{ "SetMaxHealth", &UHealthComponent::execSetMaxHealth },
		{ "SetMaxPhases", &UHealthComponent::execSetMaxPhases },
		{ "TakeDamage", &UHealthComponent::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthComponent);
UClass* Z_Construct_UClass_UHealthComponent_NoRegister()
{
	return UHealthComponent::StaticClass();
}
struct Z_Construct_UClass_UHealthComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/HealthComponent.h" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthDepleted_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPhaseChanged_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPhaseTransition_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeath_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnterFinisherState_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPhases_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/HealthComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthDepleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhaseChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhaseTransition;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDeath;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnterFinisherState;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPhases;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthComponent_ExecuteFinisher, "ExecuteFinisher" }, // 3311778179
		{ &Z_Construct_UFunction_UHealthComponent_GetCurrentHealth, "GetCurrentHealth" }, // 1746650128
		{ &Z_Construct_UFunction_UHealthComponent_GetCurrentPhase, "GetCurrentPhase" }, // 1773731663
		{ &Z_Construct_UFunction_UHealthComponent_GetMaxHealth, "GetMaxHealth" }, // 3108686473
		{ &Z_Construct_UFunction_UHealthComponent_GetMaxPhases, "GetMaxPhases" }, // 47949175
		{ &Z_Construct_UFunction_UHealthComponent_HealToFull, "HealToFull" }, // 377243087
		{ &Z_Construct_UFunction_UHealthComponent_IsAlive, "IsAlive" }, // 3499508117
		{ &Z_Construct_UFunction_UHealthComponent_IsInFinisherState, "IsInFinisherState" }, // 646565399
		{ &Z_Construct_UFunction_UHealthComponent_IsTrulyDead, "IsTrulyDead" }, // 3360478158
		{ &Z_Construct_UDelegateFunction_UHealthComponent_OnEnterFinisherState__DelegateSignature, "OnEnterFinisherState__DelegateSignature" }, // 4238130617
		{ &Z_Construct_UFunction_UHealthComponent_ResetHealth, "ResetHealth" }, // 4262297127
		{ &Z_Construct_UFunction_UHealthComponent_SetBlockingComponent, "SetBlockingComponent" }, // 2762564697
		{ &Z_Construct_UFunction_UHealthComponent_SetCurrentHealth, "SetCurrentHealth" }, // 509768876
		{ &Z_Construct_UFunction_UHealthComponent_SetMaxHealth, "SetMaxHealth" }, // 641662042
		{ &Z_Construct_UFunction_UHealthComponent_SetMaxPhases, "SetMaxPhases" }, // 335159666
		{ &Z_Construct_UFunction_UHealthComponent_TakeDamage, "TakeDamage" }, // 534615487
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnHealthChanged), Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 1668535252
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthDepleted = { "OnHealthDepleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnHealthDepleted), Z_Construct_UDelegateFunction_SecondWind_OnHealthDepleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthDepleted_MetaData), NewProp_OnHealthDepleted_MetaData) }; // 257394377
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnPhaseChanged = { "OnPhaseChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnPhaseChanged), Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPhaseChanged_MetaData), NewProp_OnPhaseChanged_MetaData) }; // 3592385850
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnPhaseTransition = { "OnPhaseTransition", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnPhaseTransition), Z_Construct_UDelegateFunction_SecondWind_OnPhaseTransition__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPhaseTransition_MetaData), NewProp_OnPhaseTransition_MetaData) }; // 771687229
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath = { "OnDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnDeath), Z_Construct_UDelegateFunction_SecondWind_OnDeath__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeath_MetaData), NewProp_OnDeath_MetaData) }; // 3746713667
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnEnterFinisherState = { "OnEnterFinisherState", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, OnEnterFinisherState), Z_Construct_UDelegateFunction_UHealthComponent_OnEnterFinisherState__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnterFinisherState_MetaData), NewProp_OnEnterFinisherState_MetaData) }; // 4238130617
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxPhases = { "MaxPhases", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthComponent, MaxPhases), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPhases_MetaData), NewProp_MaxPhases_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnHealthDepleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnPhaseChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnPhaseTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_OnEnterFinisherState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthComponent_Statics::NewProp_MaxPhases,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthComponent_Statics::ClassParams = {
	&UHealthComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHealthComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthComponent()
{
	if (!Z_Registration_Info_UClass_UHealthComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthComponent.OuterSingleton, Z_Construct_UClass_UHealthComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UHealthComponent>()
{
	return UHealthComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthComponent);
UHealthComponent::~UHealthComponent() {}
// End Class UHealthComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthComponent, UHealthComponent::StaticClass, TEXT("UHealthComponent"), &Z_Registration_Info_UClass_UHealthComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthComponent), 80429221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_256047962(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HealthComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
