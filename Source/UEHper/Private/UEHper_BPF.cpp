// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEHper_BPF.h"
#include "UEHper.h"
#include "Kismet/GameplayStatics.h"

UUEHper_BPF::UUEHper_BPF(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UGameViewportClient* UUEHper_BPF::GameViewport()
{
	return GEngine->GameViewport;
}

void UUEHper_BPF::MoveWindow(FVector2D NewPosition)
{
	GEngine->GameViewport->GetWindow()->MoveWindowTo(NewPosition);
}

void UUEHper_BPF::ResizeWindow(FVector2D NewClientSize)
{
	GEngine->GameViewport->GetWindow()->Resize(NewClientSize);
}

void UUEHper_BPF::RequestResolutionChange(int32 InResX, int32 InResY, TEnumAsByte<EWindowMode::Type> InWindowMode)
{
	GSystemResolution.RequestResolutionChange(InResX, InResY, InWindowMode);
}
