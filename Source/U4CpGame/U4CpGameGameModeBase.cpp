// Copyright Epic Games, Inc. All Rights Reserved.


#include "U4CpGameGameModeBase.h"
#include "F1Character.h"
#include "F1PlayerController.h"

#include "UObject/ConstructorHelpers.h"

AU4CpGameGameModeBase::AU4CpGameGameModeBase()
{
	// use our custom PlayerController class
	PlayerControllerClass = AF1PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(
		TEXT("Blueprint'/Game/Blueprint/BP_F1Player.BP_F1Player_C'"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


