// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomActor.h"


// Sets default values
ACustomActor::ACustomActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creating UComponents objects by using CreateDefaultSubobject function
	MySceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MyCustomScene"));
	MyMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyCustomMesh"));
	MyCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCustomCamera"));
	MySpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("MySpringArm"));
	
	//Init Root of tree components
	RootComponent = MySceneComponent;

	//Creating components hierarchy
	MyMeshComponent->SetupAttachment(MySceneComponent);
	MySpringArmComponent->SetupAttachment(MySceneComponent);
	MyCameraComponent->SetupAttachment(MySpringArmComponent);
	
	//Set default value for target arm length
	MySpringArmComponent->TargetArmLength = targetLength;

}

// Called when the game starts or when spawned
void ACustomActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

