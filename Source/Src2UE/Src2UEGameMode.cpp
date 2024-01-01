// Copyright Epic Games, Inc. All Rights Reserved.

#include "Src2UEGameMode.h"
#include "Src2UECharacter.h"
#include "UObject/ConstructorHelpers.h"

ASrc2UEGameMode::ASrc2UEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
