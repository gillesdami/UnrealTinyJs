// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTinyJs/Public/JsContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsContext() {}
// Cross Module References
	UNREALTINYJS_API UClass* Z_Construct_UClass_UJsContext_NoRegister();
	UNREALTINYJS_API UClass* Z_Construct_UClass_UJsContext();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealTinyJs();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
// End Cross Module References
	DEFINE_FUNCTION(UJsContext::execAssignFromJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variable);
		P_GET_PROPERTY(FStrProperty,Z_Param_jsonString);
		P_GET_UBOOL_REF(Z_Param_Out_succeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignFromJsonString(Z_Param_variable,Z_Param_jsonString,Z_Param_Out_succeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsContext::execExecuteInstructionReturnJsonString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_code);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_result);
		P_GET_UBOOL_REF(Z_Param_Out_succeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteInstructionReturnJsonString(Z_Param_code,Z_Param_Out_result,Z_Param_Out_succeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsContext::execExecuteInstructionReturnString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_code);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_result);
		P_GET_UBOOL_REF(Z_Param_Out_succeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteInstructionReturnString(Z_Param_code,Z_Param_Out_result,Z_Param_Out_succeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsContext::execExecuteInstructionReturnBool)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_code);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_GET_UBOOL_REF(Z_Param_Out_succeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteInstructionReturnBool(Z_Param_code,Z_Param_Out_result,Z_Param_Out_succeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsContext::execExecuteInstruction)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_code);
		P_GET_UBOOL_REF(Z_Param_Out_succeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteInstruction(Z_Param_code,Z_Param_Out_succeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJsContext::execExecuteScript)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_GET_UBOOL_REF(Z_Param_Out_succeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteScript(Z_Param_path,Z_Param_Out_succeed);
		P_NATIVE_END;
	}
	void UJsContext::StaticRegisterNativesUJsContext()
	{
		UClass* Class = UJsContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignFromJsonString", &UJsContext::execAssignFromJsonString },
			{ "ExecuteInstruction", &UJsContext::execExecuteInstruction },
			{ "ExecuteInstructionReturnBool", &UJsContext::execExecuteInstructionReturnBool },
			{ "ExecuteInstructionReturnJsonString", &UJsContext::execExecuteInstructionReturnJsonString },
			{ "ExecuteInstructionReturnString", &UJsContext::execExecuteInstructionReturnString },
			{ "ExecuteScript", &UJsContext::execExecuteScript },
			{ "JsonObjectStringToStruct", &UJsContext::execJsonObjectStringToStruct },
			{ "StructToJsonObjectString", &UJsContext::execStructToJsonObjectString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics
	{
		struct JsContext_eventAssignFromJsonString_Parms
		{
			FString variable;
			FString jsonString;
			bool succeed;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_variable;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_jsonString;
		static void NewProp_succeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_succeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::NewProp_variable = { "variable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventAssignFromJsonString_Parms, variable), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::NewProp_jsonString = { "jsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventAssignFromJsonString_Parms, jsonString), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::NewProp_succeed_SetBit(void* Obj)
	{
		((JsContext_eventAssignFromJsonString_Parms*)Obj)->succeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::NewProp_succeed = { "succeed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsContext_eventAssignFromJsonString_Parms), &Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::NewProp_succeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::NewProp_variable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::NewProp_jsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::NewProp_succeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "js" },
		{ "ModuleRelativePath", "Public/JsContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsContext, nullptr, "AssignFromJsonString", nullptr, nullptr, sizeof(JsContext_eventAssignFromJsonString_Parms), Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsContext_AssignFromJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsContext_AssignFromJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics
	{
		struct JsContext_eventExecuteInstruction_Parms
		{
			FString code;
			bool succeed;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_code;
		static void NewProp_succeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_succeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventExecuteInstruction_Parms, code), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::NewProp_succeed_SetBit(void* Obj)
	{
		((JsContext_eventExecuteInstruction_Parms*)Obj)->succeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::NewProp_succeed = { "succeed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsContext_eventExecuteInstruction_Parms), &Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::NewProp_succeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::NewProp_code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::NewProp_succeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "js" },
		{ "ModuleRelativePath", "Public/JsContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsContext, nullptr, "ExecuteInstruction", nullptr, nullptr, sizeof(JsContext_eventExecuteInstruction_Parms), Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsContext_ExecuteInstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsContext_ExecuteInstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics
	{
		struct JsContext_eventExecuteInstructionReturnBool_Parms
		{
			FString code;
			bool result;
			bool succeed;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_code;
		static void NewProp_result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_result;
		static void NewProp_succeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_succeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventExecuteInstructionReturnBool_Parms, code), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::NewProp_result_SetBit(void* Obj)
	{
		((JsContext_eventExecuteInstructionReturnBool_Parms*)Obj)->result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsContext_eventExecuteInstructionReturnBool_Parms), &Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::NewProp_succeed_SetBit(void* Obj)
	{
		((JsContext_eventExecuteInstructionReturnBool_Parms*)Obj)->succeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::NewProp_succeed = { "succeed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsContext_eventExecuteInstructionReturnBool_Parms), &Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::NewProp_succeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::NewProp_code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::NewProp_succeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "js" },
		{ "ModuleRelativePath", "Public/JsContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsContext, nullptr, "ExecuteInstructionReturnBool", nullptr, nullptr, sizeof(JsContext_eventExecuteInstructionReturnBool_Parms), Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics
	{
		struct JsContext_eventExecuteInstructionReturnJsonString_Parms
		{
			FString code;
			FString result;
			bool succeed;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_code;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_result;
		static void NewProp_succeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_succeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventExecuteInstructionReturnJsonString_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventExecuteInstructionReturnJsonString_Parms, result), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::NewProp_succeed_SetBit(void* Obj)
	{
		((JsContext_eventExecuteInstructionReturnJsonString_Parms*)Obj)->succeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::NewProp_succeed = { "succeed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsContext_eventExecuteInstructionReturnJsonString_Parms), &Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::NewProp_succeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::NewProp_code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::NewProp_succeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::Function_MetaDataParams[] = {
		{ "Category", "js" },
		{ "ModuleRelativePath", "Public/JsContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsContext, nullptr, "ExecuteInstructionReturnJsonString", nullptr, nullptr, sizeof(JsContext_eventExecuteInstructionReturnJsonString_Parms), Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics
	{
		struct JsContext_eventExecuteInstructionReturnString_Parms
		{
			FString code;
			FString result;
			bool succeed;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_code;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_result;
		static void NewProp_succeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_succeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::NewProp_code = { "code", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventExecuteInstructionReturnString_Parms, code), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventExecuteInstructionReturnString_Parms, result), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::NewProp_succeed_SetBit(void* Obj)
	{
		((JsContext_eventExecuteInstructionReturnString_Parms*)Obj)->succeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::NewProp_succeed = { "succeed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsContext_eventExecuteInstructionReturnString_Parms), &Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::NewProp_succeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::NewProp_code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::NewProp_succeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::Function_MetaDataParams[] = {
		{ "Category", "js" },
		{ "ModuleRelativePath", "Public/JsContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsContext, nullptr, "ExecuteInstructionReturnString", nullptr, nullptr, sizeof(JsContext_eventExecuteInstructionReturnString_Parms), Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsContext_ExecuteScript_Statics
	{
		struct JsContext_eventExecuteScript_Parms
		{
			FString path;
			bool succeed;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static void NewProp_succeed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_succeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventExecuteScript_Parms, path), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::NewProp_succeed_SetBit(void* Obj)
	{
		((JsContext_eventExecuteScript_Parms*)Obj)->succeed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::NewProp_succeed = { "succeed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsContext_eventExecuteScript_Parms), &Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::NewProp_succeed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::NewProp_succeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "js" },
		{ "ModuleRelativePath", "Public/JsContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsContext, nullptr, "ExecuteScript", nullptr, nullptr, sizeof(JsContext_eventExecuteScript_Parms), Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsContext_ExecuteScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsContext_ExecuteScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics
	{
		struct JsContext_eventJsonObjectStringToStruct_Parms
		{
			FString JsonString;
			const UStruct* StructToFill;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JsonString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StructToFill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StructToFill;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_JsonString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventJsonObjectStringToStruct_Parms, JsonString), METADATA_PARAMS(Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_JsonString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_StructToFill_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_StructToFill = { "StructToFill", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventJsonObjectStringToStruct_Parms, StructToFill), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_StructToFill_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_StructToFill_MetaData)) };
	void Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsContext_eventJsonObjectStringToStruct_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsContext_eventJsonObjectStringToStruct_Parms), &Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_JsonString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_StructToFill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "js" },
		{ "CustomStructureParam", "StructToFill" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/JsContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsContext, nullptr, "JsonObjectStringToStruct", nullptr, nullptr, sizeof(JsContext_eventJsonObjectStringToStruct_Parms), Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics
	{
		struct JsContext_eventStructToJsonObjectString_Parms
		{
			FString result;
			const UStruct* Struct;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Struct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventStructToJsonObjectString_Parms, result), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_Struct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(JsContext_eventStructToJsonObjectString_Parms, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_Struct_MetaData)) };
	void Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JsContext_eventStructToJsonObjectString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(JsContext_eventStructToJsonObjectString_Parms), &Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_Struct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::Function_MetaDataParams[] = {
		{ "Category", "js" },
		{ "CustomStructureParam", "Struct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/JsContext.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJsContext, nullptr, "StructToJsonObjectString", nullptr, nullptr, sizeof(JsContext_eventStructToJsonObjectString_Parms), Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJsContext_StructToJsonObjectString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UJsContext_StructToJsonObjectString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsContext_NoRegister()
	{
		return UJsContext::StaticClass();
	}
	struct Z_Construct_UClass_UJsContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTinyJs,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJsContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJsContext_AssignFromJsonString, "AssignFromJsonString" }, // 2643606535
		{ &Z_Construct_UFunction_UJsContext_ExecuteInstruction, "ExecuteInstruction" }, // 2936844252
		{ &Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnBool, "ExecuteInstructionReturnBool" }, // 3798936189
		{ &Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnJsonString, "ExecuteInstructionReturnJsonString" }, // 4127150496
		{ &Z_Construct_UFunction_UJsContext_ExecuteInstructionReturnString, "ExecuteInstructionReturnString" }, // 2766473440
		{ &Z_Construct_UFunction_UJsContext_ExecuteScript, "ExecuteScript" }, // 2634367314
		{ &Z_Construct_UFunction_UJsContext_JsonObjectStringToStruct, "JsonObjectStringToStruct" }, // 918076474
		{ &Z_Construct_UFunction_UJsContext_StructToJsonObjectString, "StructToJsonObjectString" }, // 2718795872
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JsContext.h" },
		{ "ModuleRelativePath", "Public/JsContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJsContext_Statics::ClassParams = {
		&UJsContext::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UJsContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJsContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsContext, 2414085526);
	template<> UNREALTINYJS_API UClass* StaticClass<UJsContext>()
	{
		return UJsContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsContext(Z_Construct_UClass_UJsContext, &UJsContext::StaticClass, TEXT("/Script/UnrealTinyJs"), TEXT("UJsContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
