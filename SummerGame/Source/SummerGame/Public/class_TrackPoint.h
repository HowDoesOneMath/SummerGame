// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "class_TrackPoint.generated.h"

UCLASS()
class SUMMERGAME_API Aclass_TrackPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aclass_TrackPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyProperties)
	FVector p1Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MyProperties)
	FVector p2Position;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = MyFunctions)
	void setTarget();

};
