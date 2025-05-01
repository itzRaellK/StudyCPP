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

	// Ctrl + K, Ctrl + C // Comentar o código selecionado :D
	// Ctrl + K, Ctrl + U // Descomentar o código selecionado :D
	

	// IntForEdit1 = 10;
	// IntForEdit2 = 10;
	// ResultInt = IntForEdit1 + IntForEdit2; // Pequena soma que será executada no BeginPlay para mostrar o resultado no editor :D
	
	// UE_LOG(LogTemp, Warning, TEXT("Resultado da soma: %d"), ResultInt); // Log para mostrar o resultado da soma no console :D

	while (IntForEdit1 < IntForEdit2) {
		IntForEdit1+= 2;
		ResultInt = IntForEdit1;
		UE_LOG(LogTemp, Warning, TEXT("Valor do resultado: %d"), ResultInt);
	}

	for(int i = 0; i < 10; i++) {
		int Indice = i + 1;
		UE_LOG(LogTemp, Warning, TEXT("%d - %s"), Indice, *SayHello); // Log para mostrar a string no console :D - Usasse * para converter o FString em TCHAR :D
	}
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

