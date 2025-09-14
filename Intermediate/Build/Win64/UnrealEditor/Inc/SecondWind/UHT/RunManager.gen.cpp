// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Systems/RunManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SECONDWIND_API UClass* Z_Construct_UClass_URunManager();
SECONDWIND_API UClass* Z_Construct_UClass_URunManager_NoRegister();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Delegate FOnRunStarted
struct Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics
{
	struct _Script_SecondWind_eventOnRunStarted_Parms
	{
		int32 RunNumber;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RunNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::NewProp_RunNumber = { "RunNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnRunStarted_Parms, RunNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::NewProp_RunNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnRunStarted__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::_Script_SecondWind_eventOnRunStarted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::_Script_SecondWind_eventOnRunStarted_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRunStarted_DelegateWrapper(const FMulticastScriptDelegate& OnRunStarted, int32 RunNumber)
{
	struct _Script_SecondWind_eventOnRunStarted_Parms
	{
		int32 RunNumber;
	};
	_Script_SecondWind_eventOnRunStarted_Parms Parms;
	Parms.RunNumber=RunNumber;
	OnRunStarted.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRunStarted

// Begin Delegate FOnRunEnded
struct Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics
{
	struct _Script_SecondWind_eventOnRunEnded_Parms
	{
		int32 RunNumber;
		bool bCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RunNumber;
	static void NewProp_bCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::NewProp_RunNumber = { "RunNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnRunEnded_Parms, RunNumber), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::NewProp_bCompleted_SetBit(void* Obj)
{
	((_Script_SecondWind_eventOnRunEnded_Parms*)Obj)->bCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::NewProp_bCompleted = { "bCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SecondWind_eventOnRunEnded_Parms), &Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::NewProp_bCompleted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::NewProp_RunNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::NewProp_bCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnRunEnded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::_Script_SecondWind_eventOnRunEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::_Script_SecondWind_eventOnRunEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRunEnded_DelegateWrapper(const FMulticastScriptDelegate& OnRunEnded, int32 RunNumber, bool bCompleted)
{
	struct _Script_SecondWind_eventOnRunEnded_Parms
	{
		int32 RunNumber;
		bool bCompleted;
	};
	_Script_SecondWind_eventOnRunEnded_Parms Parms;
	Parms.RunNumber=RunNumber;
	Parms.bCompleted=bCompleted ? true : false;
	OnRunEnded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRunEnded

// Begin Class URunManager Function EndCurrentRun
struct Z_Construct_UFunction_URunManager_EndCurrentRun_Statics
{
	struct RunManager_eventEndCurrentRun_Parms
	{
		bool bCompleted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Run" },
		{ "CPP_Default_bCompleted", "false" },
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bCompleted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::NewProp_bCompleted_SetBit(void* Obj)
{
	((RunManager_eventEndCurrentRun_Parms*)Obj)->bCompleted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::NewProp_bCompleted = { "bCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RunManager_eventEndCurrentRun_Parms), &Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::NewProp_bCompleted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::NewProp_bCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URunManager, nullptr, "EndCurrentRun", nullptr, nullptr, Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::PropPointers), sizeof(Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::RunManager_eventEndCurrentRun_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::RunManager_eventEndCurrentRun_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URunManager_EndCurrentRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URunManager_EndCurrentRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URunManager::execEndCurrentRun)
{
	P_GET_UBOOL(Z_Param_bCompleted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndCurrentRun(Z_Param_bCompleted);
	P_NATIVE_END;
}
// End Class URunManager Function EndCurrentRun

// Begin Class URunManager Function GetCurrentRunNumber
struct Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics
{
	struct RunManager_eventGetCurrentRunNumber_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Run" },
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RunManager_eventGetCurrentRunNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URunManager, nullptr, "GetCurrentRunNumber", nullptr, nullptr, Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::RunManager_eventGetCurrentRunNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::RunManager_eventGetCurrentRunNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URunManager_GetCurrentRunNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URunManager_GetCurrentRunNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URunManager::execGetCurrentRunNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentRunNumber();
	P_NATIVE_END;
}
// End Class URunManager Function GetCurrentRunNumber

// Begin Class URunManager Function IsRunActive
struct Z_Construct_UFunction_URunManager_IsRunActive_Statics
{
	struct RunManager_eventIsRunActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Run" },
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URunManager_IsRunActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RunManager_eventIsRunActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URunManager_IsRunActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RunManager_eventIsRunActive_Parms), &Z_Construct_UFunction_URunManager_IsRunActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URunManager_IsRunActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URunManager_IsRunActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_IsRunActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URunManager_IsRunActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URunManager, nullptr, "IsRunActive", nullptr, nullptr, Z_Construct_UFunction_URunManager_IsRunActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_IsRunActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_URunManager_IsRunActive_Statics::RunManager_eventIsRunActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_IsRunActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_URunManager_IsRunActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URunManager_IsRunActive_Statics::RunManager_eventIsRunActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URunManager_IsRunActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URunManager_IsRunActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URunManager::execIsRunActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRunActive();
	P_NATIVE_END;
}
// End Class URunManager Function IsRunActive

// Begin Class URunManager Function OnPlayerDeath
struct Z_Construct_UFunction_URunManager_OnPlayerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Run" },
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URunManager_OnPlayerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URunManager, nullptr, "OnPlayerDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_OnPlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_URunManager_OnPlayerDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URunManager_OnPlayerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URunManager_OnPlayerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URunManager::execOnPlayerDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerDeath();
	P_NATIVE_END;
}
// End Class URunManager Function OnPlayerDeath

// Begin Class URunManager Function StartNewRun
struct Z_Construct_UFunction_URunManager_StartNewRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Run" },
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URunManager_StartNewRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URunManager, nullptr, "StartNewRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URunManager_StartNewRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_URunManager_StartNewRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URunManager_StartNewRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URunManager_StartNewRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URunManager::execStartNewRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartNewRun();
	P_NATIVE_END;
}
// End Class URunManager Function StartNewRun

// Begin Class URunManager
void URunManager::StaticRegisterNativesURunManager()
{
	UClass* Class = URunManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndCurrentRun", &URunManager::execEndCurrentRun },
		{ "GetCurrentRunNumber", &URunManager::execGetCurrentRunNumber },
		{ "IsRunActive", &URunManager::execIsRunActive },
		{ "OnPlayerDeath", &URunManager::execOnPlayerDeath },
		{ "StartNewRun", &URunManager::execStartNewRun },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URunManager);
UClass* Z_Construct_UClass_URunManager_NoRegister()
{
	return URunManager::StaticClass();
}
struct Z_Construct_UClass_URunManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/RunManager.h" },
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRunStarted_MetaData[] = {
		{ "Category", "Run" },
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRunEnded_MetaData[] = {
		{ "Category", "Run" },
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRunNumber_MetaData[] = {
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRunActive_MetaData[] = {
		{ "ModuleRelativePath", "Systems/RunManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRunStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRunEnded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentRunNumber;
	static void NewProp_bRunActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URunManager_EndCurrentRun, "EndCurrentRun" }, // 1294518272
		{ &Z_Construct_UFunction_URunManager_GetCurrentRunNumber, "GetCurrentRunNumber" }, // 3175046851
		{ &Z_Construct_UFunction_URunManager_IsRunActive, "IsRunActive" }, // 2627811078
		{ &Z_Construct_UFunction_URunManager_OnPlayerDeath, "OnPlayerDeath" }, // 2669878535
		{ &Z_Construct_UFunction_URunManager_StartNewRun, "StartNewRun" }, // 1546936990
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URunManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URunManager_Statics::NewProp_OnRunStarted = { "OnRunStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URunManager, OnRunStarted), Z_Construct_UDelegateFunction_SecondWind_OnRunStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRunStarted_MetaData), NewProp_OnRunStarted_MetaData) }; // 708980958
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URunManager_Statics::NewProp_OnRunEnded = { "OnRunEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URunManager, OnRunEnded), Z_Construct_UDelegateFunction_SecondWind_OnRunEnded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRunEnded_MetaData), NewProp_OnRunEnded_MetaData) }; // 3867406728
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URunManager_Statics::NewProp_CurrentRunNumber = { "CurrentRunNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URunManager, CurrentRunNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentRunNumber_MetaData), NewProp_CurrentRunNumber_MetaData) };
void Z_Construct_UClass_URunManager_Statics::NewProp_bRunActive_SetBit(void* Obj)
{
	((URunManager*)Obj)->bRunActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URunManager_Statics::NewProp_bRunActive = { "bRunActive", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URunManager), &Z_Construct_UClass_URunManager_Statics::NewProp_bRunActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRunActive_MetaData), NewProp_bRunActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URunManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunManager_Statics::NewProp_OnRunStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunManager_Statics::NewProp_OnRunEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunManager_Statics::NewProp_CurrentRunNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URunManager_Statics::NewProp_bRunActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URunManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URunManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URunManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URunManager_Statics::ClassParams = {
	&URunManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URunManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URunManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URunManager_Statics::Class_MetaDataParams), Z_Construct_UClass_URunManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URunManager()
{
	if (!Z_Registration_Info_UClass_URunManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URunManager.OuterSingleton, Z_Construct_UClass_URunManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URunManager.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<URunManager>()
{
	return URunManager::StaticClass();
}
URunManager::URunManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URunManager);
URunManager::~URunManager() {}
// End Class URunManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URunManager, URunManager::StaticClass, TEXT("URunManager"), &Z_Registration_Info_UClass_URunManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URunManager), 1403761263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_3954858508(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_RunManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
