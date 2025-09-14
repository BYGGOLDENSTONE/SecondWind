// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/HackComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UHackComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UHackComponent_NoRegister();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnCountersReset__DelegateSignature();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHackAvailable__DelegateSignature();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHackExecuted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Delegate FOnCounterProgressChanged
struct Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics
{
	struct _Script_SecondWind_eventOnCounterProgressChanged_Parms
	{
		int32 CurrentCounters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCounters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::NewProp_CurrentCounters = { "CurrentCounters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnCounterProgressChanged_Parms, CurrentCounters), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::NewProp_CurrentCounters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnCounterProgressChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::_Script_SecondWind_eventOnCounterProgressChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::_Script_SecondWind_eventOnCounterProgressChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCounterProgressChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCounterProgressChanged, int32 CurrentCounters)
{
	struct _Script_SecondWind_eventOnCounterProgressChanged_Parms
	{
		int32 CurrentCounters;
	};
	_Script_SecondWind_eventOnCounterProgressChanged_Parms Parms;
	Parms.CurrentCounters=CurrentCounters;
	OnCounterProgressChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCounterProgressChanged

// Begin Delegate FOnHackAvailable
struct Z_Construct_UDelegateFunction_SecondWind_OnHackAvailable__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnHackAvailable__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnHackAvailable__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnHackAvailable__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnHackAvailable__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHackAvailable__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnHackAvailable__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHackAvailable_DelegateWrapper(const FMulticastScriptDelegate& OnHackAvailable)
{
	OnHackAvailable.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHackAvailable

// Begin Delegate FOnHackExecuted
struct Z_Construct_UDelegateFunction_SecondWind_OnHackExecuted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnHackExecuted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnHackExecuted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnHackExecuted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnHackExecuted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHackExecuted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnHackExecuted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHackExecuted_DelegateWrapper(const FMulticastScriptDelegate& OnHackExecuted)
{
	OnHackExecuted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnHackExecuted

// Begin Delegate FOnCountersReset
struct Z_Construct_UDelegateFunction_SecondWind_OnCountersReset__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnCountersReset__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnCountersReset__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnCountersReset__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnCountersReset__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnCountersReset__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnCountersReset__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCountersReset_DelegateWrapper(const FMulticastScriptDelegate& OnCountersReset)
{
	OnCountersReset.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnCountersReset

// Begin Class UHackComponent Function AddCounter
struct Z_Construct_UFunction_UHackComponent_AddCounter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Counter Management\n" },
#endif
		{ "ModuleRelativePath", "Components/HackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Counter Management" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackComponent_AddCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackComponent, nullptr, "AddCounter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_AddCounter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackComponent_AddCounter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHackComponent_AddCounter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackComponent_AddCounter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackComponent::execAddCounter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddCounter();
	P_NATIVE_END;
}
// End Class UHackComponent Function AddCounter

// Begin Class UHackComponent Function GetCurrentCounters
struct Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics
{
	struct HackComponent_eventGetCurrentCounters_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HackComponent_eventGetCurrentCounters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackComponent, nullptr, "GetCurrentCounters", nullptr, nullptr, Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::HackComponent_eventGetCurrentCounters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::HackComponent_eventGetCurrentCounters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHackComponent_GetCurrentCounters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackComponent_GetCurrentCounters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackComponent::execGetCurrentCounters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentCounters();
	P_NATIVE_END;
}
// End Class UHackComponent Function GetCurrentCounters

// Begin Class UHackComponent Function GetRequiredCounters
struct Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics
{
	struct HackComponent_eventGetRequiredCounters_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HackComponent_eventGetRequiredCounters_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackComponent, nullptr, "GetRequiredCounters", nullptr, nullptr, Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::HackComponent_eventGetRequiredCounters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::HackComponent_eventGetRequiredCounters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHackComponent_GetRequiredCounters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackComponent_GetRequiredCounters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackComponent::execGetRequiredCounters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRequiredCounters();
	P_NATIVE_END;
}
// End Class UHackComponent Function GetRequiredCounters

// Begin Class UHackComponent Function GetUnblockedHits
struct Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics
{
	struct HackComponent_eventGetUnblockedHits_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HackComponent_eventGetUnblockedHits_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackComponent, nullptr, "GetUnblockedHits", nullptr, nullptr, Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::HackComponent_eventGetUnblockedHits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::HackComponent_eventGetUnblockedHits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHackComponent_GetUnblockedHits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackComponent_GetUnblockedHits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackComponent::execGetUnblockedHits)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetUnblockedHits();
	P_NATIVE_END;
}
// End Class UHackComponent Function GetUnblockedHits

// Begin Class UHackComponent Function IsHackAvailable
struct Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics
{
	struct HackComponent_eventIsHackAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HackComponent_eventIsHackAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HackComponent_eventIsHackAvailable_Parms), &Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackComponent, nullptr, "IsHackAvailable", nullptr, nullptr, Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::HackComponent_eventIsHackAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::HackComponent_eventIsHackAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHackComponent_IsHackAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackComponent_IsHackAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackComponent::execIsHackAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsHackAvailable();
	P_NATIVE_END;
}
// End Class UHackComponent Function IsHackAvailable

// Begin Class UHackComponent Function RegisterUnblockedHit
struct Z_Construct_UFunction_UHackComponent_RegisterUnblockedHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackComponent_RegisterUnblockedHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackComponent, nullptr, "RegisterUnblockedHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_RegisterUnblockedHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackComponent_RegisterUnblockedHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHackComponent_RegisterUnblockedHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackComponent_RegisterUnblockedHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackComponent::execRegisterUnblockedHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterUnblockedHit();
	P_NATIVE_END;
}
// End Class UHackComponent Function RegisterUnblockedHit

// Begin Class UHackComponent Function ResetCounters
struct Z_Construct_UFunction_UHackComponent_ResetCounters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackComponent_ResetCounters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackComponent, nullptr, "ResetCounters", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_ResetCounters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackComponent_ResetCounters_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHackComponent_ResetCounters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackComponent_ResetCounters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackComponent::execResetCounters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCounters();
	P_NATIVE_END;
}
// End Class UHackComponent Function ResetCounters

// Begin Class UHackComponent Function SetRequiredCounters
struct Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics
{
	struct HackComponent_eventSetRequiredCounters_Parms
	{
		int32 NewRequirement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewRequirement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::NewProp_NewRequirement = { "NewRequirement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HackComponent_eventSetRequiredCounters_Parms, NewRequirement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::NewProp_NewRequirement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackComponent, nullptr, "SetRequiredCounters", nullptr, nullptr, Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::HackComponent_eventSetRequiredCounters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::HackComponent_eventSetRequiredCounters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHackComponent_SetRequiredCounters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackComponent_SetRequiredCounters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackComponent::execSetRequiredCounters)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewRequirement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRequiredCounters(Z_Param_NewRequirement);
	P_NATIVE_END;
}
// End Class UHackComponent Function SetRequiredCounters

// Begin Class UHackComponent Function TryExecuteHack
struct Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics
{
	struct HackComponent_eventTryExecuteHack_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hack Attack Execution\n" },
#endif
		{ "ModuleRelativePath", "Components/HackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hack Attack Execution" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HackComponent_eventTryExecuteHack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HackComponent_eventTryExecuteHack_Parms), &Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackComponent, nullptr, "TryExecuteHack", nullptr, nullptr, Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::HackComponent_eventTryExecuteHack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::HackComponent_eventTryExecuteHack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHackComponent_TryExecuteHack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackComponent_TryExecuteHack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackComponent::execTryExecuteHack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryExecuteHack();
	P_NATIVE_END;
}
// End Class UHackComponent Function TryExecuteHack

// Begin Class UHackComponent
void UHackComponent::StaticRegisterNativesUHackComponent()
{
	UClass* Class = UHackComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddCounter", &UHackComponent::execAddCounter },
		{ "GetCurrentCounters", &UHackComponent::execGetCurrentCounters },
		{ "GetRequiredCounters", &UHackComponent::execGetRequiredCounters },
		{ "GetUnblockedHits", &UHackComponent::execGetUnblockedHits },
		{ "IsHackAvailable", &UHackComponent::execIsHackAvailable },
		{ "RegisterUnblockedHit", &UHackComponent::execRegisterUnblockedHit },
		{ "ResetCounters", &UHackComponent::execResetCounters },
		{ "SetRequiredCounters", &UHackComponent::execSetRequiredCounters },
		{ "TryExecuteHack", &UHackComponent::execTryExecuteHack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHackComponent);
UClass* Z_Construct_UClass_UHackComponent_NoRegister()
{
	return UHackComponent::StaticClass();
}
struct Z_Construct_UClass_UHackComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/HackComponent.h" },
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCounterProgressChanged_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Events\n" },
#endif
		{ "ModuleRelativePath", "Components/HackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHackAvailable_MetaData[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHackExecuted_MetaData[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCountersReset_MetaData[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterAttacks_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Counter tracking\n" },
#endif
		{ "ModuleRelativePath", "Components/HackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Counter tracking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnblockedHits_MetaData[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredCounters_MetaData[] = {
		{ "Category", "Hack Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Configuration\n" },
#endif
		{ "ModuleRelativePath", "Components/HackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configuration" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnblockedHitsToReset_MetaData[] = {
		{ "Category", "Hack Attack" },
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackDamage_MetaData[] = {
		{ "Category", "Hack Attack" },
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackStunDuration_MetaData[] = {
		{ "Category", "Hack Attack" },
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackRange_MetaData[] = {
		{ "Category", "Hack Attack" },
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsExecutingHack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hack execution state\n" },
#endif
		{ "ModuleRelativePath", "Components/HackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hack execution state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackExecutionTimer_MetaData[] = {
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackExecutionDuration_MetaData[] = {
		{ "Category", "Hack Attack" },
		{ "ModuleRelativePath", "Components/HackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCounterProgressChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHackAvailable;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHackExecuted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCountersReset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CounterAttacks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnblockedHits;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequiredCounters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnblockedHitsToReset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HackStunDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HackRange;
	static void NewProp_bIsExecutingHack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExecutingHack;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HackExecutionTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HackExecutionDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHackComponent_AddCounter, "AddCounter" }, // 1250127256
		{ &Z_Construct_UFunction_UHackComponent_GetCurrentCounters, "GetCurrentCounters" }, // 3652457926
		{ &Z_Construct_UFunction_UHackComponent_GetRequiredCounters, "GetRequiredCounters" }, // 3564558315
		{ &Z_Construct_UFunction_UHackComponent_GetUnblockedHits, "GetUnblockedHits" }, // 807551467
		{ &Z_Construct_UFunction_UHackComponent_IsHackAvailable, "IsHackAvailable" }, // 3234802785
		{ &Z_Construct_UFunction_UHackComponent_RegisterUnblockedHit, "RegisterUnblockedHit" }, // 3380830760
		{ &Z_Construct_UFunction_UHackComponent_ResetCounters, "ResetCounters" }, // 3185655901
		{ &Z_Construct_UFunction_UHackComponent_SetRequiredCounters, "SetRequiredCounters" }, // 1739269271
		{ &Z_Construct_UFunction_UHackComponent_TryExecuteHack, "TryExecuteHack" }, // 222314631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHackComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_OnCounterProgressChanged = { "OnCounterProgressChanged", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, OnCounterProgressChanged), Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCounterProgressChanged_MetaData), NewProp_OnCounterProgressChanged_MetaData) }; // 4153426197
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_OnHackAvailable = { "OnHackAvailable", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, OnHackAvailable), Z_Construct_UDelegateFunction_SecondWind_OnHackAvailable__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHackAvailable_MetaData), NewProp_OnHackAvailable_MetaData) }; // 3753968980
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_OnHackExecuted = { "OnHackExecuted", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, OnHackExecuted), Z_Construct_UDelegateFunction_SecondWind_OnHackExecuted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHackExecuted_MetaData), NewProp_OnHackExecuted_MetaData) }; // 3923748184
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_OnCountersReset = { "OnCountersReset", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, OnCountersReset), Z_Construct_UDelegateFunction_SecondWind_OnCountersReset__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCountersReset_MetaData), NewProp_OnCountersReset_MetaData) }; // 2660223117
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_CounterAttacks = { "CounterAttacks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, CounterAttacks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterAttacks_MetaData), NewProp_CounterAttacks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_UnblockedHits = { "UnblockedHits", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, UnblockedHits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnblockedHits_MetaData), NewProp_UnblockedHits_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_RequiredCounters = { "RequiredCounters", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, RequiredCounters), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredCounters_MetaData), NewProp_RequiredCounters_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_UnblockedHitsToReset = { "UnblockedHitsToReset", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, UnblockedHitsToReset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnblockedHitsToReset_MetaData), NewProp_UnblockedHitsToReset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_HackDamage = { "HackDamage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, HackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackDamage_MetaData), NewProp_HackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_HackStunDuration = { "HackStunDuration", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, HackStunDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackStunDuration_MetaData), NewProp_HackStunDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_HackRange = { "HackRange", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, HackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackRange_MetaData), NewProp_HackRange_MetaData) };
void Z_Construct_UClass_UHackComponent_Statics::NewProp_bIsExecutingHack_SetBit(void* Obj)
{
	((UHackComponent*)Obj)->bIsExecutingHack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_bIsExecutingHack = { "bIsExecutingHack", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHackComponent), &Z_Construct_UClass_UHackComponent_Statics::NewProp_bIsExecutingHack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsExecutingHack_MetaData), NewProp_bIsExecutingHack_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_HackExecutionTimer = { "HackExecutionTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, HackExecutionTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackExecutionTimer_MetaData), NewProp_HackExecutionTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHackComponent_Statics::NewProp_HackExecutionDuration = { "HackExecutionDuration", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackComponent, HackExecutionDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackExecutionDuration_MetaData), NewProp_HackExecutionDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHackComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_OnCounterProgressChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_OnHackAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_OnHackExecuted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_OnCountersReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_CounterAttacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_UnblockedHits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_RequiredCounters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_UnblockedHitsToReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_HackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_HackStunDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_HackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_bIsExecutingHack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_HackExecutionTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackComponent_Statics::NewProp_HackExecutionDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHackComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHackComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHackComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHackComponent_Statics::ClassParams = {
	&UHackComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHackComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHackComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHackComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHackComponent()
{
	if (!Z_Registration_Info_UClass_UHackComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHackComponent.OuterSingleton, Z_Construct_UClass_UHackComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHackComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UHackComponent>()
{
	return UHackComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHackComponent);
UHackComponent::~UHackComponent() {}
// End Class UHackComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHackComponent, UHackComponent::StaticClass, TEXT("UHackComponent"), &Z_Registration_Info_UClass_UHackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHackComponent), 579661021U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_344184594(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
