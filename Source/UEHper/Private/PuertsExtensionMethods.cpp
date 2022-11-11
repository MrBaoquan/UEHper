// Fill out your copyright notice in the Description page of Project Settings.


#include "PuertsExtensionMethods.h"

UClass* UPuertsExtensionMethods::GetClass(UObject *Object)
{
    return Object->GetClass();
}

UFunction* UPuertsExtensionMethods::FindFunction(UObject *Object, FName InName)
{
    return Object->FindFunction(InName);
}