// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/MemoryShopComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemoryShopComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UMemoryShopComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UMemoryShopComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class UMemoryShopComponent Function CloseMemoryShop
struct Z_Construct_UFunction_UMemoryShopComponent_CloseMemoryShop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/MemoryShopComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryShopComponent_CloseMemoryShop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryShopComponent, nullptr, "CloseMemoryShop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryShopComponent_CloseMemoryShop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryShopComponent_CloseMemoryShop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMemoryShopComponent_CloseMemoryShop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryShopComponent_CloseMemoryShop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryShopComponent::execCloseMemoryShop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseMemoryShop();
	P_NATIVE_END;
}
// End Class UMemoryShopComponent Function CloseMemoryShop

// Begin Class UMemoryShopComponent Function IsShopOpen
struct Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics
{
	struct MemoryShopComponent_eventIsShopOpen_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/MemoryShopComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MemoryShopComponent_eventIsShopOpen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MemoryShopComponent_eventIsShopOpen_Parms), &Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryShopComponent, nullptr, "IsShopOpen", nullptr, nullptr, Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::MemoryShopComponent_eventIsShopOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::MemoryShopComponent_eventIsShopOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryShopComponent::execIsShopOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsShopOpen();
	P_NATIVE_END;
}
// End Class UMemoryShopComponent Function IsShopOpen

// Begin Class UMemoryShopComponent Function OpenMemoryShop
struct Z_Construct_UFunction_UMemoryShopComponent_OpenMemoryShop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/MemoryShopComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMemoryShopComponent_OpenMemoryShop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMemoryShopComponent, nullptr, "OpenMemoryShop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMemoryShopComponent_OpenMemoryShop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMemoryShopComponent_OpenMemoryShop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMemoryShopComponent_OpenMemoryShop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMemoryShopComponent_OpenMemoryShop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMemoryShopComponent::execOpenMemoryShop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenMemoryShop();
	P_NATIVE_END;
}
// End Class UMemoryShopComponent Function OpenMemoryShop

// Begin Class UMemoryShopComponent
void UMemoryShopComponent::StaticRegisterNativesUMemoryShopComponent()
{
	UClass* Class = UMemoryShopComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseMemoryShop", &UMemoryShopComponent::execCloseMemoryShop },
		{ "IsShopOpen", &UMemoryShopComponent::execIsShopOpen },
		{ "OpenMemoryShop", &UMemoryShopComponent::execOpenMemoryShop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMemoryShopComponent);
UClass* Z_Construct_UClass_UMemoryShopComponent_NoRegister()
{
	return UMemoryShopComponent::StaticClass();
}
struct Z_Construct_UClass_UMemoryShopComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/MemoryShopComponent.h" },
		{ "ModuleRelativePath", "Components/MemoryShopComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsShopOpen_MetaData[] = {
		{ "ModuleRelativePath", "Components/MemoryShopComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsShopOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShopOpen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMemoryShopComponent_CloseMemoryShop, "CloseMemoryShop" }, // 3089585169
		{ &Z_Construct_UFunction_UMemoryShopComponent_IsShopOpen, "IsShopOpen" }, // 1218437955
		{ &Z_Construct_UFunction_UMemoryShopComponent_OpenMemoryShop, "OpenMemoryShop" }, // 2678493602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMemoryShopComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMemoryShopComponent_Statics::NewProp_bIsShopOpen_SetBit(void* Obj)
{
	((UMemoryShopComponent*)Obj)->bIsShopOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMemoryShopComponent_Statics::NewProp_bIsShopOpen = { "bIsShopOpen", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMemoryShopComponent), &Z_Construct_UClass_UMemoryShopComponent_Statics::NewProp_bIsShopOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsShopOpen_MetaData), NewProp_bIsShopOpen_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMemoryShopComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryShopComponent_Statics::NewProp_bIsShopOpen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryShopComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMemoryShopComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryShopComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMemoryShopComponent_Statics::ClassParams = {
	&UMemoryShopComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMemoryShopComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryShopComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryShopComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMemoryShopComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMemoryShopComponent()
{
	if (!Z_Registration_Info_UClass_UMemoryShopComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMemoryShopComponent.OuterSingleton, Z_Construct_UClass_UMemoryShopComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMemoryShopComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UMemoryShopComponent>()
{
	return UMemoryShopComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMemoryShopComponent);
UMemoryShopComponent::~UMemoryShopComponent() {}
// End Class UMemoryShopComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMemoryShopComponent, UMemoryShopComponent::StaticClass, TEXT("UMemoryShopComponent"), &Z_Registration_Info_UClass_UMemoryShopComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMemoryShopComponent), 3850188504U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_2785318940(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_MemoryShopComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
