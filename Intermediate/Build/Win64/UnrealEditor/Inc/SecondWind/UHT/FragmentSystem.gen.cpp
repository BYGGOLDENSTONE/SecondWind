// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Systems/FragmentSystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFragmentSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SECONDWIND_API UClass* Z_Construct_UClass_UFragmentSystem();
SECONDWIND_API UClass* Z_Construct_UClass_UFragmentSystem_NoRegister();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Delegate FOnFragmentSystemChanged
struct Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics
{
	struct _Script_SecondWind_eventOnFragmentSystemChanged_Parms
	{
		int32 NewTotal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Systems/FragmentSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTotal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::NewProp_NewTotal = { "NewTotal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnFragmentSystemChanged_Parms, NewTotal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::NewProp_NewTotal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnFragmentSystemChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::_Script_SecondWind_eventOnFragmentSystemChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::_Script_SecondWind_eventOnFragmentSystemChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFragmentSystemChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFragmentSystemChanged, int32 NewTotal)
{
	struct _Script_SecondWind_eventOnFragmentSystemChanged_Parms
	{
		int32 NewTotal;
	};
	_Script_SecondWind_eventOnFragmentSystemChanged_Parms Parms;
	Parms.NewTotal=NewTotal;
	OnFragmentSystemChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFragmentSystemChanged

// Begin Class UFragmentSystem Function AddFragments
struct Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics
{
	struct FragmentSystem_eventAddFragments_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragments" },
		{ "ModuleRelativePath", "Systems/FragmentSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FragmentSystem_eventAddFragments_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFragmentSystem, nullptr, "AddFragments", nullptr, nullptr, Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::FragmentSystem_eventAddFragments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::FragmentSystem_eventAddFragments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFragmentSystem_AddFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFragmentSystem_AddFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFragmentSystem::execAddFragments)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFragments(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UFragmentSystem Function AddFragments

// Begin Class UFragmentSystem Function GetFragmentCount
struct Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics
{
	struct FragmentSystem_eventGetFragmentCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragments" },
		{ "ModuleRelativePath", "Systems/FragmentSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FragmentSystem_eventGetFragmentCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFragmentSystem, nullptr, "GetFragmentCount", nullptr, nullptr, Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::FragmentSystem_eventGetFragmentCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::FragmentSystem_eventGetFragmentCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFragmentSystem_GetFragmentCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFragmentSystem_GetFragmentCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFragmentSystem::execGetFragmentCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFragmentCount();
	P_NATIVE_END;
}
// End Class UFragmentSystem Function GetFragmentCount

// Begin Class UFragmentSystem Function LoadFragments
struct Z_Construct_UFunction_UFragmentSystem_LoadFragments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragments" },
		{ "ModuleRelativePath", "Systems/FragmentSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFragmentSystem_LoadFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFragmentSystem, nullptr, "LoadFragments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_LoadFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFragmentSystem_LoadFragments_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFragmentSystem_LoadFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFragmentSystem_LoadFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFragmentSystem::execLoadFragments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadFragments();
	P_NATIVE_END;
}
// End Class UFragmentSystem Function LoadFragments

// Begin Class UFragmentSystem Function ResetForNewRun
struct Z_Construct_UFunction_UFragmentSystem_ResetForNewRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragments" },
		{ "ModuleRelativePath", "Systems/FragmentSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFragmentSystem_ResetForNewRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFragmentSystem, nullptr, "ResetForNewRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_ResetForNewRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFragmentSystem_ResetForNewRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFragmentSystem_ResetForNewRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFragmentSystem_ResetForNewRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFragmentSystem::execResetForNewRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetForNewRun();
	P_NATIVE_END;
}
// End Class UFragmentSystem Function ResetForNewRun

// Begin Class UFragmentSystem Function SaveFragments
struct Z_Construct_UFunction_UFragmentSystem_SaveFragments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragments" },
		{ "ModuleRelativePath", "Systems/FragmentSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFragmentSystem_SaveFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFragmentSystem, nullptr, "SaveFragments", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_SaveFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFragmentSystem_SaveFragments_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFragmentSystem_SaveFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFragmentSystem_SaveFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFragmentSystem::execSaveFragments)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveFragments();
	P_NATIVE_END;
}
// End Class UFragmentSystem Function SaveFragments

// Begin Class UFragmentSystem Function SpendFragments
struct Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics
{
	struct FragmentSystem_eventSpendFragments_Parms
	{
		int32 Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fragments" },
		{ "ModuleRelativePath", "Systems/FragmentSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FragmentSystem_eventSpendFragments_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FragmentSystem_eventSpendFragments_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FragmentSystem_eventSpendFragments_Parms), &Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFragmentSystem, nullptr, "SpendFragments", nullptr, nullptr, Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::FragmentSystem_eventSpendFragments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::FragmentSystem_eventSpendFragments_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFragmentSystem_SpendFragments()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFragmentSystem_SpendFragments_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFragmentSystem::execSpendFragments)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SpendFragments(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UFragmentSystem Function SpendFragments

// Begin Class UFragmentSystem
void UFragmentSystem::StaticRegisterNativesUFragmentSystem()
{
	UClass* Class = UFragmentSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFragments", &UFragmentSystem::execAddFragments },
		{ "GetFragmentCount", &UFragmentSystem::execGetFragmentCount },
		{ "LoadFragments", &UFragmentSystem::execLoadFragments },
		{ "ResetForNewRun", &UFragmentSystem::execResetForNewRun },
		{ "SaveFragments", &UFragmentSystem::execSaveFragments },
		{ "SpendFragments", &UFragmentSystem::execSpendFragments },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFragmentSystem);
UClass* Z_Construct_UClass_UFragmentSystem_NoRegister()
{
	return UFragmentSystem::StaticClass();
}
struct Z_Construct_UClass_UFragmentSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/FragmentSystem.h" },
		{ "ModuleRelativePath", "Systems/FragmentSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFragmentSystemChanged_MetaData[] = {
		{ "Category", "Fragments" },
		{ "ModuleRelativePath", "Systems/FragmentSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFragments_MetaData[] = {
		{ "ModuleRelativePath", "Systems/FragmentSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFragmentSystemChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentFragments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFragmentSystem_AddFragments, "AddFragments" }, // 2037059422
		{ &Z_Construct_UFunction_UFragmentSystem_GetFragmentCount, "GetFragmentCount" }, // 2377481687
		{ &Z_Construct_UFunction_UFragmentSystem_LoadFragments, "LoadFragments" }, // 1710271005
		{ &Z_Construct_UFunction_UFragmentSystem_ResetForNewRun, "ResetForNewRun" }, // 3382928446
		{ &Z_Construct_UFunction_UFragmentSystem_SaveFragments, "SaveFragments" }, // 1874010635
		{ &Z_Construct_UFunction_UFragmentSystem_SpendFragments, "SpendFragments" }, // 2198464327
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFragmentSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFragmentSystem_Statics::NewProp_OnFragmentSystemChanged = { "OnFragmentSystemChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFragmentSystem, OnFragmentSystemChanged), Z_Construct_UDelegateFunction_SecondWind_OnFragmentSystemChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFragmentSystemChanged_MetaData), NewProp_OnFragmentSystemChanged_MetaData) }; // 3485823045
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFragmentSystem_Statics::NewProp_CurrentFragments = { "CurrentFragments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFragmentSystem, CurrentFragments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFragments_MetaData), NewProp_CurrentFragments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFragmentSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFragmentSystem_Statics::NewProp_OnFragmentSystemChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFragmentSystem_Statics::NewProp_CurrentFragments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFragmentSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFragmentSystem_Statics::ClassParams = {
	&UFragmentSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFragmentSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentSystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFragmentSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFragmentSystem()
{
	if (!Z_Registration_Info_UClass_UFragmentSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFragmentSystem.OuterSingleton, Z_Construct_UClass_UFragmentSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFragmentSystem.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UFragmentSystem>()
{
	return UFragmentSystem::StaticClass();
}
UFragmentSystem::UFragmentSystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFragmentSystem);
UFragmentSystem::~UFragmentSystem() {}
// End Class UFragmentSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFragmentSystem, UFragmentSystem::StaticClass, TEXT("UFragmentSystem"), &Z_Registration_Info_UClass_UFragmentSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFragmentSystem), 1639278468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_4105767809(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_FragmentSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
