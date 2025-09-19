// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/WeakSideComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeakSideComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UWeakSideComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UWeakSideComponent_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EWeakSide();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EWeakSide
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeakSide;
static UEnum* EWeakSide_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeakSide.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeakSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EWeakSide, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EWeakSide"));
	}
	return Z_Registration_Info_UEnum_EWeakSide.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EWeakSide>()
{
	return EWeakSide_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EWeakSide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "EWeakSide::Left" },
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
		{ "None.Name", "EWeakSide::None" },
		{ "Right.Name", "EWeakSide::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeakSide::None", (int64)EWeakSide::None },
		{ "EWeakSide::Left", (int64)EWeakSide::Left },
		{ "EWeakSide::Right", (int64)EWeakSide::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EWeakSide_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EWeakSide",
	"EWeakSide",
	Z_Construct_UEnum_SecondWind_EWeakSide_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EWeakSide_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EWeakSide_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EWeakSide_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EWeakSide()
{
	if (!Z_Registration_Info_UEnum_EWeakSide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeakSide.InnerSingleton, Z_Construct_UEnum_SecondWind_EWeakSide_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeakSide.InnerSingleton;
}
// End Enum EWeakSide

// Begin Class UWeakSideComponent Function ActivateWeakSide
struct Z_Construct_UFunction_UWeakSideComponent_ActivateWeakSide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WeakSide" },
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeakSideComponent_ActivateWeakSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeakSideComponent, nullptr, "ActivateWeakSide", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_ActivateWeakSide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeakSideComponent_ActivateWeakSide_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeakSideComponent_ActivateWeakSide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeakSideComponent_ActivateWeakSide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeakSideComponent::execActivateWeakSide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateWeakSide();
	P_NATIVE_END;
}
// End Class UWeakSideComponent Function ActivateWeakSide

// Begin Class UWeakSideComponent Function DeactivateWeakSide
struct Z_Construct_UFunction_UWeakSideComponent_DeactivateWeakSide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WeakSide" },
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeakSideComponent_DeactivateWeakSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeakSideComponent, nullptr, "DeactivateWeakSide", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_DeactivateWeakSide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeakSideComponent_DeactivateWeakSide_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeakSideComponent_DeactivateWeakSide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeakSideComponent_DeactivateWeakSide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeakSideComponent::execDeactivateWeakSide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DeactivateWeakSide();
	P_NATIVE_END;
}
// End Class UWeakSideComponent Function DeactivateWeakSide

// Begin Class UWeakSideComponent Function GetCurrentWeakSide
struct Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics
{
	struct WeakSideComponent_eventGetCurrentWeakSide_Parms
	{
		EWeakSide ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WeakSide" },
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeakSideComponent_eventGetCurrentWeakSide_Parms, ReturnValue), Z_Construct_UEnum_SecondWind_EWeakSide, METADATA_PARAMS(0, nullptr) }; // 3902537673
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeakSideComponent, nullptr, "GetCurrentWeakSide", nullptr, nullptr, Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::WeakSideComponent_eventGetCurrentWeakSide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::WeakSideComponent_eventGetCurrentWeakSide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeakSideComponent::execGetCurrentWeakSide)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWeakSide*)Z_Param__Result=P_THIS->GetCurrentWeakSide();
	P_NATIVE_END;
}
// End Class UWeakSideComponent Function GetCurrentWeakSide

// Begin Class UWeakSideComponent Function IsAttackFromWeakSide
struct Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics
{
	struct WeakSideComponent_eventIsAttackFromWeakSide_Parms
	{
		FVector AttackerLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WeakSide" },
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttackerLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::NewProp_AttackerLocation = { "AttackerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WeakSideComponent_eventIsAttackFromWeakSide_Parms, AttackerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackerLocation_MetaData), NewProp_AttackerLocation_MetaData) };
void Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeakSideComponent_eventIsAttackFromWeakSide_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeakSideComponent_eventIsAttackFromWeakSide_Parms), &Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::NewProp_AttackerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeakSideComponent, nullptr, "IsAttackFromWeakSide", nullptr, nullptr, Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::WeakSideComponent_eventIsAttackFromWeakSide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::WeakSideComponent_eventIsAttackFromWeakSide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeakSideComponent::execIsAttackFromWeakSide)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_AttackerLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsAttackFromWeakSide(Z_Param_Out_AttackerLocation);
	P_NATIVE_END;
}
// End Class UWeakSideComponent Function IsAttackFromWeakSide

// Begin Class UWeakSideComponent Function IsWeakSideActive
struct Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics
{
	struct WeakSideComponent_eventIsWeakSideActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WeakSide" },
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WeakSideComponent_eventIsWeakSideActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WeakSideComponent_eventIsWeakSideActive_Parms), &Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeakSideComponent, nullptr, "IsWeakSideActive", nullptr, nullptr, Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::WeakSideComponent_eventIsWeakSideActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::WeakSideComponent_eventIsWeakSideActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeakSideComponent::execIsWeakSideActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsWeakSideActive();
	P_NATIVE_END;
}
// End Class UWeakSideComponent Function IsWeakSideActive

// Begin Class UWeakSideComponent Function OnWeakSideHit
struct Z_Construct_UFunction_UWeakSideComponent_OnWeakSideHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WeakSide" },
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeakSideComponent_OnWeakSideHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeakSideComponent, nullptr, "OnWeakSideHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWeakSideComponent_OnWeakSideHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWeakSideComponent_OnWeakSideHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWeakSideComponent_OnWeakSideHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWeakSideComponent_OnWeakSideHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWeakSideComponent::execOnWeakSideHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnWeakSideHit();
	P_NATIVE_END;
}
// End Class UWeakSideComponent Function OnWeakSideHit

// Begin Class UWeakSideComponent
void UWeakSideComponent::StaticRegisterNativesUWeakSideComponent()
{
	UClass* Class = UWeakSideComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateWeakSide", &UWeakSideComponent::execActivateWeakSide },
		{ "DeactivateWeakSide", &UWeakSideComponent::execDeactivateWeakSide },
		{ "GetCurrentWeakSide", &UWeakSideComponent::execGetCurrentWeakSide },
		{ "IsAttackFromWeakSide", &UWeakSideComponent::execIsAttackFromWeakSide },
		{ "IsWeakSideActive", &UWeakSideComponent::execIsWeakSideActive },
		{ "OnWeakSideHit", &UWeakSideComponent::execOnWeakSideHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeakSideComponent);
UClass* Z_Construct_UClass_UWeakSideComponent_NoRegister()
{
	return UWeakSideComponent::StaticClass();
}
struct Z_Construct_UClass_UWeakSideComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/WeakSideComponent.h" },
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWeakSideActive_MetaData[] = {
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentWeakSide_MetaData[] = {
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakSideTimer_MetaData[] = {
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownTimer_MetaData[] = {
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakSideDuration_MetaData[] = {
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakSideCooldown_MetaData[] = {
		{ "ModuleRelativePath", "Components/WeakSideComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWeakSideActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeakSideActive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentWeakSide_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentWeakSide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeakSideTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CooldownTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeakSideDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeakSideCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeakSideComponent_ActivateWeakSide, "ActivateWeakSide" }, // 1723794294
		{ &Z_Construct_UFunction_UWeakSideComponent_DeactivateWeakSide, "DeactivateWeakSide" }, // 558239046
		{ &Z_Construct_UFunction_UWeakSideComponent_GetCurrentWeakSide, "GetCurrentWeakSide" }, // 3187817078
		{ &Z_Construct_UFunction_UWeakSideComponent_IsAttackFromWeakSide, "IsAttackFromWeakSide" }, // 4061223256
		{ &Z_Construct_UFunction_UWeakSideComponent_IsWeakSideActive, "IsWeakSideActive" }, // 2874263200
		{ &Z_Construct_UFunction_UWeakSideComponent_OnWeakSideHit, "OnWeakSideHit" }, // 3186024440
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeakSideComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_bWeakSideActive_SetBit(void* Obj)
{
	((UWeakSideComponent*)Obj)->bWeakSideActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_bWeakSideActive = { "bWeakSideActive", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWeakSideComponent), &Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_bWeakSideActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWeakSideActive_MetaData), NewProp_bWeakSideActive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_CurrentWeakSide_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_CurrentWeakSide = { "CurrentWeakSide", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeakSideComponent, CurrentWeakSide), Z_Construct_UEnum_SecondWind_EWeakSide, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentWeakSide_MetaData), NewProp_CurrentWeakSide_MetaData) }; // 3902537673
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_WeakSideTimer = { "WeakSideTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeakSideComponent, WeakSideTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakSideTimer_MetaData), NewProp_WeakSideTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_CooldownTimer = { "CooldownTimer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeakSideComponent, CooldownTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownTimer_MetaData), NewProp_CooldownTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_WeakSideDuration = { "WeakSideDuration", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeakSideComponent, WeakSideDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakSideDuration_MetaData), NewProp_WeakSideDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_WeakSideCooldown = { "WeakSideCooldown", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWeakSideComponent, WeakSideCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakSideCooldown_MetaData), NewProp_WeakSideCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeakSideComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_bWeakSideActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_CurrentWeakSide_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_CurrentWeakSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_WeakSideTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_CooldownTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_WeakSideDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeakSideComponent_Statics::NewProp_WeakSideCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeakSideComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWeakSideComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWeakSideComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeakSideComponent_Statics::ClassParams = {
	&UWeakSideComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWeakSideComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWeakSideComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWeakSideComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UWeakSideComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWeakSideComponent()
{
	if (!Z_Registration_Info_UClass_UWeakSideComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeakSideComponent.OuterSingleton, Z_Construct_UClass_UWeakSideComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWeakSideComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UWeakSideComponent>()
{
	return UWeakSideComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWeakSideComponent);
UWeakSideComponent::~UWeakSideComponent() {}
// End Class UWeakSideComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeakSide_StaticEnum, TEXT("EWeakSide"), &Z_Registration_Info_UEnum_EWeakSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3902537673U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWeakSideComponent, UWeakSideComponent::StaticClass, TEXT("UWeakSideComponent"), &Z_Registration_Info_UClass_UWeakSideComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeakSideComponent), 2930797529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_211498089(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_WeakSideComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
