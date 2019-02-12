// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

#include "CustomActor.generated.h"

UCLASS()
class PRACTICE_02_API ACustomActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Create pointers to UComponents add to category 'My Components'
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "MyComponents")
		USceneComponent* MySceneComponent;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "MyComponents")
		UStaticMeshComponent* MyMeshComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "MyComponents")
		UCameraComponent* MyCameraComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "MyComponents")
		USpringArmComponent* MySpringArmComponent;
	
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MyCustomVariables")
		uint8 volumeLevel;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MyCustomVariables")
		float targetLength = 200.0f;
	
	
};
