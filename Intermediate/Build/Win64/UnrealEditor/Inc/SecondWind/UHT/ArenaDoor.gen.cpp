// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Actors/ArenaDoor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaDoor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaDoor();
SECONDWIND_API UClass* Z_Construct_UClass_AArenaDoor_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindCharacter_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EDoorState();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EDoorType();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EDoorState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorState;
static UEnum* EDoorState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDoorState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDoorState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EDoorState, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EDoorState"));
	}
	return Z_Registration_Info_UEnum_EDoorState.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EDoorState>()
{
	return EDoorState_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EDoorState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Closed.Name", "EDoorState::Closed" },
		{ "Locked.Name", "EDoorState::Locked" },
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
		{ "Open.Name", "EDoorState::Open" },
		{ "Opening.Name", "EDoorState::Opening" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDoorState::Closed", (int64)EDoorState::Closed },
		{ "EDoorState::Opening", (int64)EDoorState::Opening },
		{ "EDoorState::Open", (int64)EDoorState::Open },
		{ "EDoorState::Locked", (int64)EDoorState::Locked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EDoorState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EDoorState",
	"EDoorState",
	Z_Construct_UEnum_SecondWind_EDoorState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EDoorState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EDoorState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EDoorState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EDoorState()
{
	if (!Z_Registration_Info_UEnum_EDoorState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorState.InnerSingleton, Z_Construct_UEnum_SecondWind_EDoorState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDoorState.InnerSingleton;
}
// End Enum EDoorState

// Begin Enum EDoorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorType;
static UEnum* EDoorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDoorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDoorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EDoorType, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EDoorType"));
	}
	return Z_Registration_Info_UEnum_EDoorType.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EDoorType>()
{
	return EDoorType_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EDoorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ArenaEntry.Name", "EDoorType::ArenaEntry" },
		{ "ArenaExit.Comment", "// Requires no combat to open\n" },
		{ "ArenaExit.Name", "EDoorType::ArenaExit" },
		{ "ArenaExit.ToolTip", "Requires no combat to open" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
		{ "SafeZone.Comment", "// Requires enemy defeated to open\n" },
		{ "SafeZone.Name", "EDoorType::SafeZone" },
		{ "SafeZone.ToolTip", "Requires enemy defeated to open" },
		{ "StartingHub.Comment", "// Always accessible\n" },
		{ "StartingHub.Name", "EDoorType::StartingHub" },
		{ "StartingHub.ToolTip", "Always accessible" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDoorType::ArenaEntry", (int64)EDoorType::ArenaEntry },
		{ "EDoorType::ArenaExit", (int64)EDoorType::ArenaExit },
		{ "EDoorType::SafeZone", (int64)EDoorType::SafeZone },
		{ "EDoorType::StartingHub", (int64)EDoorType::StartingHub },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EDoorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EDoorType",
	"EDoorType",
	Z_Construct_UEnum_SecondWind_EDoorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EDoorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EDoorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EDoorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EDoorType()
{
	if (!Z_Registration_Info_UEnum_EDoorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorType.InnerSingleton, Z_Construct_UEnum_SecondWind_EDoorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDoorType.InnerSingleton;
}
// End Enum EDoorType

// Begin Class AArenaDoor Function OnProximityBeginOverlap
struct Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics
{
	struct ArenaDoor_eventOnProximityBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaDoor_eventOnProximityBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaDoor_eventOnProximityBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaDoor_eventOnProximityBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaDoor_eventOnProximityBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((ArenaDoor_eventOnProximityBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ArenaDoor_eventOnProximityBeginOverlap_Parms), &Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaDoor_eventOnProximityBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaDoor, nullptr, "OnProximityBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::ArenaDoor_eventOnProximityBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::ArenaDoor_eventOnProximityBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArenaDoor::execOnProximityBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProximityBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AArenaDoor Function OnProximityBeginOverlap

// Begin Class AArenaDoor Function OnProximityEndOverlap
struct Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics
{
	struct ArenaDoor_eventOnProximityEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaDoor_eventOnProximityEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaDoor_eventOnProximityEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaDoor_eventOnProximityEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArenaDoor_eventOnProximityEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaDoor, nullptr, "OnProximityEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::ArenaDoor_eventOnProximityEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::ArenaDoor_eventOnProximityEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AArenaDoor::execOnProximityEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnProximityEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AArenaDoor Function OnProximityEndOverlap

// Begin Class AArenaDoor
void AArenaDoor::StaticRegisterNativesAArenaDoor()
{
	UClass* Class = AArenaDoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnProximityBeginOverlap", &AArenaDoor::execOnProximityBeginOverlap },
		{ "OnProximityEndOverlap", &AArenaDoor::execOnProximityEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArenaDoor);
UClass* Z_Construct_UClass_AArenaDoor_NoRegister()
{
	return AArenaDoor::StaticClass();
}
struct Z_Construct_UClass_AArenaDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/ArenaDoor.h" },
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorFrameMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProximityTrigger_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProximityRequiredTime_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorOpenSpeed_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorOpenAngle_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProximityBoxExtent_MetaData[] = {
		{ "Category", "Door Settings" },
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Actors/ArenaDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorFrameMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProximityTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProximityRequiredTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorOpenSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorOpenAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProximityBoxExtent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AArenaDoor_OnProximityBeginOverlap, "OnProximityBeginOverlap" }, // 933963403
		{ &Z_Construct_UFunction_AArenaDoor_OnProximityEndOverlap, "OnProximityEndOverlap" }, // 3343627178
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaDoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaDoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaDoor_Statics::NewProp_DoorFrameMesh = { "DoorFrameMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaDoor, DoorFrameMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorFrameMesh_MetaData), NewProp_DoorFrameMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaDoor_Statics::NewProp_ProximityTrigger = { "ProximityTrigger", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaDoor, ProximityTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProximityTrigger_MetaData), NewProp_ProximityTrigger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArenaDoor_Statics::NewProp_ProximityRequiredTime = { "ProximityRequiredTime", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaDoor, ProximityRequiredTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProximityRequiredTime_MetaData), NewProp_ProximityRequiredTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArenaDoor_Statics::NewProp_DoorOpenSpeed = { "DoorOpenSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaDoor, DoorOpenSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorOpenSpeed_MetaData), NewProp_DoorOpenSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArenaDoor_Statics::NewProp_DoorOpenAngle = { "DoorOpenAngle", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaDoor, DoorOpenAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorOpenAngle_MetaData), NewProp_DoorOpenAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AArenaDoor_Statics::NewProp_ProximityBoxExtent = { "ProximityBoxExtent", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaDoor, ProximityBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProximityBoxExtent_MetaData), NewProp_ProximityBoxExtent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaDoor_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AArenaDoor, PlayerCharacter), Z_Construct_UClass_ASecondWindCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArenaDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaDoor_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaDoor_Statics::NewProp_DoorFrameMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaDoor_Statics::NewProp_ProximityTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaDoor_Statics::NewProp_ProximityRequiredTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaDoor_Statics::NewProp_DoorOpenSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaDoor_Statics::NewProp_DoorOpenAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaDoor_Statics::NewProp_ProximityBoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaDoor_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaDoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AArenaDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArenaDoor_Statics::ClassParams = {
	&AArenaDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AArenaDoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AArenaDoor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArenaDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_AArenaDoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArenaDoor()
{
	if (!Z_Registration_Info_UClass_AArenaDoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArenaDoor.OuterSingleton, Z_Construct_UClass_AArenaDoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArenaDoor.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<AArenaDoor>()
{
	return AArenaDoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaDoor);
AArenaDoor::~AArenaDoor() {}
// End Class AArenaDoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDoorState_StaticEnum, TEXT("EDoorState"), &Z_Registration_Info_UEnum_EDoorState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 385068807U) },
		{ EDoorType_StaticEnum, TEXT("EDoorType"), &Z_Registration_Info_UEnum_EDoorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2825614154U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArenaDoor, AArenaDoor::StaticClass, TEXT("AArenaDoor"), &Z_Registration_Info_UClass_AArenaDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArenaDoor), 3768205744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_1034488774(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_ArenaDoor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
