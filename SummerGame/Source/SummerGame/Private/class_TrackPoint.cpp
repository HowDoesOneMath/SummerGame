// Fill out your copyright notice in the Description page of Project Settings.


#include "class_TrackPoint.h"

// Sets default values
Aclass_TrackPoint::Aclass_TrackPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aclass_TrackPoint::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aclass_TrackPoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Aclass_TrackPoint::setTarget()
{
	FVector newPos;
	newPos.X = ((p1Position.X + p2Position.X)*0.5f);
	newPos.Y = ((p1Position.Y + p2Position.Y)*0.5f);
	newPos.Z = ((p1Position.Z + p2Position.Z)*0.5f);
	SetActorLocation(newPos);

}

