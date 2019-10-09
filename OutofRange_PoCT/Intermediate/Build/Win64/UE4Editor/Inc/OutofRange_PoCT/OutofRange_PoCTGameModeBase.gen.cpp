// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OutofRange_PoCT/OutofRange_PoCTGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutofRange_PoCTGameModeBase() {}
// Cross Module References
	OUTOFRANGE_POCT_API UClass* Z_Construct_UClass_AOutofRange_PoCTGameModeBase_NoRegister();
	OUTOFRANGE_POCT_API UClass* Z_Construct_UClass_AOutofRange_PoCTGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_OutofRange_PoCT();
// End Cross Module References
	void AOutofRange_PoCTGameModeBase::StaticRegisterNativesAOutofRange_PoCTGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AOutofRange_PoCTGameModeBase_NoRegister()
	{
		return AOutofRange_PoCTGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AOutofRange_PoCTGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOutofRange_PoCTGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OutofRange_PoCT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOutofRange_PoCTGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "OutofRange_PoCTGameModeBase.h" },
		{ "ModuleRelativePath", "OutofRange_PoCTGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOutofRange_PoCTGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOutofRange_PoCTGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOutofRange_PoCTGameModeBase_Statics::ClassParams = {
		&AOutofRange_PoCTGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AOutofRange_PoCTGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOutofRange_PoCTGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOutofRange_PoCTGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOutofRange_PoCTGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOutofRange_PoCTGameModeBase, 1705801890);
	template<> OUTOFRANGE_POCT_API UClass* StaticClass<AOutofRange_PoCTGameModeBase>()
	{
		return AOutofRange_PoCTGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOutofRange_PoCTGameModeBase(Z_Construct_UClass_AOutofRange_PoCTGameModeBase, &AOutofRange_PoCTGameModeBase::StaticClass, TEXT("/Script/OutofRange_PoCT"), TEXT("AOutofRange_PoCTGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOutofRange_PoCTGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
