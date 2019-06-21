// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUMMERGAME_class_TrackPoint_generated_h
#error "class_TrackPoint.generated.h already included, missing '#pragma once' in class_TrackPoint.h"
#endif
#define SUMMERGAME_class_TrackPoint_generated_h

#define SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setTarget(); \
		P_NATIVE_END; \
	}


#define SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->setTarget(); \
		P_NATIVE_END; \
	}


#define SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAclass_TrackPoint(); \
	friend struct Z_Construct_UClass_Aclass_TrackPoint_Statics; \
public: \
	DECLARE_CLASS(Aclass_TrackPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SummerGame"), NO_API) \
	DECLARE_SERIALIZER(Aclass_TrackPoint)


#define SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAclass_TrackPoint(); \
	friend struct Z_Construct_UClass_Aclass_TrackPoint_Statics; \
public: \
	DECLARE_CLASS(Aclass_TrackPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SummerGame"), NO_API) \
	DECLARE_SERIALIZER(Aclass_TrackPoint)


#define SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aclass_TrackPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aclass_TrackPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aclass_TrackPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aclass_TrackPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aclass_TrackPoint(Aclass_TrackPoint&&); \
	NO_API Aclass_TrackPoint(const Aclass_TrackPoint&); \
public:


#define SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aclass_TrackPoint(Aclass_TrackPoint&&); \
	NO_API Aclass_TrackPoint(const Aclass_TrackPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aclass_TrackPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aclass_TrackPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aclass_TrackPoint)


#define SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__p1Position() { return STRUCT_OFFSET(Aclass_TrackPoint, p1Position); } \
	FORCEINLINE static uint32 __PPO__p2Position() { return STRUCT_OFFSET(Aclass_TrackPoint, p2Position); }


#define SummerGame_Source_SummerGame_Public_class_TrackPoint_h_9_PROLOG
#define SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_RPC_WRAPPERS \
	SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_INCLASS \
	SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_INCLASS_NO_PURE_DECLS \
	SummerGame_Source_SummerGame_Public_class_TrackPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUMMERGAME_API UClass* StaticClass<class Aclass_TrackPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SummerGame_Source_SummerGame_Public_class_TrackPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
