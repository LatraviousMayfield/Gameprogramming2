// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GOBLOCK_GoBlockCharacter_generated_h
#error "GoBlockCharacter.generated.h already included, missing '#pragma once' in GoBlockCharacter.h"
#endif
#define GOBLOCK_GoBlockCharacter_generated_h

#define GoBlock_Source_GoBlock_GoBlockCharacter_h_13_RPC_WRAPPERS
#define GoBlock_Source_GoBlock_GoBlockCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define GoBlock_Source_GoBlock_GoBlockCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoBlockCharacter(); \
	friend GOBLOCK_API class UClass* Z_Construct_UClass_AGoBlockCharacter(); \
public: \
	DECLARE_CLASS(AGoBlockCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GoBlock"), NO_API) \
	DECLARE_SERIALIZER(AGoBlockCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GoBlock_Source_GoBlock_GoBlockCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGoBlockCharacter(); \
	friend GOBLOCK_API class UClass* Z_Construct_UClass_AGoBlockCharacter(); \
public: \
	DECLARE_CLASS(AGoBlockCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GoBlock"), NO_API) \
	DECLARE_SERIALIZER(AGoBlockCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GoBlock_Source_GoBlock_GoBlockCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoBlockCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoBlockCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoBlockCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoBlockCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoBlockCharacter(AGoBlockCharacter&&); \
	NO_API AGoBlockCharacter(const AGoBlockCharacter&); \
public:


#define GoBlock_Source_GoBlock_GoBlockCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoBlockCharacter(AGoBlockCharacter&&); \
	NO_API AGoBlockCharacter(const AGoBlockCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoBlockCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoBlockCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoBlockCharacter)


#define GoBlock_Source_GoBlock_GoBlockCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AGoBlockCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AGoBlockCharacter, FollowCamera); }


#define GoBlock_Source_GoBlock_GoBlockCharacter_h_10_PROLOG
#define GoBlock_Source_GoBlock_GoBlockCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoBlock_Source_GoBlock_GoBlockCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	GoBlock_Source_GoBlock_GoBlockCharacter_h_13_RPC_WRAPPERS \
	GoBlock_Source_GoBlock_GoBlockCharacter_h_13_INCLASS \
	GoBlock_Source_GoBlock_GoBlockCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GoBlock_Source_GoBlock_GoBlockCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GoBlock_Source_GoBlock_GoBlockCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	GoBlock_Source_GoBlock_GoBlockCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GoBlock_Source_GoBlock_GoBlockCharacter_h_13_INCLASS_NO_PURE_DECLS \
	GoBlock_Source_GoBlock_GoBlockCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GoBlock_Source_GoBlock_GoBlockCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
