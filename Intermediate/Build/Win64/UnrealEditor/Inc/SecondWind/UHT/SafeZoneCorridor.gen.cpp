// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Actors/SafeZoneCorridor.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZoneCorridor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SECONDWIND_API UClass* Z_Construct_UClass_ASafeZoneCorridor();
SECONDWIND_API UClass* Z_Construct_UClass_ASafeZoneCorridor_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindCharacter_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UMemoryShopComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class ASafeZoneCorridor Function OnCorridorEnter
struct Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics
{
	struct SafeZoneCorridor_eventOnCorridorEnter_Parms
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
		{ "ModuleRelativePath", "Actors/SafeZoneCorridor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SafeZoneCorridor_eventOnCorridorEnter_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SafeZoneCorridor_eventOnCorridorEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SafeZoneCorridor_eventOnCorridorEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SafeZoneCorridor_eventOnCorridorEnter_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SafeZoneCorridor_eventOnCorridorEnter_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SafeZoneCorridor_eventOnCorridorEnter_Parms), &Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SafeZoneCorridor_eventOnCorridorEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASafeZoneCorridor, nullptr, "OnCorridorEnter", nullptr, nullptr, Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::SafeZoneCorridor_eventOnCorridorEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::SafeZoneCorridor_eventOnCorridorEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASafeZoneCorridor::execOnCorridorEnter)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCorridorEnter(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ASafeZoneCorridor Function OnCorridorEnter

// Begin Class ASafeZoneCorridor Function OnCorridorExit
struct Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics
{
	struct SafeZoneCorridor_eventOnCorridorExit_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actors/SafeZoneCorridor.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SafeZoneCorridor_eventOnCorridorExit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SafeZoneCorridor_eventOnCorridorExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SafeZoneCorridor_eventOnCorridorExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SafeZoneCorridor_eventOnCorridorExit_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASafeZoneCorridor, nullptr, "OnCorridorExit", nullptr, nullptr, Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::SafeZoneCorridor_eventOnCorridorExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::SafeZoneCorridor_eventOnCorridorExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASafeZoneCorridor::execOnCorridorExit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCorridorExit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class ASafeZoneCorridor Function OnCorridorExit

// Begin Class ASafeZoneCorridor
void ASafeZoneCorridor::StaticRegisterNativesASafeZoneCorridor()
{
	UClass* Class = ASafeZoneCorridor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCorridorEnter", &ASafeZoneCorridor::execOnCorridorEnter },
		{ "OnCorridorExit", &ASafeZoneCorridor::execOnCorridorExit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASafeZoneCorridor);
UClass* Z_Construct_UClass_ASafeZoneCorridor_NoRegister()
{
	return ASafeZoneCorridor::StaticClass();
}
struct Z_Construct_UClass_ASafeZoneCorridor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/SafeZoneCorridor.h" },
		{ "ModuleRelativePath", "Actors/SafeZoneCorridor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorridorMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/SafeZoneCorridor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorridorTrigger_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/SafeZoneCorridor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MemoryShopComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actors/SafeZoneCorridor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorridorExtent_MetaData[] = {
		{ "Category", "Corridor Settings" },
		{ "ModuleRelativePath", "Actors/SafeZoneCorridor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMarketplace_MetaData[] = {
		{ "Category", "Corridor Settings" },
		{ "ModuleRelativePath", "Actors/SafeZoneCorridor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Actors/SafeZoneCorridor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CorridorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CorridorTrigger;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryShopComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CorridorExtent;
	static void NewProp_bIsMarketplace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMarketplace;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorEnter, "OnCorridorEnter" }, // 1010509756
		{ &Z_Construct_UFunction_ASafeZoneCorridor_OnCorridorExit, "OnCorridorExit" }, // 1202020944
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASafeZoneCorridor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_CorridorMesh = { "CorridorMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASafeZoneCorridor, CorridorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorridorMesh_MetaData), NewProp_CorridorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_CorridorTrigger = { "CorridorTrigger", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASafeZoneCorridor, CorridorTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorridorTrigger_MetaData), NewProp_CorridorTrigger_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_MemoryShopComponent = { "MemoryShopComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASafeZoneCorridor, MemoryShopComponent), Z_Construct_UClass_UMemoryShopComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MemoryShopComponent_MetaData), NewProp_MemoryShopComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_CorridorExtent = { "CorridorExtent", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASafeZoneCorridor, CorridorExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorridorExtent_MetaData), NewProp_CorridorExtent_MetaData) };
void Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_bIsMarketplace_SetBit(void* Obj)
{
	((ASafeZoneCorridor*)Obj)->bIsMarketplace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_bIsMarketplace = { "bIsMarketplace", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ASafeZoneCorridor), &Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_bIsMarketplace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMarketplace_MetaData), NewProp_bIsMarketplace_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASafeZoneCorridor, PlayerCharacter), Z_Construct_UClass_ASecondWindCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASafeZoneCorridor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_CorridorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_CorridorTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_MemoryShopComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_CorridorExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_bIsMarketplace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASafeZoneCorridor_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASafeZoneCorridor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASafeZoneCorridor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASafeZoneCorridor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASafeZoneCorridor_Statics::ClassParams = {
	&ASafeZoneCorridor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASafeZoneCorridor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASafeZoneCorridor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASafeZoneCorridor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASafeZoneCorridor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASafeZoneCorridor()
{
	if (!Z_Registration_Info_UClass_ASafeZoneCorridor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASafeZoneCorridor.OuterSingleton, Z_Construct_UClass_ASafeZoneCorridor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASafeZoneCorridor.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<ASafeZoneCorridor>()
{
	return ASafeZoneCorridor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASafeZoneCorridor);
ASafeZoneCorridor::~ASafeZoneCorridor() {}
// End Class ASafeZoneCorridor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASafeZoneCorridor, ASafeZoneCorridor::StaticClass, TEXT("ASafeZoneCorridor"), &Z_Registration_Info_UClass_ASafeZoneCorridor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASafeZoneCorridor), 4002189291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_4275506030(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Actors_SafeZoneCorridor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
