// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/BlockingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockingComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UBlockingComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UBlockingComponent_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EBlockDirection();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EBlockDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlockDirection;
static UEnum* EBlockDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlockDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlockDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EBlockDirection, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EBlockDirection"));
	}
	return Z_Registration_Info_UEnum_EBlockDirection.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EBlockDirection>()
{
	return EBlockDirection_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EBlockDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.DisplayName", "Center" },
		{ "Center.Name", "EBlockDirection::Center" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EBlockDirection::Left" },
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EBlockDirection::None" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EBlockDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlockDirection::None", (int64)EBlockDirection::None },
		{ "EBlockDirection::Left", (int64)EBlockDirection::Left },
		{ "EBlockDirection::Center", (int64)EBlockDirection::Center },
		{ "EBlockDirection::Right", (int64)EBlockDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EBlockDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EBlockDirection",
	"EBlockDirection",
	Z_Construct_UEnum_SecondWind_EBlockDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EBlockDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EBlockDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EBlockDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EBlockDirection()
{
	if (!Z_Registration_Info_UEnum_EBlockDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlockDirection.InnerSingleton, Z_Construct_UEnum_SecondWind_EBlockDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlockDirection.InnerSingleton;
}
// End Enum EBlockDirection

// Begin Class UBlockingComponent Function CalculateDamageReduction
struct Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics
{
	struct BlockingComponent_eventCalculateDamageReduction_Parms
	{
		EBlockDirection IncomingAttackDirection;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_IncomingAttackDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IncomingAttackDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::NewProp_IncomingAttackDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::NewProp_IncomingAttackDirection = { "IncomingAttackDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockingComponent_eventCalculateDamageReduction_Parms, IncomingAttackDirection), Z_Construct_UEnum_SecondWind_EBlockDirection, METADATA_PARAMS(0, nullptr) }; // 1162389921
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockingComponent_eventCalculateDamageReduction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::NewProp_IncomingAttackDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::NewProp_IncomingAttackDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockingComponent, nullptr, "CalculateDamageReduction", nullptr, nullptr, Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::BlockingComponent_eventCalculateDamageReduction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::BlockingComponent_eventCalculateDamageReduction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlockingComponent::execCalculateDamageReduction)
{
	P_GET_ENUM(EBlockDirection,Z_Param_IncomingAttackDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->CalculateDamageReduction(EBlockDirection(Z_Param_IncomingAttackDirection));
	P_NATIVE_END;
}
// End Class UBlockingComponent Function CalculateDamageReduction

// Begin Class UBlockingComponent Function GetBlockDirection
struct Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics
{
	struct BlockingComponent_eventGetBlockDirection_Parms
	{
		EBlockDirection ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockingComponent_eventGetBlockDirection_Parms, ReturnValue), Z_Construct_UEnum_SecondWind_EBlockDirection, METADATA_PARAMS(0, nullptr) }; // 1162389921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockingComponent, nullptr, "GetBlockDirection", nullptr, nullptr, Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::BlockingComponent_eventGetBlockDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::BlockingComponent_eventGetBlockDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlockingComponent_GetBlockDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlockingComponent_GetBlockDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlockingComponent::execGetBlockDirection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBlockDirection*)Z_Param__Result=P_THIS->GetBlockDirection();
	P_NATIVE_END;
}
// End Class UBlockingComponent Function GetBlockDirection

// Begin Class UBlockingComponent Function IsBlocking
struct Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics
{
	struct BlockingComponent_eventIsBlocking_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlockingComponent_eventIsBlocking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlockingComponent_eventIsBlocking_Parms), &Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockingComponent, nullptr, "IsBlocking", nullptr, nullptr, Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::BlockingComponent_eventIsBlocking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::BlockingComponent_eventIsBlocking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlockingComponent_IsBlocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlockingComponent_IsBlocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlockingComponent::execIsBlocking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBlocking();
	P_NATIVE_END;
}
// End Class UBlockingComponent Function IsBlocking

// Begin Class UBlockingComponent Function IsInCounterWindow
struct Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics
{
	struct BlockingComponent_eventIsInCounterWindow_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlockingComponent_eventIsInCounterWindow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlockingComponent_eventIsInCounterWindow_Parms), &Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockingComponent, nullptr, "IsInCounterWindow", nullptr, nullptr, Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::BlockingComponent_eventIsInCounterWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::BlockingComponent_eventIsInCounterWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlockingComponent::execIsInCounterWindow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInCounterWindow();
	P_NATIVE_END;
}
// End Class UBlockingComponent Function IsInCounterWindow

// Begin Class UBlockingComponent Function StartBlocking
struct Z_Construct_UFunction_UBlockingComponent_StartBlocking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockingComponent_StartBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockingComponent, nullptr, "StartBlocking", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_StartBlocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlockingComponent_StartBlocking_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlockingComponent_StartBlocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlockingComponent_StartBlocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlockingComponent::execStartBlocking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartBlocking();
	P_NATIVE_END;
}
// End Class UBlockingComponent Function StartBlocking

// Begin Class UBlockingComponent Function StopBlocking
struct Z_Construct_UFunction_UBlockingComponent_StopBlocking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockingComponent_StopBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockingComponent, nullptr, "StopBlocking", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_StopBlocking_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlockingComponent_StopBlocking_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlockingComponent_StopBlocking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlockingComponent_StopBlocking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlockingComponent::execStopBlocking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBlocking();
	P_NATIVE_END;
}
// End Class UBlockingComponent Function StopBlocking

// Begin Class UBlockingComponent Function TriggerCounterWindow
struct Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics
{
	struct BlockingComponent_eventTriggerCounterWindow_Parms
	{
		EBlockDirection IncomingAttackDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_IncomingAttackDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IncomingAttackDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::NewProp_IncomingAttackDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::NewProp_IncomingAttackDirection = { "IncomingAttackDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockingComponent_eventTriggerCounterWindow_Parms, IncomingAttackDirection), Z_Construct_UEnum_SecondWind_EBlockDirection, METADATA_PARAMS(0, nullptr) }; // 1162389921
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::NewProp_IncomingAttackDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::NewProp_IncomingAttackDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockingComponent, nullptr, "TriggerCounterWindow", nullptr, nullptr, Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::BlockingComponent_eventTriggerCounterWindow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::BlockingComponent_eventTriggerCounterWindow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlockingComponent::execTriggerCounterWindow)
{
	P_GET_ENUM(EBlockDirection,Z_Param_IncomingAttackDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerCounterWindow(EBlockDirection(Z_Param_IncomingAttackDirection));
	P_NATIVE_END;
}
// End Class UBlockingComponent Function TriggerCounterWindow

// Begin Class UBlockingComponent Function UpdateBlockDirection
struct Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics
{
	struct BlockingComponent_eventUpdateBlockDirection_Parms
	{
		float MouseX;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::NewProp_MouseX = { "MouseX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockingComponent_eventUpdateBlockDirection_Parms, MouseX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::NewProp_MouseX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlockingComponent, nullptr, "UpdateBlockDirection", nullptr, nullptr, Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::BlockingComponent_eventUpdateBlockDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::BlockingComponent_eventUpdateBlockDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlockingComponent::execUpdateBlockDirection)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MouseX);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateBlockDirection(Z_Param_MouseX);
	P_NATIVE_END;
}
// End Class UBlockingComponent Function UpdateBlockDirection

// Begin Class UBlockingComponent
void UBlockingComponent::StaticRegisterNativesUBlockingComponent()
{
	UClass* Class = UBlockingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateDamageReduction", &UBlockingComponent::execCalculateDamageReduction },
		{ "GetBlockDirection", &UBlockingComponent::execGetBlockDirection },
		{ "IsBlocking", &UBlockingComponent::execIsBlocking },
		{ "IsInCounterWindow", &UBlockingComponent::execIsInCounterWindow },
		{ "StartBlocking", &UBlockingComponent::execStartBlocking },
		{ "StopBlocking", &UBlockingComponent::execStopBlocking },
		{ "TriggerCounterWindow", &UBlockingComponent::execTriggerCounterWindow },
		{ "UpdateBlockDirection", &UBlockingComponent::execUpdateBlockDirection },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlockingComponent);
UClass* Z_Construct_UClass_UBlockingComponent_NoRegister()
{
	return UBlockingComponent::StaticClass();
}
struct Z_Construct_UClass_UBlockingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/BlockingComponent.h" },
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockDamageReduction_MetaData[] = {
		{ "Category", "Blocking" },
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterWindowDuration_MetaData[] = {
		{ "Category", "Blocking" },
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseSensitivity_MetaData[] = {
		{ "Category", "Blocking" },
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockZoneThreshold_MetaData[] = {
		{ "Category", "Blocking" },
		{ "ModuleRelativePath", "Components/BlockingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockDamageReduction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CounterWindowDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlockZoneThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlockingComponent_CalculateDamageReduction, "CalculateDamageReduction" }, // 3553013178
		{ &Z_Construct_UFunction_UBlockingComponent_GetBlockDirection, "GetBlockDirection" }, // 3503536223
		{ &Z_Construct_UFunction_UBlockingComponent_IsBlocking, "IsBlocking" }, // 2996520066
		{ &Z_Construct_UFunction_UBlockingComponent_IsInCounterWindow, "IsInCounterWindow" }, // 1730301101
		{ &Z_Construct_UFunction_UBlockingComponent_StartBlocking, "StartBlocking" }, // 1261828009
		{ &Z_Construct_UFunction_UBlockingComponent_StopBlocking, "StopBlocking" }, // 1001696738
		{ &Z_Construct_UFunction_UBlockingComponent_TriggerCounterWindow, "TriggerCounterWindow" }, // 3639141602
		{ &Z_Construct_UFunction_UBlockingComponent_UpdateBlockDirection, "UpdateBlockDirection" }, // 2727289925
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockingComponent_Statics::NewProp_BlockDamageReduction = { "BlockDamageReduction", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockingComponent, BlockDamageReduction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockDamageReduction_MetaData), NewProp_BlockDamageReduction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockingComponent_Statics::NewProp_CounterWindowDuration = { "CounterWindowDuration", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockingComponent, CounterWindowDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterWindowDuration_MetaData), NewProp_CounterWindowDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockingComponent_Statics::NewProp_MouseSensitivity = { "MouseSensitivity", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockingComponent, MouseSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseSensitivity_MetaData), NewProp_MouseSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBlockingComponent_Statics::NewProp_BlockZoneThreshold = { "BlockZoneThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlockingComponent, BlockZoneThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockZoneThreshold_MetaData), NewProp_BlockZoneThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlockingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockingComponent_Statics::NewProp_BlockDamageReduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockingComponent_Statics::NewProp_CounterWindowDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockingComponent_Statics::NewProp_MouseSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlockingComponent_Statics::NewProp_BlockZoneThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlockingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlockingComponent_Statics::ClassParams = {
	&UBlockingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlockingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlockingComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlockingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlockingComponent()
{
	if (!Z_Registration_Info_UClass_UBlockingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlockingComponent.OuterSingleton, Z_Construct_UClass_UBlockingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlockingComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UBlockingComponent>()
{
	return UBlockingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockingComponent);
UBlockingComponent::~UBlockingComponent() {}
// End Class UBlockingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlockDirection_StaticEnum, TEXT("EBlockDirection"), &Z_Registration_Info_UEnum_EBlockDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1162389921U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlockingComponent, UBlockingComponent::StaticClass, TEXT("UBlockingComponent"), &Z_Registration_Info_UClass_UBlockingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlockingComponent), 2362903798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_2556262351(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_BlockingComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
