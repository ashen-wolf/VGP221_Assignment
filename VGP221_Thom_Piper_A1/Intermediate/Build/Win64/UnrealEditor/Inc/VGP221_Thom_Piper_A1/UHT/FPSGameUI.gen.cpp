// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VGP221_Thom_Piper_A1/Public/GUI/FPSGameUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSGameUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VGP221_Thom_Piper_A1();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_UButtonWidget_NoRegister();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_UFPSGameUI();
	VGP221_THOM_PIPER_A1_API UClass* Z_Construct_UClass_UFPSGameUI_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFPSGameUI::execSetScoreText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScoreText(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFPSGameUI::execSetHealthBar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealthBar(Z_Param_percentage);
		P_NATIVE_END;
	}
	void UFPSGameUI::StaticRegisterNativesUFPSGameUI()
	{
		UClass* Class = UFPSGameUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHealthBar", &UFPSGameUI::execSetHealthBar },
			{ "SetScoreText", &UFPSGameUI::execSetScoreText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics
	{
		struct FPSGameUI_eventSetHealthBar_Parms
		{
			float percentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_percentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameUI_eventSetHealthBar_Parms, percentage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::NewProp_percentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GUI/FPSGameUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSGameUI, nullptr, "SetHealthBar", nullptr, nullptr, Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::FPSGameUI_eventSetHealthBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::FPSGameUI_eventSetHealthBar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFPSGameUI_SetHealthBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSGameUI_SetHealthBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics
	{
		struct FPSGameUI_eventSetScoreText_Parms
		{
			int32 amount;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSGameUI_eventSetScoreText_Parms, amount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GUI/FPSGameUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFPSGameUI, nullptr, "SetScoreText", nullptr, nullptr, Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::FPSGameUI_eventSetScoreText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::FPSGameUI_eventSetScoreText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFPSGameUI_SetScoreText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFPSGameUI_SetScoreText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFPSGameUI);
	UClass* Z_Construct_UClass_UFPSGameUI_NoRegister()
	{
		return UFPSGameUI::StaticClass();
	}
	struct Z_Construct_UClass_UFPSGameUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ScoreText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonWidgetPrefab_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ButtonWidgetPrefab;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFPSGameUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VGP221_Thom_Piper_A1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameUI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFPSGameUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFPSGameUI_SetHealthBar, "SetHealthBar" }, // 75569275
		{ &Z_Construct_UFunction_UFPSGameUI_SetScoreText, "SetScoreText" }, // 1598975790
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameUI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGameUI_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GUI/FPSGameUI.h" },
		{ "ModuleRelativePath", "Public/GUI/FPSGameUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGameUI_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GUI/FPSGameUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSGameUI_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSGameUI, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameUI_Statics::NewProp_HealthBar_MetaData), Z_Construct_UClass_UFPSGameUI_Statics::NewProp_HealthBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGameUI_Statics::NewProp_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GUI/FPSGameUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSGameUI_Statics::NewProp_VerticalBox = { "VerticalBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSGameUI, VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameUI_Statics::NewProp_VerticalBox_MetaData), Z_Construct_UClass_UFPSGameUI_Statics::NewProp_VerticalBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGameUI_Statics::NewProp_ScoreText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GUI/FPSGameUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFPSGameUI_Statics::NewProp_ScoreText = { "ScoreText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSGameUI, ScoreText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameUI_Statics::NewProp_ScoreText_MetaData), Z_Construct_UClass_UFPSGameUI_Statics::NewProp_ScoreText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFPSGameUI_Statics::NewProp_ButtonWidgetPrefab_MetaData[] = {
		{ "Category", "FPSGameUI" },
		{ "ModuleRelativePath", "Public/GUI/FPSGameUI.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFPSGameUI_Statics::NewProp_ButtonWidgetPrefab = { "ButtonWidgetPrefab", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFPSGameUI, ButtonWidgetPrefab), Z_Construct_UClass_UClass, Z_Construct_UClass_UButtonWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameUI_Statics::NewProp_ButtonWidgetPrefab_MetaData), Z_Construct_UClass_UFPSGameUI_Statics::NewProp_ButtonWidgetPrefab_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFPSGameUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGameUI_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGameUI_Statics::NewProp_VerticalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGameUI_Statics::NewProp_ScoreText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFPSGameUI_Statics::NewProp_ButtonWidgetPrefab,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFPSGameUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFPSGameUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFPSGameUI_Statics::ClassParams = {
		&UFPSGameUI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFPSGameUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameUI_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UFPSGameUI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFPSGameUI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFPSGameUI()
	{
		if (!Z_Registration_Info_UClass_UFPSGameUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFPSGameUI.OuterSingleton, Z_Construct_UClass_UFPSGameUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFPSGameUI.OuterSingleton;
	}
	template<> VGP221_THOM_PIPER_A1_API UClass* StaticClass<UFPSGameUI>()
	{
		return UFPSGameUI::StaticClass();
	}
	UFPSGameUI::UFPSGameUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFPSGameUI);
	UFPSGameUI::~UFPSGameUI() {}
	struct Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_GUI_FPSGameUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_GUI_FPSGameUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFPSGameUI, UFPSGameUI::StaticClass, TEXT("UFPSGameUI"), &Z_Registration_Info_UClass_UFPSGameUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFPSGameUI), 3751461754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_GUI_FPSGameUI_h_1735337747(TEXT("/Script/VGP221_Thom_Piper_A1"),
		Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_GUI_FPSGameUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_VGP221_Assignment_VGP221_Thom_Piper_A1_Source_VGP221_Thom_Piper_A1_Public_GUI_FPSGameUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
