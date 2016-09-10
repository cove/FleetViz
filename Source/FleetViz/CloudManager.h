// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "CloudCompute.h"
#include "CloudManager.generated.h"

UCLASS()
class FLEETVIZ_API ACloudManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACloudManager();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	FVector loc;
    FRotator rotation;

    UPROPERTY(EditDefaultsOnly, Category = "cloud compute object")
    TSubclassOf<ACloudCompute> ComputeObject;
	
};
