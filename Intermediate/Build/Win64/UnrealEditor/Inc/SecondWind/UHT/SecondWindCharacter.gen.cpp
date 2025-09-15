// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecondWind/SecondWindCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondWindCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindCharacter();
SECONDWIND_API UClass* Z_Construct_UClass_ASecondWindCharacter_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UBlockingComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UCameraLockOnComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UDodgeComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UFragmentComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UHackComponent_NoRegister();
SECONDWIND_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecondWind();
// End Cross Module References

// Begin Class ASecondWindCharacter Function OnPlayerDeath
struct Z_Construct_UFunction_ASecondWindCharacter_OnPlayerDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASecondWindCharacter_OnPlayerDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASecondWindCharacter, nullptr, "OnPlayerDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecondWindCharacter_OnPlayerDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASecondWindCharacter_OnPlayerDeath_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASecondWindCharacter_OnPlayerDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASecondWindCharacter_OnPlayerDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASecondWindCharacter::execOnPlayerDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerDeath();
	P_NATIVE_END;
}
// End Class ASecondWindCharacter Function OnPlayerDeath

// Begin Class ASecondWindCharacter Function OnPlayerEnterFinisherState
struct Z_Construct_UFunction_ASecondWindCharacter_OnPlayerEnterFinisherState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASecondWindCharacter_OnPlayerEnterFinisherState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASecondWindCharacter, nullptr, "OnPlayerEnterFinisherState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecondWindCharacter_OnPlayerEnterFinisherState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASecondWindCharacter_OnPlayerEnterFinisherState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASecondWindCharacter_OnPlayerEnterFinisherState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASecondWindCharacter_OnPlayerEnterFinisherState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASecondWindCharacter::execOnPlayerEnterFinisherState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerEnterFinisherState();
	P_NATIVE_END;
}
// End Class ASecondWindCharacter Function OnPlayerEnterFinisherState

// Begin Class ASecondWindCharacter Function OnPlayerPhaseTransition
struct Z_Construct_UFunction_ASecondWindCharacter_OnPlayerPhaseTransition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASecondWindCharacter_OnPlayerPhaseTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASecondWindCharacter, nullptr, "OnPlayerPhaseTransition", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASecondWindCharacter_OnPlayerPhaseTransition_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASecondWindCharacter_OnPlayerPhaseTransition_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASecondWindCharacter_OnPlayerPhaseTransition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASecondWindCharacter_OnPlayerPhaseTransition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASecondWindCharacter::execOnPlayerPhaseTransition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerPhaseTransition();
	P_NATIVE_END;
}
// End Class ASecondWindCharacter Function OnPlayerPhaseTransition

// Begin Class ASecondWindCharacter
void ASecondWindCharacter::StaticRegisterNativesASecondWindCharacter()
{
	UClass* Class = ASecondWindCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerDeath", &ASecondWindCharacter::execOnPlayerDeath },
		{ "OnPlayerEnterFinisherState", &ASecondWindCharacter::execOnPlayerEnterFinisherState },
		{ "OnPlayerPhaseTransition", &ASecondWindCharacter::execOnPlayerPhaseTransition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASecondWindCharacter);
UClass* Z_Construct_UClass_ASecondWindCharacter_NoRegister()
{
	return ASecondWindCharacter::StaticClass();
}
struct Z_Construct_UClass_ASecondWindCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SecondWindCharacter.h" },
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Follow camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Follow camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attack Input Action */" },
#endif
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Block Input Action */" },
#endif
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Block Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dodge Input Action */" },
#endif
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dodge Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hack Input Action */" },
#endif
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hack Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Combat Component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Combat Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Health Component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockingComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blocking Component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blocking Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Dodge Component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dodge Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLockOnComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera Lock-On Component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Lock-On Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HackComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hack Component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hack Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FragmentComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fragment Component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SecondWindCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fragment Component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HackAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraLockOnComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HackComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FragmentComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASecondWindCharacter_OnPlayerDeath, "OnPlayerDeath" }, // 707703416
		{ &Z_Construct_UFunction_ASecondWindCharacter_OnPlayerEnterFinisherState, "OnPlayerEnterFinisherState" }, // 3866246304
		{ &Z_Construct_UFunction_ASecondWindCharacter_OnPlayerPhaseTransition, "OnPlayerPhaseTransition" }, // 352464129
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecondWindCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_BlockAction = { "BlockAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, BlockAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockAction_MetaData), NewProp_BlockAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_DodgeAction = { "DodgeAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, DodgeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeAction_MetaData), NewProp_DodgeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_HackAction = { "HackAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, HackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackAction_MetaData), NewProp_HackAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, CombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthComponent_MetaData), NewProp_HealthComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_BlockingComponent = { "BlockingComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, BlockingComponent), Z_Construct_UClass_UBlockingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockingComponent_MetaData), NewProp_BlockingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_DodgeComponent = { "DodgeComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, DodgeComponent), Z_Construct_UClass_UDodgeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeComponent_MetaData), NewProp_DodgeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_CameraLockOnComponent = { "CameraLockOnComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, CameraLockOnComponent), Z_Construct_UClass_UCameraLockOnComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLockOnComponent_MetaData), NewProp_CameraLockOnComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_HackComponent = { "HackComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, HackComponent), Z_Construct_UClass_UHackComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HackComponent_MetaData), NewProp_HackComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_FragmentComponent = { "FragmentComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASecondWindCharacter, FragmentComponent), Z_Construct_UClass_UFragmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FragmentComponent_MetaData), NewProp_FragmentComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASecondWindCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_BlockAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_DodgeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_HackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_HealthComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_BlockingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_DodgeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_CameraLockOnComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_HackComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASecondWindCharacter_Statics::NewProp_FragmentComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASecondWindCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SecondWind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASecondWindCharacter_Statics::ClassParams = {
	&ASecondWindCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASecondWindCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASecondWindCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASecondWindCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASecondWindCharacter()
{
	if (!Z_Registration_Info_UClass_ASecondWindCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASecondWindCharacter.OuterSingleton, Z_Construct_UClass_ASecondWindCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASecondWindCharacter.OuterSingleton;
}
template<> SECONDWIND_API UClass* StaticClass<ASecondWindCharacter>()
{
	return ASecondWindCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASecondWindCharacter);
ASecondWindCharacter::~ASecondWindCharacter() {}
// End Class ASecondWindCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SecondWindCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASecondWindCharacter, ASecondWindCharacter::StaticClass, TEXT("ASecondWindCharacter"), &Z_Registration_Info_UClass_ASecondWindCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASecondWindCharacter), 2430155672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SecondWindCharacter_h_3720167818(TEXT("/Script/SecondWind"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SecondWindCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_SecondWind_Source_SecondWind_SecondWindCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
