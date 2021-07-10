// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStruct;
#ifdef UNREALTINYJS_JsContext_generated_h
#error "JsContext.generated.h already included, missing '#pragma once' in JsContext.h"
#endif
#define UNREALTINYJS_JsContext_generated_h

#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_SPARSE_DATA
#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAssignFromJsonString); \
	DECLARE_FUNCTION(execExecuteInstructionReturnJsonString); \
	DECLARE_FUNCTION(execExecuteInstructionReturnString); \
	DECLARE_FUNCTION(execExecuteInstructionReturnBool); \
	DECLARE_FUNCTION(execExecuteInstruction); \
	DECLARE_FUNCTION(execExecuteScript);


#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAssignFromJsonString); \
	DECLARE_FUNCTION(execExecuteInstructionReturnJsonString); \
	DECLARE_FUNCTION(execExecuteInstructionReturnString); \
	DECLARE_FUNCTION(execExecuteInstructionReturnBool); \
	DECLARE_FUNCTION(execExecuteInstruction); \
	DECLARE_FUNCTION(execExecuteScript);


#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJsContext(); \
	friend struct Z_Construct_UClass_UJsContext_Statics; \
public: \
	DECLARE_CLASS(UJsContext, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealTinyJs"), NO_API) \
	DECLARE_SERIALIZER(UJsContext)


#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUJsContext(); \
	friend struct Z_Construct_UClass_UJsContext_Statics; \
public: \
	DECLARE_CLASS(UJsContext, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnrealTinyJs"), NO_API) \
	DECLARE_SERIALIZER(UJsContext)


#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJsContext(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJsContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsContext); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsContext(UJsContext&&); \
	NO_API UJsContext(const UJsContext&); \
public:


#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJsContext(UJsContext&&); \
	NO_API UJsContext(const UJsContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJsContext); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJsContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UJsContext)


#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_PRIVATE_PROPERTY_OFFSET
#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_19_PROLOG
#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_PRIVATE_PROPERTY_OFFSET \
	TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_SPARSE_DATA \
	TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_RPC_WRAPPERS \
	TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_INCLASS \
	TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_PRIVATE_PROPERTY_OFFSET \
	TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_SPARSE_DATA \
	TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_INCLASS_NO_PURE_DECLS \
	TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALTINYJS_API UClass* StaticClass<class UJsContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TinyJsProject_Plugins_UnrealTinyJs_Source_UnrealTinyJs_Public_JsContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
