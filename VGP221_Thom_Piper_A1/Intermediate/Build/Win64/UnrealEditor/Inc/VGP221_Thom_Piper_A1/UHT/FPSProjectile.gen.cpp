// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_Thom_Piper_A1/Public/Projectile/FPSProjectile.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSProjectile() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_VGP221_Thom_Piper_A1();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_AFPSProjectile();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_AFPSProjectile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFPSProjectile::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSProjectile::execFireInDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ShootDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireInDirection(Z_Param_Out_ShootDirection);
		P_NATIVE_END;
	}
	void AFPSProjectile::StaticRegisterNativesAFPSProjectile()
	{
		UClass* Class = AFPSProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireInDirection", &AFPSProjectile::execFireInDirection },
			{ "OnHit", &AFPSProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics
	{
		struct FPSProjectile_eventFireInDirection_Parms
		{
			FVector ShootDirection;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShootDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::NewProp_ShootDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::NewProp_ShootDirection = { "ShootDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSProjectile_eventFireInDirection_Parms, ShootDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::NewProp_ShootDirection_MetaData), Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::NewProp_ShootDirection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::NewProp_ShootDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/FPSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSProjectile, nullptr, "FireInDirection", nullptr, nullptr, Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::FPSProjectile_eventFireInDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::FPSProjectile_eventFireInDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSProjectile_FireInDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSProjectile_FireInDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSProjectile_OnHit_Statics
	{
		struct FPSProjectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSProjectile_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSProjectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSProjectile_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_OtherComponent_MetaData), Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_OtherComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSProjectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSProjectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/FPSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSProjectile, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::FPSProjectile_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::FPSProjectile_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AFPSProjectile_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSProjectile_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSProjectile);
	UClass* Z_Construct_UClass_AFPSProjectile_NoRegister()
	{
		return AFPSProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AFPSProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VGP221_Thom_Piper_A1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSProjectile_FireInDirection, "FireInDirection" }, // 1185499369
		{ &Z_Construct_UFunction_AFPSProjectile_OnHit, "OnHit" }, // 905100817
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile/FPSProjectile.h" },
		{ "ModuleRelativePath", "Public/Projectile/FPSProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSProjectile_Statics::NewProp_BulletSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Projectile/FPSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSProjectile_Statics::NewProp_BulletSpeed = { "BulletSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSProjectile, BulletSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::NewProp_BulletSpeed_MetaData), Z_Construct_UClass_AFPSProjectile_Statics::NewProp_BulletSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSProjectile_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/FPSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSProjectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::NewProp_CollisionComponent_MetaData), Z_Construct_UClass_AFPSProjectile_Statics::NewProp_CollisionComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/FPSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSProjectile, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData), Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMovementComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMeshComponent_MetaData[] = {
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/FPSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMeshComponent = { "ProjectileMeshComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSProjectile, ProjectileMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMeshComponent_MetaData), Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMaterialInstance_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "Public/Projectile/FPSProjectile.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMaterialInstance = { "ProjectileMaterialInstance", nullptr, (EPropertyFlags)0x0010000000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFPSProjectile, ProjectileMaterialInstance), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMaterialInstance_MetaData), Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMaterialInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSProjectile_Statics::NewProp_BulletSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSProjectile_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSProjectile_Statics::NewProp_ProjectileMaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSProjectile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSProjectile_Statics::ClassParams = {
		&AFPSProjectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSProjectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSProjectile_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSProjectile_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFPSProjectile()
	{
		if (!Z_Registration_Info_UClass_AFPSProjectile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSProjectile.OuterSingleton, Z_Construct_UClass_AFPSProjectile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSProjectile.OuterSingleton;
	}
	template<> VGP221_THOM_PIPER_A1_API UClass* StaticClass<AFPSProjectile>()
	{
		return AFPSProjectile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSProjectile);
	AFPSProjectile::~AFPSProjectile() {}
	struct Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Projectile_FPSProjectile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Projectile_FPSProjectile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSProjectile, AFPSProjectile::StaticClass, TEXT("AFPSProjectile"), &Z_Registration_Info_UClass_AFPSProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSProjectile), 1305919036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Projectile_FPSProjectile_h_410209338(TEXT("/Script/VGP221_Thom_Piper_A1"),
		Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Projectile_FPSProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Projectile_FPSProjectile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
