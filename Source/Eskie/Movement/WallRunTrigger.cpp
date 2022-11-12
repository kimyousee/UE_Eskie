// Fill out your copyright notice in the Description page of Project Settings.


#include "WallRunTrigger.h"

#include "Eskie/EskieCharacter.h"


// Sets default values
AWallRunTrigger::AWallRunTrigger()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWallRunTrigger::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWallRunTrigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWallRunTrigger::NotifyActorBeginOverlap(AActor* otherActor)
{
	if (!otherActor->IsA(AEskieCharacter::StaticClass()))
	{
		return;
	}

	AEskieCharacter* character = dynamic_cast<AEskieCharacter*>(otherActor);

	if (character->CanWallRun)
	{
		
	}
}
