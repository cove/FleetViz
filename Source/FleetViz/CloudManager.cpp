// Fill out your copyright notice in the Description page of Project Settings.

#include "FleetViz.h"
#include "CloudManager.h"
#include "Engine.h"

// Sets default values
ACloudManager::ACloudManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    this->SetActorTickEnabled(true);
}

// Called when the game starts or when spawned
void ACloudManager::BeginPlay()
{
	Super::BeginPlay();
	rotation.ZeroRotator;
    loc.X = 0.f;
    loc.Y = 100.f;
    loc.Z = 800.f;
}

// Called every frame
void ACloudManager::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

    GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Tick!"));
    FActorSpawnParameters spawnParams;
    spawnParams.Owner = this;
    spawnParams.Instigator = Instigator;

    ACloudCompute* compute = GetWorld()->SpawnActor<ACloudCompute>(ComputeObject, loc, rotation, spawnParams);

}

