// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UEHper_BPF.generated.h"

/*
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class UUEHper_BPF : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "", Keywords = "Global engine pointer. Can be 0 so don't use without checking."), Category = "UEHper")
		static UGameViewportClient* GameViewport();

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "", Keywords = "移动窗口"), Category = "UEHper")
		static void MoveWindow(FVector2D NewPosition);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "", Keywords = "调整窗口大小"), Category = "UEHper")
		static void ResizeWindow(FVector2D NewClientSize);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "", Keywords = "更改应用分辨率"), Category = "UEHper")
		static void RequestResolutionChange(int32 InResX, int32 InResY, TEnumAsByte<EWindowMode::Type> InWindowMode);


};
