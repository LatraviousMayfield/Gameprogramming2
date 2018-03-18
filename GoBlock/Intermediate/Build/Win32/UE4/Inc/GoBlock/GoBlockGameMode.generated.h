// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOBLOCK_GoBlockGameMode_generated_h
#error "GoBlockGameMode.generated.h already included, missing '#pragma once' in GoBlockGameMode.h"
#endif
#define GOBLOCK_GoBlockGameMode_generated_h

#define GoBlock_Source_GoBlock_GoBlockGameMode_h_12_RPC_WRAPPERS
#define GoBlock_Source_GoBlock_GoBlockGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define GoBlock_Source_GoBlock_GoBlockGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoBlockGameMode(); \
	friend GOBLOCK_API class UClass* Z_Construct_UClass_AGoBlockGameMode(); \
public: \
	DECLARE_CLASS(AGoBlockGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/GoBlock"), GOBLOCK_API) \
	DECLARE_SERIALIZER(AGoBlockGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GoBlock_Source_GoBlock_GoBlockGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGoBlockGameMode(); \
	friend GOBLOCK_API class UClass* Z_Construct_UClass_AGoBlockGameMode(); \
public: \
	DECLARE_CLASS(AGoBlockGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/GoBlock"), GOBLOCK_API) \
	DECLARE_SERIALIZER(AGoBlockGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GoBlock_Source_GoBlock_GoBlockGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GOBLOCK_API AGoBlockGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoBlockGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GOBLOCK_API, AGoBlockGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoBlockGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GOBLOCK_API AGoBlockGameMode(AGoBlockGameMode&&); \
	GOBLOCK_API AGoBlockGameMode(const AGoBlockGameMode&); \
public:


#define GoBlock_Source_GoBlock_GoBlockGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GOBLOCK_API AGoBlockGameMode(AGoBlockGameMode&&); \
	GOBLOCK_API AGoBlockGameMode(const AGoBlockGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GOBLOCK_API, AGoBlockGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoBlockGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoBlockGameMode)


#define GoBlock_Source_GoBlock_GoBlockGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define GoBlock_Source_GoBlock_GoBlockGameMode_h_9_PROLOG
#define GoBlock_Source_GoBlock_GoBlockGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoBlock_Source_GoBlock_GoBlockGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	GoBlock_Source_GoBlock_GoBlockGameMode_h_12_RPC_WRAPPERS \
	GoBlock_Source_GoBlock_GoBlockGameMode_h_12_INCLASS \
	GoBlock_Source_GoBlock_GoBlockGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoBlock_Source_GoBlock_GoBlockGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoBlock_Source_GoBlock_GoBlockGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	GoBlock_Source_GoBlock_GoBlockGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GoBlock_Source_GoBlock_GoBlockGameMode_h_12_INCLASS_NO_PURE_DECLS \
	GoBlock_Source_GoBlock_GoBlockGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoBlock_Source_GoBlock_GoBlockGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
