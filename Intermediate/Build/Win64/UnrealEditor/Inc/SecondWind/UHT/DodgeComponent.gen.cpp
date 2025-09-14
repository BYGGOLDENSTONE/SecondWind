// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/Components/DodgeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UDodgeComponent();
SECONDWIND_API UClass* Z_Construct_UClass_UDodgeComponent_NoRegister();
SECONDWIND_API UEnum* Z_Construct_UEnum_SecondWind_EDodgeDirection();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Enum EDodgeDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDodgeDirection;
static UEnum* EDodgeDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDodgeDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDodgeDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecondWind_EDodgeDirection, (UObject*)Z_Construct_UPackage__Script_SecondWind(), TEXT("EDodgeDirection"));
	}
	return Z_Registration_Info_UEnum_EDodgeDirection.OuterSingleton;
}
template<> SECONDWIND_API UEnum* StaticEnum<EDodgeDirection>()
{
	return EDodgeDirection_StaticEnum();
}
struct Z_Construct_UEnum_SecondWind_EDodgeDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.DisplayName", "Back" },
		{ "Back.Name", "EDodgeDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Forward.DisplayName", "Forward" },
		{ "Forward.Name", "EDodgeDirection::Forward" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EDodgeDirection::Left" },
		{ "ModuleRelativePath", "Components/DodgeComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDodgeDirection::None" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EDodgeDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDodgeDirection::None", (int64)EDodgeDirection::None },
		{ "EDodgeDirection::Left", (int64)EDodgeDirection::Left },
		{ "EDodgeDirection::Right", (int64)EDodgeDirection::Right },
		{ "EDodgeDirection::Back", (int64)EDodgeDirection::Back },
		{ "EDodgeDirection::Forward", (int64)EDodgeDirection::Forward },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecondWind_EDodgeDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecondWind,
	nullptr,
	"EDodgeDirection",
	"EDodgeDirection",
	Z_Construct_UEnum_SecondWind_EDodgeDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EDodgeDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecondWind_EDodgeDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecondWind_EDodgeDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecondWind_EDodgeDirection()
{
	if (!Z_Registration_Info_UEnum_EDodgeDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDodgeDirection.InnerSingleton, Z_Construct_UEnum_SecondWind_EDodgeDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDodgeDirection.InnerSingleton;
}
// End Enum EDodgeDirection

// Begin Class UDodgeComponent
void UDodgeComponent::StaticRegisterNativesUDodgeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDodgeComponent);
UClass* Z_Construct_UClass_UDodgeComponent_NoRegister()
{
	return UDodgeComponent::StaticClass();
}
struct Z_Construct_UClass_UDodgeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DodgeComponent.h" },
		{ "ModuleRelativePath", "Components/DodgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionHoldThreshold_MetaData[] = {
		{ "Category", "Dodge Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dodge settings\n" },
#endif
		{ "ModuleRelativePath", "Components/DodgeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dodge settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CounterWindowDuration_MetaData[] = {
		{ "Category", "Dodge Settings" },
		{ "ModuleRelativePath", "Components/DodgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeakSideDamageMultiplier_MetaData[] = {
		{ "Category", "Dodge Settings" },
		{ "ModuleRelativePath", "Components/DodgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeCooldown_MetaData[] = {
		{ "Category", "Dodge Settings" },
		{ "ModuleRelativePath", "Components/DodgeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashDuration_MetaData[] = {
		{ "Category", "Dash Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dash settings\n" },
#endif
		{ "ModuleRelativePath", "Components/DodgeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dash settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeapAttackWindow_MetaData[] = {
		{ "Category", "Dash Settings" },
		{ "ModuleRelativePath", "Components/DodgeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionHoldThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CounterWindowDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeakSideDamageMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DodgeCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DashDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeapAttackWindow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDodgeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDodgeComponent_Statics::NewProp_DirectionHoldThreshold = { "DirectionHoldThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDodgeComponent, DirectionHoldThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionHoldThreshold_MetaData), NewProp_DirectionHoldThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDodgeComponent_Statics::NewProp_CounterWindowDuration = { "CounterWindowDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDodgeComponent, CounterWindowDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CounterWindowDuration_MetaData), NewProp_CounterWindowDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDodgeComponent_Statics::NewProp_WeakSideDamageMultiplier = { "WeakSideDamageMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDodgeComponent, WeakSideDamageMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeakSideDamageMultiplier_MetaData), NewProp_WeakSideDamageMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDodgeComponent_Statics::NewProp_DodgeCooldown = { "DodgeCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDodgeComponent, DodgeCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeCooldown_MetaData), NewProp_DodgeCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDodgeComponent_Statics::NewProp_DashDuration = { "DashDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDodgeComponent, DashDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashDuration_MetaData), NewProp_DashDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDodgeComponent_Statics::NewProp_LeapAttackWindow = { "LeapAttackWindow", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDodgeComponent, LeapAttackWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeapAttackWindow_MetaData), NewProp_LeapAttackWindow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDodgeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDodgeComponent_Statics::NewProp_DirectionHoldThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDodgeComponent_Statics::NewProp_CounterWindowDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDodgeComponent_Statics::NewProp_WeakSideDamageMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDodgeComponent_Statics::NewProp_DodgeCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDodgeComponent_Statics::NewProp_DashDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDodgeComponent_Statics::NewProp_LeapAttackWindow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDodgeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDodgeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDodgeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDodgeComponent_Statics::ClassParams = {
	&UDodgeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDodgeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDodgeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDodgeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDodgeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDodgeComponent()
{
	if (!Z_Registration_Info_UClass_UDodgeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDodgeComponent.OuterSingleton, Z_Construct_UClass_UDodgeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDodgeComponent.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<UDodgeComponent>()
{
	return UDodgeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDodgeComponent);
UDodgeComponent::~UDodgeComponent() {}
// End Class UDodgeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDodgeDirection_StaticEnum, TEXT("EDodgeDirection"), &Z_Registration_Info_UEnum_EDodgeDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 81592243U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDodgeComponent, UDodgeComponent::StaticClass, TEXT("UDodgeComponent"), &Z_Registration_Info_UClass_UDodgeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDodgeComponent), 1494223771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_3439814218(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_Components_DodgeComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
