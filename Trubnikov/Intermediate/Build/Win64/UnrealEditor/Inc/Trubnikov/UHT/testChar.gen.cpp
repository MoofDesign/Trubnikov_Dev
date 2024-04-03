// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trubnikov/testChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetestChar() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TRUBNIKOV_API UClass* Z_Construct_UClass_AtestChar();
	TRUBNIKOV_API UClass* Z_Construct_UClass_AtestChar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Trubnikov();
// End Cross Module References
	void AtestChar::StaticRegisterNativesAtestChar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AtestChar);
	UClass* Z_Construct_UClass_AtestChar_NoRegister()
	{
		return AtestChar::StaticClass();
	}
	struct Z_Construct_UClass_AtestChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AtestChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Trubnikov,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AtestChar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AtestChar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "testChar.h" },
		{ "ModuleRelativePath", "testChar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AtestChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AtestChar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AtestChar_Statics::ClassParams = {
		&AtestChar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AtestChar_Statics::Class_MetaDataParams), Z_Construct_UClass_AtestChar_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AtestChar()
	{
		if (!Z_Registration_Info_UClass_AtestChar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AtestChar.OuterSingleton, Z_Construct_UClass_AtestChar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AtestChar.OuterSingleton;
	}
	template<> TRUBNIKOV_API UClass* StaticClass<AtestChar>()
	{
		return AtestChar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AtestChar);
	AtestChar::~AtestChar() {}
	struct Z_CompiledInDeferFile_FID_Trubnikov_Source_Trubnikov_testChar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trubnikov_Source_Trubnikov_testChar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AtestChar, AtestChar::StaticClass, TEXT("AtestChar"), &Z_Registration_Info_UClass_AtestChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AtestChar), 2738996367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trubnikov_Source_Trubnikov_testChar_h_2816114925(TEXT("/Script/Trubnikov"),
		Z_CompiledInDeferFile_FID_Trubnikov_Source_Trubnikov_testChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Trubnikov_Source_Trubnikov_testChar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
