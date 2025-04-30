// Fill out your copyright notice in the Description page of Project Settings.


#include "MCharacter.h"

// Sets default values
AMCharacter::AMCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMCharacter::BeginPlay()
{
	Super::BeginPlay();

	IntForEdit1 = 10;
	IntForEdit2 = 10;
	ResultInt = IntForEdit1 + IntForEdit2; // Pequena soma que será executada no BeginPlay para mostrar o resultado no editor :D
	
	UE_LOG(LogTemp, Warning, TEXT("Resultado da soma: %d"), ResultInt); // Log para mostrar o resultado da soma no console :D
}

// Called every frame
void AMCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

