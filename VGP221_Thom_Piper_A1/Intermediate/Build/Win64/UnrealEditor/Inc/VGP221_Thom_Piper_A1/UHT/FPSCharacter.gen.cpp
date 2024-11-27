// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_Thom_Piper_A1/Public/Player/FPSCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VGP221_Thom_Piper_A1();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_AFPSCharacter();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSCharacter::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execStrafe)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Strafe(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execEndJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execStartJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartJump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_value);
		P_NATIVE_END;
	}
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		UClass* Class = AFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndJump", &AFPSCharacter::execEndJump },
			{ "Fire", &AFPSCharacter::execFire },
			{ "MoveForward", &AFPSCharacter::execMoveForward },
			{ "StartJump", &AFPSCharacter::execStartJump },
			{ "Strafe", &AFPSCharacter::execStrafe },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSCharacter_EndJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "EndJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_EndJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics
	{
		struct FPSCharacter_eventMoveForward_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventMoveForward_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MoveForward", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FPSCharacter_eventMoveForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FPSCharacter_eventMoveForward_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_StartJump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "StartJump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_Strafe_Statics
	{
		struct FPSCharacter_eventStrafe_Parms
		{
			float value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventStrafe_Parms, value), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "Strafe", nullptr, nullptr, Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::FPSCharacter_eventStrafe_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::FPSCharacter_eventStrafe_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSCharacter_Strafe()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_Strafe_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSCharacter);
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FPSMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FPSCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FPSCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_VGP221_Thom_Piper_A1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_EndJump, "EndJump" }, // 1852443813
		{ &Z_Construct_UFunction_AFPSCharacter_Fire, "Fire" }, // 1411674628
		{ &Z_Construct_UFunction_AFPSCharacter_MoveForward, "MoveForward" }, // 3090346662
		{ &Z_Construct_UFunction_AFPSCharacter_StartJump, "StartJump" }, // 535504996
		{ &Z_Construct_UFunction_AFPSCharacter_Strafe, "Strafe" }, // 1219355484
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FPSCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh = { "FPSMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, FPSMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSCameraComponent_MetaData[] = {
		{ "Category", "FPSCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSCameraComponent = { "FPSCameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, FPSCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSCameraComponent_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSCameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MuzzleOffset_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MuzzleOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSCharacter, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AFPSProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass_MetaData), Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FPSCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
		&AFPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		if (!Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton;
	}
	template<> VGP221_THOM_PIPER_A1_API UClass* StaticClass<AFPSCharacter>()
	{
		return AFPSCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
	AFPSCharacter::~AFPSCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Player_FPSCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Player_FPSCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCharacter, AFPSCharacter::StaticClass, TEXT("AFPSCharacter"), &Z_Registration_Info_UClass_AFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCharacter), 1168194674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Player_FPSCharacter_h_238756419(TEXT("/Script/VGP221_Thom_Piper_A1"),
		Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Player_FPSCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Player_FPSCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
