// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGame/Public/class_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeclass_Character() {}
// Cross Module References
	SUMMERGAME_API UClass* Z_Construct_UClass_Aclass_Character_NoRegister();
	SUMMERGAME_API UClass* Z_Construct_UClass_Aclass_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SummerGame();
// End Cross Module References
	void Aclass_Character::StaticRegisterNativesAclass_Character()
	{
	}
	UClass* Z_Construct_UClass_Aclass_Character_NoRegister()
	{
		return Aclass_Character::StaticClass();
	}
	struct Z_Construct_UClass_Aclass_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aclass_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SummerGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aclass_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "class_Character.h" },
		{ "ModuleRelativePath", "Public/class_Character.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aclass_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aclass_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aclass_Character_Statics::ClassParams = {
		&Aclass_Character::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_Aclass_Character_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Aclass_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aclass_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aclass_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aclass_Character, 88363451);
	template<> SUMMERGAME_API UClass* StaticClass<Aclass_Character>()
	{
		return Aclass_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aclass_Character(Z_Construct_UClass_Aclass_Character, &Aclass_Character::StaticClass, TEXT("/Script/SummerGame"), TEXT("Aclass_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aclass_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
