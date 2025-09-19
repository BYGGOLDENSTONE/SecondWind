// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/AnimNotifies/CounterWindowNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCounterWindowNotify() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SECONDWIND_API UClass* Z_Construct_UClass_UCounterWindowNotify();
SECONDWIND_API UClass* Z_Construct_UClass_UCounterWindowNotify_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class UCounterWindowNotify
void UCounterWindowNotify::StaticRegisterNativesUCounterWindowNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCounterWindowNotify);
UClass* Z_Construct_UClass_UCounterWindowNotify_NoRegister()
{
	return UCounterWindowNotify::StaticClass();
}
struct Z_Construct_UClass_UCounterWindowNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifies/CounterWindowNotify.h" },
		{ "ModuleRelativePath", "AnimNotifies/CounterWindowNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartWindow_MetaData[] = {
		{ "Category", "Counter" },
		{ "ModuleRelativePath", "AnimNotifies/CounterWindowNotify.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindowDuration_MetaData[] = {
		{ "Category", "Counter" },
		{ "ModuleRelativePath", "AnimNotifies/CounterWindowNotify.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bStartWindow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindowDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCounterWindowNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCounterWindowNotify_Statics::NewProp_bStartWindow_SetBit(void* Obj)
{
	((UCounterWindowNotify*)Obj)->bStartWindow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCounterWindowNotify_Statics::NewProp_bStartWindow = { "bStartWindow", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCounterWindowNotify), &Z_Construct_UClass_UCounterWindowNotify_Statics::NewProp_bStartWindow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartWindow_MetaData), NewProp_bStartWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCounterWindowNotify_Statics::NewProp_WindowDuration = { "WindowDuration", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCounterWindowNotify, WindowDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindowDuration_MetaData), NewProp_WindowDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCounterWindowNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCounterWindowNotify_Statics::NewProp_bStartWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCounterWindowNotify_Statics::NewProp_WindowDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCounterWindowNotify_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCounterWindowNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCounterWindowNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCounterWindowNotify_Statics::ClassParams = {
	&UCounterWindowNotify::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCounterWindowNotify_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCounterWindowNotify_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCounterWindowNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UCounterWindowNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCounterWindowNotify()
{
	if (!Z_Registration_Info_UClass_UCounterWindowNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCounterWindowNotify.OuterSingleton, Z_Construct_UClass_UCounterWindowNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCounterWindowNotify.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UCounterWindowNotify>()
{
	return UCounterWindowNotify::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCounterWindowNotify);
UCounterWindowNotify::~UCounterWindowNotify() {}
// End Class UCounterWindowNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_CounterWindowNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCounterWindowNotify, UCounterWindowNotify::StaticClass, TEXT("UCounterWindowNotify"), &Z_Registration_Info_UClass_UCounterWindowNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCounterWindowNotify), 4161099181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_CounterWindowNotify_h_1694532168(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_CounterWindowNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_AnimNotifies_CounterWindowNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
