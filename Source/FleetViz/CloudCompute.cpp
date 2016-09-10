// Fill out your copyright notice in the Description page of Project Settings.

#include "FleetViz.h"
#include "CloudCompute.h"


// Sets default values
ACloudCompute::ACloudCompute()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACloudCompute::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACloudCompute::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

