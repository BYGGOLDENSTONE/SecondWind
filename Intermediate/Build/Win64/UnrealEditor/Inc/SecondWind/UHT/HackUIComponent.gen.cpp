// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/HackUIComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHackUIComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UHackComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UHackUIComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UHackUIComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class UHackUIComponent Function OnCounterProgressChanged
struct Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics
{
	struct HackUIComponent_eventOnCounterProgressChanged_Parms
	{
		int32 CurrentCounters;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Callbacks\n" },
#endif
		{ "ModuleRelativePath", "Components/HackUIComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Callbacks" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCounters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::NewProp_CurrentCounters = { "CurrentCounters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HackUIComponent_eventOnCounterProgressChanged_Parms, CurrentCounters), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::NewProp_CurrentCounters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackUIComponent, nullptr, "OnCounterProgressChanged", nullptr, nullptr, Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::HackUIComponent_eventOnCounterProgressChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::HackUIComponent_eventOnCounterProgressChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackUIComponent::execOnCounterProgressChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentCounters);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCounterProgressChanged(Z_Param_CurrentCounters);
	P_NATIVE_END;
}
// End Class UHackUIComponent Function OnCounterProgressChanged

// Begin Class UHackUIComponent Function OnCountersReset
struct Z_Construct_UFunction_UHackUIComponent_OnCountersReset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackUIComponent_OnCountersReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackUIComponent, nullptr, "OnCountersReset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackUIComponent_OnCountersReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackUIComponent_OnCountersReset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHackUIComponent_OnCountersReset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackUIComponent_OnCountersReset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackUIComponent::execOnCountersReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCountersReset();
	P_NATIVE_END;
}
// End Class UHackUIComponent Function OnCountersReset

// Begin Class UHackUIComponent Function OnHackAvailable
struct Z_Construct_UFunction_UHackUIComponent_OnHackAvailable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackUIComponent_OnHackAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackUIComponent, nullptr, "OnHackAvailable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackUIComponent_OnHackAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackUIComponent_OnHackAvailable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHackUIComponent_OnHackAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackUIComponent_OnHackAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackUIComponent::execOnHackAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHackAvailable();
	P_NATIVE_END;
}
// End Class UHackUIComponent Function OnHackAvailable

// Begin Class UHackUIComponent Function OnHackExecuted
struct Z_Construct_UFunction_UHackUIComponent_OnHackExecuted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/HackUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHackUIComponent_OnHackExecuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHackUIComponent, nullptr, "OnHackExecuted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHackUIComponent_OnHackExecuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHackUIComponent_OnHackExecuted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHackUIComponent_OnHackExecuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHackUIComponent_OnHackExecuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHackUIComponent::execOnHackExecuted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHackExecuted();
	P_NATIVE_END;
}
// End Class UHackUIComponent Function OnHackExecuted

// Begin Class UHackUIComponent
void UHackUIComponent::StaticRegisterNativesUHackUIComponent()
{
	UClass* Class = UHackUIComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCounterProgressChanged", &UHackUIComponent::execOnCounterProgressChanged },
		{ "OnCountersReset", &UHackUIComponent::execOnCountersReset },
		{ "OnHackAvailable", &UHackUIComponent::execOnHackAvailable },
		{ "OnHackExecuted", &UHackUIComponent::execOnHackExecuted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHackUIComponent);
UClass* Z_Construct_UClass_UHackUIComponent_NoRegister()
{
	return UHackUIComponent::StaticClass();
}
struct Z_Construct_UClass_UHackUIComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/HackUIComponent.h" },
		{ "ModuleRelativePath", "Components/HackUIComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/HackUIComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HackComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHackUIComponent_OnCounterProgressChanged, "OnCounterProgressChanged" }, // 735645983
		{ &Z_Construct_UFunction_UHackUIComponent_OnCountersReset, "OnCountersReset" }, // 1053820070
		{ &Z_Construct_UFunction_UHackUIComponent_OnHackAvailable, "OnHackAvailable" }, // 1717438621
		{ &Z_Construct_UFunction_UHackUIComponent_OnHackExecuted, "OnHackExecuted" }, // 3626407347
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHackUIComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHackUIComponent_Statics::NewProp_HackComponent = { "HackComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHackUIComponent, HackComponent), Z_Construct_UClass_UHackComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackComponent_MetaData), NewProp_HackComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHackUIComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHackUIComponent_Statics::NewProp_HackComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHackUIComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHackUIComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHackUIComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHackUIComponent_Statics::ClassParams = {
	&UHackUIComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHackUIComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHackUIComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHackUIComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHackUIComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHackUIComponent()
{
	if (!Z_Registration_Info_UClass_UHackUIComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHackUIComponent.OuterSingleton, Z_Construct_UClass_UHackUIComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHackUIComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UHackUIComponent>()
{
	return UHackUIComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHackUIComponent);
UHackUIComponent::~UHackUIComponent() {}
// End Class UHackUIComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHackUIComponent, UHackUIComponent::StaticClass, TEXT("UHackUIComponent"), &Z_Registration_Info_UClass_UHackUIComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHackUIComponent), 199707384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_58774307(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_HackUIComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
