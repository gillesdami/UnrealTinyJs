// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TinyJS.h"
#include "TinyJS_Functions.h"
#include "TinyJS_MathFunctions.h"
#include "Core.h"
#include "Engine.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "JsContext.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UJsContext : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UJsContext();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	TinyJS::Interpreter *js;
	TinyJS::Variable* Intenal_ExecuteInstruction(FString code);

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "js")
	void ExecuteScript(FString path, bool& succeed);

	UFUNCTION(BlueprintCallable, Category = "js")
	void ExecuteInstruction(FString code, bool&succeed);

	UFUNCTION(BlueprintCallable, Category = "js")
	void ExecuteInstructionReturnBool(FString code, bool& result, bool& succeed);

	UFUNCTION(BlueprintCallable, Category = "js")
	void ExecuteInstructionReturnString(FString code, FString& result, bool& succeed);

	UFUNCTION(BlueprintCallable, Category = "js")
	void ExecuteInstructionReturnJsonString(FString code, FString& result, bool& succeed);

	UFUNCTION(BlueprintCallable, Category = "js")
	void AssignFromJsonString(FString variable, FString jsonString, bool& succeed);

	UFUNCTION(BlueprintCallable, Category = "js", CustomThunk, meta = (CustomStructureParam = "Struct"))
	static bool StructToJsonObjectString(FString& result, const UStruct* Struct);
	DECLARE_FUNCTION(execStructToJsonObjectString)
    {
        // Grab the reference to the Json string inside the Thunk. This advances one step on the Stack
        P_GET_PROPERTY_REF(FStrProperty, result);

        // Grab both Struct definition and type from the second param StructToFill. ORDER OF OPERATIONS IS KEY here.
        // This works only because of the previous call to P_GET_PROPERTY_REF which left the stack on top of the struct
        Stack.StepCompiledIn<FStructProperty>(NULL);
        void* StructPtr                 = Stack.MostRecentPropertyAddress;
        FStructProperty* StructProperty = CastField<FStructProperty>(Stack.MostRecentProperty);

        // End the process of reading the params
        P_FINISH;

        UStruct* StructDefinition = StructProperty->Struct;
        bool bSuccess             = true;
		
		TSharedPtr<FJsonObject> JsonObject;
        if(!FJsonObjectConverter::UStructToJsonObjectString(StructDefinition, StructPtr, result, 0, 0))
        {
            UE_LOG(LogJson, Warning, TEXT("USTructToJsonObject - Unable to parse the struct"));
            bSuccess = false;
        }UE_LOG(LogJson, Warning, TEXT("%s"), *result);

        *static_cast<bool*>(RESULT_PARAM) = bSuccess;
    }

	UFUNCTION(BlueprintCallable, Category = "js", CustomThunk, meta = (CustomStructureParam = "StructToFill"))
	static bool JsonObjectStringToStruct(const FString& JsonString, const UStruct* StructToFill);
	DECLARE_FUNCTION(execJsonObjectStringToStruct)
    {
        // Grab the reference to the Json string inside the Thunk. This advances one step on the Stack
        P_GET_PROPERTY_REF(FStrProperty, JsonString);

        // Grab both Struct definition and type from the second param StructToFill. ORDER OF OPERATIONS IS KEY here.
        // This works only because of the previous call to P_GET_PROPERTY_REF which left the stack on top of the struct
        Stack.StepCompiledIn<FStructProperty>(NULL);
        void* StructPtr                 = Stack.MostRecentPropertyAddress;
        FStructProperty* StructProperty = CastField<FStructProperty>(Stack.MostRecentProperty);

        // End the process of reading the params
        P_FINISH;

        UStruct* StructDefinition = StructProperty->Struct;
        bool bSuccess             = true;

        // First deserialize the Json string into a Json Object
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);
        if(!FJsonSerializer::Deserialize(JsonReader, JsonObject) || !JsonObject.IsValid())
        {
            UE_LOG(LogJson, Warning, TEXT("JsonObjectStringToUStruct - Unable to parse json=[%s]"), *JsonString);
            bSuccess = false;
        }

        // Now turn the Json Object into a UStruct of the same type as the second argument
        if(!FJsonObjectConverter::JsonObjectToUStruct(JsonObject.ToSharedRef(), StructDefinition, StructPtr, 0, 0))
        {
            UE_LOG(LogJson, Warning, TEXT("JsonObjectStringToUStruct - Unable to deserialize. json=[%s]"), *JsonString);
            bSuccess = false;
        }

        *static_cast<bool*>(RESULT_PARAM) = bSuccess;
    }
};
