// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_Thom_Piper_A1/Public/Collectibles/Coin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoin() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VGP221_Thom_Piper_A1();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_ACoin();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_ACoin_NoRegister();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_ACollectible();
// End Cross Module References
	void ACoin::StaticRegisterNativesACoin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoin);
	UClass* Z_Construct_UClass_ACoin_NoRegister()
	{
		return ACoin::StaticClass();
	}
	struct Z_Construct_UClass_ACoin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoinMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CoinMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCellectRotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OnCellectRotationRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectible,
		(UObject* (*)())Z_Construct_UPackage__Script_VGP221_Thom_Piper_A1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Collectibles/Coin.h" },
		{ "ModuleRelativePath", "Public/Collectibles/Coin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_CoinMeshComponent_MetaData[] = {
		{ "Category", "Coin" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Collectibles/Coin.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_CoinMeshComponent = { "CoinMeshComponent", nullptr, (EPropertyFlags)0x00100000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoin, CoinMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_CoinMeshComponent_MetaData), Z_Construct_UClass_ACoin_Statics::NewProp_CoinMeshComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "Public/Collectibles/Coin.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoin, Points), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_Points_MetaData), Z_Construct_UClass_ACoin_Statics::NewProp_Points_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "Public/Collectibles/Coin.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoin, RotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_RotationRate_MetaData), Z_Construct_UClass_ACoin_Statics::NewProp_RotationRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoin_Statics::NewProp_OnCellectRotationRate_MetaData[] = {
		{ "Category", "Coin" },
		{ "ModuleRelativePath", "Public/Collectibles/Coin.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACoin_Statics::NewProp_OnCellectRotationRate = { "OnCellectRotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACoin, OnCellectRotationRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::NewProp_OnCellectRotationRate_MetaData), Z_Construct_UClass_ACoin_Statics::NewProp_OnCellectRotationRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_CoinMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_RotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoin_Statics::NewProp_OnCellectRotationRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoin_Statics::ClassParams = {
		&ACoin::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACoin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoin_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoin_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACoin()
	{
		if (!Z_Registration_Info_UClass_ACoin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoin.OuterSingleton, Z_Construct_UClass_ACoin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoin.OuterSingleton;
	}
	template<> VGP221_THOM_PIPER_A1_API UClass* StaticClass<ACoin>()
	{
		return ACoin::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoin);
	ACoin::~ACoin() {}
	struct Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Collectibles_Coin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Collectibles_Coin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoin, ACoin::StaticClass, TEXT("ACoin"), &Z_Registration_Info_UClass_ACoin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoin), 864318850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Collectibles_Coin_h_1031592661(TEXT("/Script/VGP221_Thom_Piper_A1"),
		Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Collectibles_Coin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_Collectibles_Coin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
