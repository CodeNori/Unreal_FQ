// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "F1PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class U4CPGAME_API AF1PlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AF1PlayerController();

protected:

	virtual void PlayerTick(float DeltaTime) override;
	virtual void SetupInputComponent() override;

	void MoveToMouseCursor();
	void SetNewMoveDestination(const FVector DestLocation);
	void OnSetDestinationPressed();
	void OnSetDestinationReleased();
};
