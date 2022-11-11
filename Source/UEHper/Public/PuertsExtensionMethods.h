// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "ExtensionMethods.h"
#include "PuertsExtensionMethods.generated.h"

/**
 * 
 */
UCLASS()
class UEHPER_API UPuertsExtensionMethods : public UExtensionMethods
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "Puerts Extensions")
        static UClass* GetClass(UObject* Object);

    UFUNCTION(BlueprintCallable, Category = "Puerts Extensions")
        static UFunction* FindFunction(UObject* Object, FName InName);
};
