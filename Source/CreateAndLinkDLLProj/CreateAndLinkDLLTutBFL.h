// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CreateAndLinkDLLTutBFL.generated.h"

/**
 * 
 */
UCLASS()
class CREATEANDLINKDLLPROJ_API UCreateAndLinkDLLTutBFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	

public:

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static bool importDLL(FString folder, FString name);

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static bool importMethodCreateRegressionModel();

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static bool importMethodGetInvertedBool();

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static bool importMethodGetIntPlusPlus();

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static bool importMethodGetCircleArea();

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static bool importMethodGetCharArray();

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static bool importMethodGetVector4();




	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static void* createRegressionModelFromDll();

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static bool getInvertedBoolFromDll(bool boolState);

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static int getIntPlusPlusFromDll(int lastInt);

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static float getCircleAreaFromDll(float radius);

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static FString getCharArrayFromDll(FString parameterText);

	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static FVector4 getVector4FromDll(FVector4 vector4);



	UFUNCTION(BlueprintCallable, Category = "My DLL Library")
		static void freeDLL();
};

