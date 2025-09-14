// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondWind_init() {}
	SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature();
	SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnCountersReset__DelegateSignature();
	SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnDeath__DelegateSignature();
	SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature();
	SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHackAvailable__DelegateSignature();
	SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHackExecuted__DelegateSignature();
	SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature();
	SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnHealthDepleted__DelegateSignature();
	SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature();
	SECONDWIND_API UFunction* Z_Construct_UDelegateFunction_SecondWind_OnPhaseTransition__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SecondWind;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SecondWind()
	{
		if (!Z_Registration_Info_UPackage__Script_SecondWind.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondWind_OnCounterProgressChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondWind_OnCountersReset__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondWind_OnDeath__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondWind_OnFragmentsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondWind_OnHackAvailable__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondWind_OnHackExecuted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondWind_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondWind_OnHealthDepleted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondWind_OnPhaseChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SecondWind_OnPhaseTransition__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SecondWind",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD15995FE,
				0xE604158E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SecondWind.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SecondWind.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SecondWind(Z_Construct_UPackage__Script_SecondWind, TEXT("/Script/SecondWind"), Z_Registration_Info_UPackage__Script_SecondWind, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD15995FE, 0xE604158E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
