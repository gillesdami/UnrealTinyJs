#include "JsContext.h"

void log(TinyJS::Variable *v, void *userdata) {
	FString msg(v->getParameter("text")->getString().c_str());

	if(GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, msg);
	}
}

// Sets default values for this component's properties
UJsContext::UJsContext()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	js = new TinyJS::Interpreter();
	TinyJS::registerFunctions(js);
	TinyJS::registerMathFunctions(js);
	js->addNative("function __JSCONTEXT_INTERNAL_LOG__(text)", &log, 0);
	js->execute("var console = { log: __JSCONTEXT_INTERNAL_LOG__ };");
}

void UJsContext::BeginPlay()
{
	Super::BeginPlay();
}

void UJsContext::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

TinyJS::Variable* UJsContext::Intenal_ExecuteInstruction(FString code) {
	std::string codeAsString(TCHAR_TO_UTF8(*code));

	try {
		js->execute("var __JSCONTEXT_INTERNAL_RESULT__ = " + codeAsString + ";");

		return js->root->getParameter("__JSCONTEXT_INTERNAL_RESULT__");
	}
	catch (TinyJS::Exception* e) {
		FString msg(e->text.c_str());
		UE_LOG(LogTemp, Warning, TEXT("%s"), *msg);

		return nullptr;
	}
}

void UJsContext::ExecuteScript(FString path, bool& succeed) {
	FString FullPath = FPaths::ProjectDir() + path;
	FString FS_Content;
	FFileHelper::LoadFileToString(FS_Content, *FullPath);
	std::string Content(TCHAR_TO_UTF8(*FS_Content));

	try {
    	js->execute(Content);
		succeed = true;

	}
	catch (TinyJS::Exception* e) {
		FString msg(e->text.c_str());
		UE_LOG(LogTemp, Warning, TEXT("%s"), *msg);
		succeed = false;
	}
}

void UJsContext::ExecuteInstruction(FString code, bool& succeed) {
	TinyJS::Variable* var = Intenal_ExecuteInstruction(code);
	succeed = !!var;
}

void UJsContext::ExecuteInstructionReturnBool(FString code, bool& result, bool& succeed) {
	TinyJS::Variable* var = Intenal_ExecuteInstruction(code);
	succeed = !!var;

	if (succeed) {
		result = var->getBool();
	}
}

void UJsContext::ExecuteInstructionReturnString(FString code, FString& result, bool& succeed) {
	TinyJS::Variable* var = Intenal_ExecuteInstruction(code);
	succeed = !!var;

	if (succeed) {
		std::string tmp = var->getString();
		FString fs_tmp(tmp.c_str());
		
		result = fs_tmp;
	}
}

void UJsContext::ExecuteInstructionReturnJsonString(FString code, FString& result, bool& succeed) {
	ExecuteInstructionReturnString("JSON.stringify(" + code + ");", result, succeed);
}

void UJsContext::AssignFromJsonString(FString variable, FString jsonString, bool& succeed) {
	ExecuteInstruction("var " + variable + " = eval(" + jsonString + ");", succeed);// JSON.parse is not supported by TinyJS, dangerous !
}

bool UJsContext::JsonObjectStringToStruct(const FString& JsonString, const UStruct* StructToFill) {
	// We should never hit this!  stubs to avoid NoExport on the class.
	check(0);
	return false;
}
