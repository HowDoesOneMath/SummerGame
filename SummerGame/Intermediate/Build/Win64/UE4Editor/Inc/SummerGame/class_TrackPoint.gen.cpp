// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SummerGame/Public/class_TrackPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeclass_TrackPoint() {}
// Cross Module References
	SUMMERGAME_API UClass* Z_Construct_UClass_Aclass_TrackPoint_NoRegister();
	SUMMERGAME_API UClass* Z_Construct_UClass_Aclass_TrackPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SummerGame();
	SUMMERGAME_API UFunction* Z_Construct_UFunction_Aclass_TrackPoint_setTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void Aclass_TrackPoint::StaticRegisterNativesAclass_TrackPoint()
	{
		UClass* Class = Aclass_TrackPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "setTarget", &Aclass_TrackPoint::execsetTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aclass_TrackPoint_setTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aclass_TrackPoint_setTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "MyFunctions" },
		{ "ModuleRelativePath", "Public/class_TrackPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_Aclass_TrackPoint_setTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aclass_TrackPoint, nullptr, "setTarget", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aclass_TrackPoint_setTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_Aclass_TrackPoint_setTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aclass_TrackPoint_setTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_Aclass_TrackPoint_setTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_Aclass_TrackPoint_NoRegister()
	{
		return Aclass_TrackPoint::StaticClass();
	}
	struct Z_Construct_UClass_Aclass_TrackPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p2Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_p2Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_p1Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_p1Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aclass_TrackPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SummerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aclass_TrackPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aclass_TrackPoint_setTarget, "setTarget" }, // 157747567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aclass_TrackPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "class_TrackPoint.h" },
		{ "ModuleRelativePath", "Public/class_TrackPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aclass_TrackPoint_Statics::NewProp_p2Position_MetaData[] = {
		{ "Category", "MyProperties" },
		{ "ModuleRelativePath", "Public/class_TrackPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aclass_TrackPoint_Statics::NewProp_p2Position = { "p2Position", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aclass_TrackPoint, p2Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Aclass_TrackPoint_Statics::NewProp_p2Position_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aclass_TrackPoint_Statics::NewProp_p2Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aclass_TrackPoint_Statics::NewProp_p1Position_MetaData[] = {
		{ "Category", "MyProperties" },
		{ "ModuleRelativePath", "Public/class_TrackPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_Aclass_TrackPoint_Statics::NewProp_p1Position = { "p1Position", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aclass_TrackPoint, p1Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_Aclass_TrackPoint_Statics::NewProp_p1Position_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aclass_TrackPoint_Statics::NewProp_p1Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aclass_TrackPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aclass_TrackPoint_Statics::NewProp_p2Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aclass_TrackPoint_Statics::NewProp_p1Position,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aclass_TrackPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aclass_TrackPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aclass_TrackPoint_Statics::ClassParams = {
		&Aclass_TrackPoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aclass_TrackPoint_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_Aclass_TrackPoint_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_Aclass_TrackPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Aclass_TrackPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aclass_TrackPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aclass_TrackPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aclass_TrackPoint, 1629732285);
	template<> SUMMERGAME_API UClass* StaticClass<Aclass_TrackPoint>()
	{
		return Aclass_TrackPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aclass_TrackPoint(Z_Construct_UClass_Aclass_TrackPoint, &Aclass_TrackPoint::StaticClass, TEXT("/Script/SummerGame"), TEXT("Aclass_TrackPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aclass_TrackPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
