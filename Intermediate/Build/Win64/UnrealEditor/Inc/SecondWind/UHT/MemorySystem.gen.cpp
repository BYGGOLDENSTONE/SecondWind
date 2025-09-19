// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Systems/MemorySystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemorySystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SECONDWIND_API UClass* Z_Construct_UClass_UMemorySystem();
SECONDWIND_API UClass* Z_Construct_UClass_UMemorySystem_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EMemoryType();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature();
SECONDWIND_API UScriptStruct* Z_Construct_UScriptStruct_FMemoryData();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EMemoryType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMemoryType;
static UEnum* EMemoryType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMemoryType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMemoryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EMemoryType, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EMemoryType"));
	}
	return Z_Registration_Info_UEnum_EMemoryType.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EMemoryType>()
{
	return EMemoryType_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EMemoryType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttackBoost.DisplayName", "Attack Damage Boost" },
		{ "AttackBoost.Name", "EMemoryType::AttackBoost" },
		{ "BlueprintType", "true" },
		{ "DefenseBoost.DisplayName", "Defense Boost" },
		{ "DefenseBoost.Name", "EMemoryType::DefenseBoost" },
		{ "HackReduction.DisplayName", "Hack Attack Reduction" },
		{ "HackReduction.Name", "EMemoryType::HackReduction" },
		{ "HealthBoost.DisplayName", "Health Boost" },
		{ "HealthBoost.Name", "EMemoryType::HealthBoost" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
		{ "WeakSide.DisplayName", "Weak Side Detection" },
		{ "WeakSide.Name", "EMemoryType::WeakSide" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMemoryType::WeakSide", (int64)EMemoryType::WeakSide },
		{ "EMemoryType::HackReduction", (int64)EMemoryType::HackReduction },
		{ "EMemoryType::AttackBoost", (int64)EMemoryType::AttackBoost },
		{ "EMemoryType::DefenseBoost", (int64)EMemoryType::DefenseBoost },
		{ "EMemoryType::HealthBoost", (int64)EMemoryType::HealthBoost },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EMemoryType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EMemoryType",
	"EMemoryType",
	Z_Construct_UEnum_SecondWind_EMemoryType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EMemoryType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EMemoryType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EMemoryType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EMemoryType()
{
	if (!Z_Registration_Info_UEnum_EMemoryType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMemoryType.InnerSingleton, Z_Construct_UEnum_SecondWind_EMemoryType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMemoryType.InnerSingleton;
}
// End Enum EMemoryType

// Begin ScriptStruct FMemoryData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MemoryData;
class UScriptStruct* FMemoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MemoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MemoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemoryData, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("MemoryData"));
	}
	return Z_Registration_Info_UScriptStruct_MemoryData.OuterSingleton;
}
template<> SECONDWIND_API UScriptStruct* StaticStruct<FMemoryData>()
{
	return FMemoryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMemoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryID_MetaData[] = {
		{ "Category", "MemoryData" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "MemoryData" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "MemoryData" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentCost_MetaData[] = {
		{ "Category", "MemoryData" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryType_MetaData[] = {
		{ "Category", "MemoryData" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectValue_MetaData[] = {
		{ "Category", "MemoryData" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemoryID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FragmentCost;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MemoryType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MemoryType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryID = { "MemoryID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryData, MemoryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryID_MetaData), NewProp_MemoryID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_FragmentCost = { "FragmentCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryData, FragmentCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentCost_MetaData), NewProp_FragmentCost_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryType = { "MemoryType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryData, MemoryType), Z_Construct_UEnum_SecondWind_EMemoryType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryType_MetaData), NewProp_MemoryType_MetaData) }; // 3329407115
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_EffectValue = { "EffectValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMemoryData, EffectValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectValue_MetaData), NewProp_EffectValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMemoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_FragmentCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_MemoryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryData_Statics::NewProp_EffectValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMemoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	&NewStructOps,
	"MemoryData",
	Z_Construct_UScriptStruct_FMemoryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryData_Statics::PropPointers),
	sizeof(FMemoryData),
	alignof(FMemoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMemoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMemoryData()
{
	if (!Z_Registration_Info_UScriptStruct_MemoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MemoryData.InnerSingleton, Z_Construct_UScriptStruct_FMemoryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MemoryData.InnerSingleton;
}
// End ScriptStruct FMemoryData

// Begin Delegate FOnMemoryUnlocked
struct Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics
{
	struct _Script_SecondWind_eventOnMemoryUnlocked_Parms
	{
		FString MemoryID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemoryID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::NewProp_MemoryID = { "MemoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnMemoryUnlocked_Parms, MemoryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryID_MetaData), NewProp_MemoryID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::NewProp_MemoryID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnMemoryUnlocked__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::_Script_SecondWind_eventOnMemoryUnlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::_Script_SecondWind_eventOnMemoryUnlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMemoryUnlocked_DelegateWrapper(const FMulticastScriptDelegate& OnMemoryUnlocked, const FString& MemoryID)
{
	struct _Script_SecondWind_eventOnMemoryUnlocked_Parms
	{
		FString MemoryID;
	};
	_Script_SecondWind_eventOnMemoryUnlocked_Parms Parms;
	Parms.MemoryID=MemoryID;
	OnMemoryUnlocked.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMemoryUnlocked

// Begin Class UMemorySystem Function ApplyMemoryEffects
struct Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics
{
	struct MemorySystem_eventApplyMemoryEffects_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemorySystem_eventApplyMemoryEffects_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemorySystem, nullptr, "ApplyMemoryEffects", nullptr, nullptr, Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::MemorySystem_eventApplyMemoryEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::MemorySystem_eventApplyMemoryEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemorySystem::execApplyMemoryEffects)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyMemoryEffects(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UMemorySystem Function ApplyMemoryEffects

// Begin Class UMemorySystem Function GetAvailableMemories
struct Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics
{
	struct MemorySystem_eventGetAvailableMemories_Parms
	{
		TArray<FMemoryData> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMemoryData, METADATA_PARAMS(0, nullptr) }; // 1520177267
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemorySystem_eventGetAvailableMemories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1520177267
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemorySystem, nullptr, "GetAvailableMemories", nullptr, nullptr, Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::MemorySystem_eventGetAvailableMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::MemorySystem_eventGetAvailableMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemorySystem_GetAvailableMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemorySystem_GetAvailableMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemorySystem::execGetAvailableMemories)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMemoryData>*)Z_Param__Result=P_THIS->GetAvailableMemories();
	P_NATIVE_END;
}
// End Class UMemorySystem Function GetAvailableMemories

// Begin Class UMemorySystem Function GetHackCounterRequirement
struct Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics
{
	struct MemorySystem_eventGetHackCounterRequirement_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemorySystem_eventGetHackCounterRequirement_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemorySystem, nullptr, "GetHackCounterRequirement", nullptr, nullptr, Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::MemorySystem_eventGetHackCounterRequirement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::MemorySystem_eventGetHackCounterRequirement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemorySystem::execGetHackCounterRequirement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHackCounterRequirement();
	P_NATIVE_END;
}
// End Class UMemorySystem Function GetHackCounterRequirement

// Begin Class UMemorySystem Function GetMemoryData
struct Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics
{
	struct MemorySystem_eventGetMemoryData_Parms
	{
		FString MemoryID;
		FMemoryData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemoryID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::NewProp_MemoryID = { "MemoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemorySystem_eventGetMemoryData_Parms, MemoryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryID_MetaData), NewProp_MemoryID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemorySystem_eventGetMemoryData_Parms, ReturnValue), Z_Construct_UScriptStruct_FMemoryData, METADATA_PARAMS(0, nullptr) }; // 1520177267
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::NewProp_MemoryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemorySystem, nullptr, "GetMemoryData", nullptr, nullptr, Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::MemorySystem_eventGetMemoryData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::MemorySystem_eventGetMemoryData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemorySystem_GetMemoryData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemorySystem_GetMemoryData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemorySystem::execGetMemoryData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MemoryID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMemoryData*)Z_Param__Result=P_THIS->GetMemoryData(Z_Param_MemoryID);
	P_NATIVE_END;
}
// End Class UMemorySystem Function GetMemoryData

// Begin Class UMemorySystem Function GetUnlockedMemories
struct Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics
{
	struct MemorySystem_eventGetUnlockedMemories_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemorySystem_eventGetUnlockedMemories_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemorySystem, nullptr, "GetUnlockedMemories", nullptr, nullptr, Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::MemorySystem_eventGetUnlockedMemories_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::MemorySystem_eventGetUnlockedMemories_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemorySystem::execGetUnlockedMemories)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetUnlockedMemories();
	P_NATIVE_END;
}
// End Class UMemorySystem Function GetUnlockedMemories

// Begin Class UMemorySystem Function IsMemoryUnlocked
struct Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics
{
	struct MemorySystem_eventIsMemoryUnlocked_Parms
	{
		FString MemoryID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemoryID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::NewProp_MemoryID = { "MemoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemorySystem_eventIsMemoryUnlocked_Parms, MemoryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryID_MetaData), NewProp_MemoryID_MetaData) };
void Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MemorySystem_eventIsMemoryUnlocked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MemorySystem_eventIsMemoryUnlocked_Parms), &Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::NewProp_MemoryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemorySystem, nullptr, "IsMemoryUnlocked", nullptr, nullptr, Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::MemorySystem_eventIsMemoryUnlocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::MemorySystem_eventIsMemoryUnlocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemorySystem::execIsMemoryUnlocked)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MemoryID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMemoryUnlocked(Z_Param_MemoryID);
	P_NATIVE_END;
}
// End Class UMemorySystem Function IsMemoryUnlocked

// Begin Class UMemorySystem Function ResetForNewRun
struct Z_Construct_UFunction_UMemorySystem_ResetForNewRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemorySystem_ResetForNewRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemorySystem, nullptr, "ResetForNewRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_ResetForNewRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemorySystem_ResetForNewRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMemorySystem_ResetForNewRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemorySystem_ResetForNewRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemorySystem::execResetForNewRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetForNewRun();
	P_NATIVE_END;
}
// End Class UMemorySystem Function ResetForNewRun

// Begin Class UMemorySystem Function UnlockMemory
struct Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics
{
	struct MemorySystem_eventUnlockMemory_Parms
	{
		FString MemoryID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MemoryID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::NewProp_MemoryID = { "MemoryID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MemorySystem_eventUnlockMemory_Parms, MemoryID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryID_MetaData), NewProp_MemoryID_MetaData) };
void Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MemorySystem_eventUnlockMemory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MemorySystem_eventUnlockMemory_Parms), &Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::NewProp_MemoryID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemorySystem, nullptr, "UnlockMemory", nullptr, nullptr, Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::MemorySystem_eventUnlockMemory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::MemorySystem_eventUnlockMemory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemorySystem_UnlockMemory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemorySystem_UnlockMemory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemorySystem::execUnlockMemory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MemoryID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnlockMemory(Z_Param_MemoryID);
	P_NATIVE_END;
}
// End Class UMemorySystem Function UnlockMemory

// Begin Class UMemorySystem
void UMemorySystem::StaticRegisterNativesUMemorySystem()
{
	UClass* Class = UMemorySystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyMemoryEffects", &UMemorySystem::execApplyMemoryEffects },
		{ "GetAvailableMemories", &UMemorySystem::execGetAvailableMemories },
		{ "GetHackCounterRequirement", &UMemorySystem::execGetHackCounterRequirement },
		{ "GetMemoryData", &UMemorySystem::execGetMemoryData },
		{ "GetUnlockedMemories", &UMemorySystem::execGetUnlockedMemories },
		{ "IsMemoryUnlocked", &UMemorySystem::execIsMemoryUnlocked },
		{ "ResetForNewRun", &UMemorySystem::execResetForNewRun },
		{ "UnlockMemory", &UMemorySystem::execUnlockMemory },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMemorySystem);
UClass* Z_Construct_UClass_UMemorySystem_NoRegister()
{
	return UMemorySystem::StaticClass();
}
struct Z_Construct_UClass_UMemorySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/MemorySystem.h" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMemoryUnlocked_MetaData[] = {
		{ "Category", "Memory" },
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlockedMemories_MetaData[] = {
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllMemories_MetaData[] = {
		{ "ModuleRelativePath", "Systems/MemorySystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemoryUnlocked;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UnlockedMemories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnlockedMemories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllMemories_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllMemories_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllMemories;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMemorySystem_ApplyMemoryEffects, "ApplyMemoryEffects" }, // 3849118135
		{ &Z_Construct_UFunction_UMemorySystem_GetAvailableMemories, "GetAvailableMemories" }, // 393953650
		{ &Z_Construct_UFunction_UMemorySystem_GetHackCounterRequirement, "GetHackCounterRequirement" }, // 646830951
		{ &Z_Construct_UFunction_UMemorySystem_GetMemoryData, "GetMemoryData" }, // 1884375127
		{ &Z_Construct_UFunction_UMemorySystem_GetUnlockedMemories, "GetUnlockedMemories" }, // 1506363037
		{ &Z_Construct_UFunction_UMemorySystem_IsMemoryUnlocked, "IsMemoryUnlocked" }, // 936880320
		{ &Z_Construct_UFunction_UMemorySystem_ResetForNewRun, "ResetForNewRun" }, // 2905954108
		{ &Z_Construct_UFunction_UMemorySystem_UnlockMemory, "UnlockMemory" }, // 2763629584
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMemorySystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMemorySystem_Statics::NewProp_OnMemoryUnlocked = { "OnMemoryUnlocked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMemorySystem, OnMemoryUnlocked), Z_Construct_UDelegateFunction_SecondWind_OnMemoryUnlocked__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMemoryUnlocked_MetaData), NewProp_OnMemoryUnlocked_MetaData) }; // 282614925
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMemorySystem_Statics::NewProp_UnlockedMemories_Inner = { "UnlockedMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMemorySystem_Statics::NewProp_UnlockedMemories = { "UnlockedMemories", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMemorySystem, UnlockedMemories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlockedMemories_MetaData), NewProp_UnlockedMemories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMemorySystem_Statics::NewProp_AllMemories_ValueProp = { "AllMemories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMemoryData, METADATA_PARAMS(0, nullptr) }; // 1520177267
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMemorySystem_Statics::NewProp_AllMemories_Key_KeyProp = { "AllMemories_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMemorySystem_Statics::NewProp_AllMemories = { "AllMemories", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMemorySystem, AllMemories), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllMemories_MetaData), NewProp_AllMemories_MetaData) }; // 1520177267
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMemorySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemorySystem_Statics::NewProp_OnMemoryUnlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemorySystem_Statics::NewProp_UnlockedMemories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemorySystem_Statics::NewProp_UnlockedMemories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemorySystem_Statics::NewProp_AllMemories_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemorySystem_Statics::NewProp_AllMemories_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemorySystem_Statics::NewProp_AllMemories,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemorySystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMemorySystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemorySystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMemorySystem_Statics::ClassParams = {
	&UMemorySystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMemorySystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMemorySystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMemorySystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMemorySystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMemorySystem()
{
	if (!Z_Registration_Info_UClass_UMemorySystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMemorySystem.OuterSingleton, Z_Construct_UClass_UMemorySystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMemorySystem.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UMemorySystem>()
{
	return UMemorySystem::StaticClass();
}
UMemorySystem::UMemorySystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMemorySystem);
UMemorySystem::~UMemorySystem() {}
// End Class UMemorySystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMemoryType_StaticEnum, TEXT("EMemoryType"), &Z_Registration_Info_UEnum_EMemoryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3329407115U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMemoryData::StaticStruct, Z_Construct_UScriptStruct_FMemoryData_Statics::NewStructOps, TEXT("MemoryData"), &Z_Registration_Info_UScriptStruct_MemoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMemoryData), 1520177267U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMemorySystem, UMemorySystem::StaticClass, TEXT("UMemorySystem"), &Z_Registration_Info_UClass_UMemorySystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMemorySystem), 2229423675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_151452470(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_MemorySystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
