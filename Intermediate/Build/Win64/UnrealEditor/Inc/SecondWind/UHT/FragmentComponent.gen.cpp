// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/FragmentComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFragmentComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UFragmentComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UFragmentComponent_NoRegister();
SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Delegate FOnFragmentsChanged
struct Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics
{
	struct _Script_SecondWind_eventOnFragmentsChanged_Parms
	{
		int32 NewTotal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/FragmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewTotal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::NewProp_NewTotal = { "NewTotal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SecondWind_eventOnFragmentsChanged_Parms, NewTotal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::NewProp_NewTotal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SecondWind, nullptr, "OnFragmentsChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::_Script_SecondWind_eventOnFragmentsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::_Script_SecondWind_eventOnFragmentsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFragmentsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFragmentsChanged, int32 NewTotal)
{
	struct _Script_SecondWind_eventOnFragmentsChanged_Parms
	{
		int32 NewTotal;
	};
	_Script_SecondWind_eventOnFragmentsChanged_Parms Parms;
	Parms.NewTotal=NewTotal;
	OnFragmentsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFragmentsChanged

// Begin Class UFragmentComponent
void UFragmentComponent::StaticRegisterNativesUFragmentComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFragmentComponent);
UClass* Z_Construct_UClass_UFragmentComponent_NoRegister()
{
	return UFragmentComponent::StaticClass();
}
struct Z_Construct_UClass_UFragmentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/FragmentComponent.h" },
		{ "ModuleRelativePath", "Components/FragmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFragmentsChanged_MetaData[] = {
		{ "ModuleRelativePath", "Components/FragmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFragments_MetaData[] = {
		{ "Category", "Fragments" },
		{ "ModuleRelativePath", "Components/FragmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFragments_MetaData[] = {
		{ "Category", "Fragments" },
		{ "ModuleRelativePath", "Components/FragmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFragmentsChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentFragments;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFragments;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFragmentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFragmentComponent_Statics::NewProp_OnFragmentsChanged = { "OnFragmentsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFragmentComponent, OnFragmentsChanged), Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFragmentsChanged_MetaData), NewProp_OnFragmentsChanged_MetaData) }; // 2674193520
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFragmentComponent_Statics::NewProp_CurrentFragments = { "CurrentFragments", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFragmentComponent, CurrentFragments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFragments_MetaData), NewProp_CurrentFragments_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFragmentComponent_Statics::NewProp_MaxFragments = { "MaxFragments", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFragmentComponent, MaxFragments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFragments_MetaData), NewProp_MaxFragments_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFragmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFragmentComponent_Statics::NewProp_OnFragmentsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFragmentComponent_Statics::NewProp_CurrentFragments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFragmentComponent_Statics::NewProp_MaxFragments,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFragmentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFragmentComponent_Statics::ClassParams = {
	&UFragmentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFragmentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFragmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFragmentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFragmentComponent()
{
	if (!Z_Registration_Info_UClass_UFragmentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFragmentComponent.OuterSingleton, Z_Construct_UClass_UFragmentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFragmentComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UFragmentComponent>()
{
	return UFragmentComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFragmentComponent);
UFragmentComponent::~UFragmentComponent() {}
// End Class UFragmentComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFragmentComponent, UFragmentComponent::StaticClass, TEXT("UFragmentComponent"), &Z_Registration_Info_UClass_UFragmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFragmentComponent), 3061084776U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_1613968632(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_FragmentComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
