// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Systems/GamestyleSystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamestyleSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SECONDWIND_API UClass* Z_Construct_UClass_UGamestyleSystem();
SECONDWIND_API UClass* Z_Construct_UClass_UGamestyleSystem_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EGamestyleType();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature();
SECONDWIND_API UScriptStruct* Z_Construct_UScriptStruct_FGamestyleData();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EGamestyleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGamestyleType;
static UEnum* EGamestyleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGamestyleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGamestyleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EGamestyleType, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EGamestyleType"));
	}
	return Z_Registration_Info_UEnum_EGamestyleType.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EGamestyleType>()
{
	return EGamestyleType_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EGamestyleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Defense.DisplayName", "Defense" },
		{ "Defense.Name", "EGamestyleType::Defense" },
		{ "Mobility.DisplayName", "Mobility" },
		{ "Mobility.Name", "EGamestyleType::Mobility" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
		{ "Offense.DisplayName", "Offense" },
		{ "Offense.Name", "EGamestyleType::Offense" },
		{ "Technomancer.DisplayName", "Technomancer" },
		{ "Technomancer.Name", "EGamestyleType::Technomancer" },
		{ "Utility.DisplayName", "Utility" },
		{ "Utility.Name", "EGamestyleType::Utility" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGamestyleType::Defense", (int64)EGamestyleType::Defense },
		{ "EGamestyleType::Offense", (int64)EGamestyleType::Offense },
		{ "EGamestyleType::Mobility", (int64)EGamestyleType::Mobility },
		{ "EGamestyleType::Utility", (int64)EGamestyleType::Utility },
		{ "EGamestyleType::Technomancer", (int64)EGamestyleType::Technomancer },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EGamestyleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EGamestyleType",
	"EGamestyleType",
	Z_Construct_UEnum_SecondWind_EGamestyleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EGamestyleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EGamestyleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EGamestyleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EGamestyleType()
{
	if (!Z_Registration_Info_UEnum_EGamestyleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGamestyleType.InnerSingleton, Z_Construct_UEnum_SecondWind_EGamestyleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGamestyleType.InnerSingleton;
}
// End Enum EGamestyleType

// Begin ScriptStruct FGamestyleData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GamestyleData;
class UScriptStruct* FGamestyleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GamestyleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GamestyleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamestyleData, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("GamestyleData"));
	}
	return Z_Registration_Info_UScriptStruct_GamestyleData.OuterSingleton;
}
template<> SECONDWIND_API UScriptStruct* StaticStruct<FGamestyleData>()
{
	return FGamestyleData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGamestyleData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "GamestyleData" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "GamestyleData" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "GamestyleData" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[] = {
		{ "Category", "GamestyleData" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamestyleData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGamestyleData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGamestyleData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGamestyleData, Type), Z_Construct_UEnum_SecondWind_EGamestyleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2065761438
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGamestyleData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGamestyleData, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGamestyleData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGamestyleData, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamestyleData_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGamestyleData, StackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackCount_MetaData), NewProp_StackCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamestyleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamestyleData_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamestyleData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamestyleData_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamestyleData_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamestyleData_Statics::NewProp_StackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamestyleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamestyleData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	&NewStructOps,
	"GamestyleData",
	Z_Construct_UScriptStruct_FGamestyleData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamestyleData_Statics::PropPointers),
	sizeof(FGamestyleData),
	alignof(FGamestyleData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamestyleData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGamestyleData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGamestyleData()
{
	if (!Z_Registration_Info_UScriptStruct_GamestyleData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GamestyleData.InnerSingleton, Z_Construct_UScriptStruct_FGamestyleData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GamestyleData.InnerSingleton;
}
// End ScriptStruct FGamestyleData

// Begin Delegate FOnGamestyleAssigned
struct Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics
{
	struct _Script_SecondWind_eventOnGamestyleAssigned_Parms
	{
		EGamestyleType Gamestyle;
		FString DisplayName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Gamestyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Gamestyle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::NewProp_Gamestyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::NewProp_Gamestyle = { "Gamestyle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnGamestyleAssigned_Parms, Gamestyle), Z_Construct_UEnum_SecondWind_EGamestyleType, METADATA_PARAMS(0, nullptr) }; // 2065761438
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnGamestyleAssigned_Parms, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::NewProp_Gamestyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::NewProp_Gamestyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::NewProp_DisplayName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnGamestyleAssigned__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::_Script_SecondWind_eventOnGamestyleAssigned_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::_Script_SecondWind_eventOnGamestyleAssigned_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGamestyleAssigned_DelegateWrapper(const FMulticastScriptDelegate& OnGamestyleAssigned, EGamestyleType Gamestyle, const FString& DisplayName)
{
	struct _Script_SecondWind_eventOnGamestyleAssigned_Parms
	{
		EGamestyleType Gamestyle;
		FString DisplayName;
	};
	_Script_SecondWind_eventOnGamestyleAssigned_Parms Parms;
	Parms.Gamestyle=Gamestyle;
	Parms.DisplayName=DisplayName;
	OnGamestyleAssigned.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGamestyleAssigned

// Begin Delegate FOnGamestyleStackAdded
struct Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics
{
	struct _Script_SecondWind_eventOnGamestyleStackAdded_Parms
	{
		int32 NewStackCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::NewProp_NewStackCount = { "NewStackCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnGamestyleStackAdded_Parms, NewStackCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::NewProp_NewStackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnGamestyleStackAdded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::_Script_SecondWind_eventOnGamestyleStackAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::_Script_SecondWind_eventOnGamestyleStackAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGamestyleStackAdded_DelegateWrapper(const FMulticastScriptDelegate& OnGamestyleStackAdded, int32 NewStackCount)
{
	struct _Script_SecondWind_eventOnGamestyleStackAdded_Parms
	{
		int32 NewStackCount;
	};
	_Script_SecondWind_eventOnGamestyleStackAdded_Parms Parms;
	Parms.NewStackCount=NewStackCount;
	OnGamestyleStackAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGamestyleStackAdded

// Begin Class UGamestyleSystem Function AddGamestyleStack
struct Z_Construct_UFunction_UGamestyleSystem_AddGamestyleStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_AddGamestyleStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "AddGamestyleStack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_AddGamestyleStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_AddGamestyleStack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGamestyleSystem_AddGamestyleStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_AddGamestyleStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execAddGamestyleStack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddGamestyleStack();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function AddGamestyleStack

// Begin Class UGamestyleSystem Function ApplyGamestyleEffects
struct Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics
{
	struct GamestyleSystem_eventApplyGamestyleEffects_Parms
	{
		AActor* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamestyleSystem_eventApplyGamestyleEffects_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "ApplyGamestyleEffects", nullptr, nullptr, Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::GamestyleSystem_eventApplyGamestyleEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::GamestyleSystem_eventApplyGamestyleEffects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execApplyGamestyleEffects)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyGamestyleEffects(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function ApplyGamestyleEffects

// Begin Class UGamestyleSystem Function AssignRandomGamestyle
struct Z_Construct_UFunction_UGamestyleSystem_AssignRandomGamestyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_AssignRandomGamestyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "AssignRandomGamestyle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_AssignRandomGamestyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_AssignRandomGamestyle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGamestyleSystem_AssignRandomGamestyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_AssignRandomGamestyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execAssignRandomGamestyle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssignRandomGamestyle();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function AssignRandomGamestyle

// Begin Class UGamestyleSystem Function GetCurrentGamestyle
struct Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics
{
	struct GamestyleSystem_eventGetCurrentGamestyle_Parms
	{
		EGamestyleType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamestyleSystem_eventGetCurrentGamestyle_Parms, ReturnValue), Z_Construct_UEnum_SecondWind_EGamestyleType, METADATA_PARAMS(0, nullptr) }; // 2065761438
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "GetCurrentGamestyle", nullptr, nullptr, Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::GamestyleSystem_eventGetCurrentGamestyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::GamestyleSystem_eventGetCurrentGamestyle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execGetCurrentGamestyle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGamestyleType*)Z_Param__Result=P_THIS->GetCurrentGamestyle();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function GetCurrentGamestyle

// Begin Class UGamestyleSystem Function GetCurrentGamestyleData
struct Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics
{
	struct GamestyleSystem_eventGetCurrentGamestyleData_Parms
	{
		FGamestyleData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamestyleSystem_eventGetCurrentGamestyleData_Parms, ReturnValue), Z_Construct_UScriptStruct_FGamestyleData, METADATA_PARAMS(0, nullptr) }; // 2497682141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "GetCurrentGamestyleData", nullptr, nullptr, Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::GamestyleSystem_eventGetCurrentGamestyleData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::GamestyleSystem_eventGetCurrentGamestyleData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execGetCurrentGamestyleData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGamestyleData*)Z_Param__Result=P_THIS->GetCurrentGamestyleData();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function GetCurrentGamestyleData

// Begin Class UGamestyleSystem Function GetDefenseHealthBonus
struct Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics
{
	struct GamestyleSystem_eventGetDefenseHealthBonus_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamestyleSystem_eventGetDefenseHealthBonus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "GetDefenseHealthBonus", nullptr, nullptr, Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::GamestyleSystem_eventGetDefenseHealthBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::GamestyleSystem_eventGetDefenseHealthBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execGetDefenseHealthBonus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefenseHealthBonus();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function GetDefenseHealthBonus

// Begin Class UGamestyleSystem Function GetMobilitySpeedBonus
struct Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics
{
	struct GamestyleSystem_eventGetMobilitySpeedBonus_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamestyleSystem_eventGetMobilitySpeedBonus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "GetMobilitySpeedBonus", nullptr, nullptr, Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::GamestyleSystem_eventGetMobilitySpeedBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::GamestyleSystem_eventGetMobilitySpeedBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execGetMobilitySpeedBonus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMobilitySpeedBonus();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function GetMobilitySpeedBonus

// Begin Class UGamestyleSystem Function GetOffenseDamageBonus
struct Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics
{
	struct GamestyleSystem_eventGetOffenseDamageBonus_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamestyleSystem_eventGetOffenseDamageBonus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "GetOffenseDamageBonus", nullptr, nullptr, Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::GamestyleSystem_eventGetOffenseDamageBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::GamestyleSystem_eventGetOffenseDamageBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execGetOffenseDamageBonus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetOffenseDamageBonus();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function GetOffenseDamageBonus

// Begin Class UGamestyleSystem Function GetStackCount
struct Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics
{
	struct GamestyleSystem_eventGetStackCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamestyleSystem_eventGetStackCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "GetStackCount", nullptr, nullptr, Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::GamestyleSystem_eventGetStackCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::GamestyleSystem_eventGetStackCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamestyleSystem_GetStackCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_GetStackCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execGetStackCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStackCount();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function GetStackCount

// Begin Class UGamestyleSystem Function GetTechnomancerHackReduction
struct Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics
{
	struct GamestyleSystem_eventGetTechnomancerHackReduction_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamestyleSystem_eventGetTechnomancerHackReduction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "GetTechnomancerHackReduction", nullptr, nullptr, Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::GamestyleSystem_eventGetTechnomancerHackReduction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::GamestyleSystem_eventGetTechnomancerHackReduction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execGetTechnomancerHackReduction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetTechnomancerHackReduction();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function GetTechnomancerHackReduction

// Begin Class UGamestyleSystem Function GetUtilityCounterBonus
struct Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics
{
	struct GamestyleSystem_eventGetUtilityCounterBonus_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GamestyleSystem_eventGetUtilityCounterBonus_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "GetUtilityCounterBonus", nullptr, nullptr, Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::GamestyleSystem_eventGetUtilityCounterBonus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::GamestyleSystem_eventGetUtilityCounterBonus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execGetUtilityCounterBonus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUtilityCounterBonus();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function GetUtilityCounterBonus

// Begin Class UGamestyleSystem Function ResetForNewRun
struct Z_Construct_UFunction_UGamestyleSystem_ResetForNewRun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGamestyleSystem_ResetForNewRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGamestyleSystem, nullptr, "ResetForNewRun", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGamestyleSystem_ResetForNewRun_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGamestyleSystem_ResetForNewRun_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGamestyleSystem_ResetForNewRun()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGamestyleSystem_ResetForNewRun_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGamestyleSystem::execResetForNewRun)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetForNewRun();
	P_NATIVE_END;
}
// End Class UGamestyleSystem Function ResetForNewRun

// Begin Class UGamestyleSystem
void UGamestyleSystem::StaticRegisterNativesUGamestyleSystem()
{
	UClass* Class = UGamestyleSystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddGamestyleStack", &UGamestyleSystem::execAddGamestyleStack },
		{ "ApplyGamestyleEffects", &UGamestyleSystem::execApplyGamestyleEffects },
		{ "AssignRandomGamestyle", &UGamestyleSystem::execAssignRandomGamestyle },
		{ "GetCurrentGamestyle", &UGamestyleSystem::execGetCurrentGamestyle },
		{ "GetCurrentGamestyleData", &UGamestyleSystem::execGetCurrentGamestyleData },
		{ "GetDefenseHealthBonus", &UGamestyleSystem::execGetDefenseHealthBonus },
		{ "GetMobilitySpeedBonus", &UGamestyleSystem::execGetMobilitySpeedBonus },
		{ "GetOffenseDamageBonus", &UGamestyleSystem::execGetOffenseDamageBonus },
		{ "GetStackCount", &UGamestyleSystem::execGetStackCount },
		{ "GetTechnomancerHackReduction", &UGamestyleSystem::execGetTechnomancerHackReduction },
		{ "GetUtilityCounterBonus", &UGamestyleSystem::execGetUtilityCounterBonus },
		{ "ResetForNewRun", &UGamestyleSystem::execResetForNewRun },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGamestyleSystem);
UClass* Z_Construct_UClass_UGamestyleSystem_NoRegister()
{
	return UGamestyleSystem::StaticClass();
}
struct Z_Construct_UClass_UGamestyleSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/GamestyleSystem.h" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGamestyleAssigned_MetaData[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGamestyleStackAdded_MetaData[] = {
		{ "Category", "Gamestyle" },
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGamestyle_MetaData[] = {
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStacks_MetaData[] = {
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GamestyleDatabase_MetaData[] = {
		{ "ModuleRelativePath", "Systems/GamestyleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGamestyleAssigned;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGamestyleStackAdded;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentGamestyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentGamestyle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStacks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GamestyleDatabase_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GamestyleDatabase_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GamestyleDatabase_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GamestyleDatabase;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGamestyleSystem_AddGamestyleStack, "AddGamestyleStack" }, // 3172822875
		{ &Z_Construct_UFunction_UGamestyleSystem_ApplyGamestyleEffects, "ApplyGamestyleEffects" }, // 3965847663
		{ &Z_Construct_UFunction_UGamestyleSystem_AssignRandomGamestyle, "AssignRandomGamestyle" }, // 1734066460
		{ &Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyle, "GetCurrentGamestyle" }, // 3600205013
		{ &Z_Construct_UFunction_UGamestyleSystem_GetCurrentGamestyleData, "GetCurrentGamestyleData" }, // 2566034225
		{ &Z_Construct_UFunction_UGamestyleSystem_GetDefenseHealthBonus, "GetDefenseHealthBonus" }, // 3494639395
		{ &Z_Construct_UFunction_UGamestyleSystem_GetMobilitySpeedBonus, "GetMobilitySpeedBonus" }, // 2288040151
		{ &Z_Construct_UFunction_UGamestyleSystem_GetOffenseDamageBonus, "GetOffenseDamageBonus" }, // 3524355343
		{ &Z_Construct_UFunction_UGamestyleSystem_GetStackCount, "GetStackCount" }, // 3955945991
		{ &Z_Construct_UFunction_UGamestyleSystem_GetTechnomancerHackReduction, "GetTechnomancerHackReduction" }, // 1639727725
		{ &Z_Construct_UFunction_UGamestyleSystem_GetUtilityCounterBonus, "GetUtilityCounterBonus" }, // 1329326156
		{ &Z_Construct_UFunction_UGamestyleSystem_ResetForNewRun, "ResetForNewRun" }, // 2090281327
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamestyleSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_OnGamestyleAssigned = { "OnGamestyleAssigned", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGamestyleSystem, OnGamestyleAssigned), Z_Construct_UDelegateFunction_SecondWind_OnGamestyleAssigned__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGamestyleAssigned_MetaData), NewProp_OnGamestyleAssigned_MetaData) }; // 2708008034
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_OnGamestyleStackAdded = { "OnGamestyleStackAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGamestyleSystem, OnGamestyleStackAdded), Z_Construct_UDelegateFunction_SecondWind_OnGamestyleStackAdded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGamestyleStackAdded_MetaData), NewProp_OnGamestyleStackAdded_MetaData) }; // 2561842184
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_CurrentGamestyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_CurrentGamestyle = { "CurrentGamestyle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGamestyleSystem, CurrentGamestyle), Z_Construct_UEnum_SecondWind_EGamestyleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGamestyle_MetaData), NewProp_CurrentGamestyle_MetaData) }; // 2065761438
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_CurrentStacks = { "CurrentStacks", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGamestyleSystem, CurrentStacks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentStacks_MetaData), NewProp_CurrentStacks_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_GamestyleDatabase_ValueProp = { "GamestyleDatabase", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGamestyleData, METADATA_PARAMS(0, nullptr) }; // 2497682141
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_GamestyleDatabase_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_GamestyleDatabase_Key_KeyProp = { "GamestyleDatabase_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SecondWind_EGamestyleType, METADATA_PARAMS(0, nullptr) }; // 2065761438
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_GamestyleDatabase = { "GamestyleDatabase", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGamestyleSystem, GamestyleDatabase), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GamestyleDatabase_MetaData), NewProp_GamestyleDatabase_MetaData) }; // 2065761438 2497682141
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGamestyleSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_OnGamestyleAssigned,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_OnGamestyleStackAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_CurrentGamestyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_CurrentGamestyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_CurrentStacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_GamestyleDatabase_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_GamestyleDatabase_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_GamestyleDatabase_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamestyleSystem_Statics::NewProp_GamestyleDatabase,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGamestyleSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGamestyleSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGamestyleSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGamestyleSystem_Statics::ClassParams = {
	&UGamestyleSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGamestyleSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGamestyleSystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGamestyleSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGamestyleSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGamestyleSystem()
{
	if (!Z_Registration_Info_UClass_UGamestyleSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGamestyleSystem.OuterSingleton, Z_Construct_UClass_UGamestyleSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGamestyleSystem.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UGamestyleSystem>()
{
	return UGamestyleSystem::StaticClass();
}
UGamestyleSystem::UGamestyleSystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGamestyleSystem);
UGamestyleSystem::~UGamestyleSystem() {}
// End Class UGamestyleSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGamestyleType_StaticEnum, TEXT("EGamestyleType"), &Z_Registration_Info_UEnum_EGamestyleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2065761438U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGamestyleData::StaticStruct, Z_Construct_UScriptStruct_FGamestyleData_Statics::NewStructOps, TEXT("GamestyleData"), &Z_Registration_Info_UScriptStruct_GamestyleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGamestyleData), 2497682141U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGamestyleSystem, UGamestyleSystem::StaticClass, TEXT("UGamestyleSystem"), &Z_Registration_Info_UClass_UGamestyleSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGamestyleSystem), 3450958142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_969061008(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Systems_GamestyleSystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
