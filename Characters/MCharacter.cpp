// Fill out your copyright notice in the Description page of Project Settings.


#include "MCharacter.h"

// Sets default values
AMCharacter::AMCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// Defina este personagem para chamar Tick() a cada quadro. Você pode desligar isso para melhorar o desempenho se não precisar disso.
	// PrimaryActorTick é uma variável que controla se o ator deve ou não ser atualizado a cada quadro.
	PrimaryActorTick.bCanEverTick = true;

}

// ----------------------------------------------------------------------------

// Function that adds two integers and returns the result
// Função que soma dois números inteiros e retorna o resultado
int AddFunction(int IntA, int IntB) {
	int IntResult = IntA + IntB; 
	return IntResult; // Retorna o resultado da soma :D
}

// ----------------------------------------------------------------------------

// Function that returns the sum of two numbers
// Função que retorna o maior número entre dois números inteiros
int GetGreaterNumberFunction(int IntA, int IntB) {
	if (IntA > IntB) {
		return IntA; // Retorna o maior número :D
	}
	else {
		return IntB; // Retorna o maior número :D
	}
}

// ----------------------------------------------------------------------------

// Quanto você não quer que a função retorne nada, você pode usar 'void' no lugar do tipo de retorno da função
// Void é um tipo que representa nenhum valor ou nenhum tipo de retorno. É usado para indicar que uma função não retorna um valor

// When you don't want the function to return anything, you can use 'void' instead of the return type of the function
// Void is a type that represents no value or no return type. It is used to indicate that a function does not return a value
void SayHelloOnNumberOne(int Index) {
	switch(Index) {
		case 1:
			UE_LOG(LogTemp, Warning, TEXT("Hello Unreal Engine!"));	// Dizendo "olá" para o mundo!
			break;
		default:
			UE_LOG(LogTemp, Warning, TEXT("Urghh!!")); 	// Dizendo "Urghh!!" para o mundo!
			break;
	}
}

// ----------------------------------------------------------------------------

int PrintGreaterAgeFunction(TArray<int> Array) {
	// Função que imprime a maior idade de um array de inteiros
	// Function that prints the greatest age of an array of integers

	// The variable GreaterAge is initialized with 0, as there is no negative age
	int GreaterAge = 0;
	// The variable ArrayIndex is initialized with the size of the array
	int ArrayIndex = Array.Num();
	// Using a for loop to iterate through the array and find the greatest age
	for(int i = 0; i < ArrayIndex; i++) {
		// The variable CurrentAge is initialized with the current element of the array
		int CurrentAge = Array[i]; // Atualiza a variável CurrentAge com o próximo elemento do array
		// Check if the current age is greater than the greatest age found so far
		if(CurrentAge > GreaterAge) {
			// If the current age is greater than the greatest age found so far, update the greatest age
			GreaterAge = CurrentAge; // Atualiza a variável GreaterAge com o valor atual de CurrentAge
			UE_LOG(LogTemp, Warning, TEXT("Idade atual: %d"), GreaterAge); // Imprime a idade atual no log
		}
	}
	return GreaterAge;
}

// ----------------------------------------------------------------------------


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

	// while (IntForEdit1 < IntForEdit2) {
	// 	IntForEdit1+= 2;
	// 	ResultInt = IntForEdit1;
	// 	UE_LOG(LogTemp, Warning, TEXT("Valor do resultado: %d"), ResultInt);
	// }

	// for(int i = 0; i < 10; i++) {
	// 	int Indice = i + 1;
	// 	UE_LOG(LogTemp, Warning, TEXT("%d - %s"), Indice, *SayHello); // Log para mostrar a string no console :D - Usasse * para converter o FString em TCHAR
	// }
}

// Called every frame
void AMCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// int OutputValue = AddFunction(IntForEdit1, IntForEdit2); // Chama a função AddFunction e armazena o resultado na variável OutputValue
	// UE_LOG(LogTemp, Warning, TEXT("Resultado da soma com função: %d"), OutputValue); // Log para mostrar o resultado da soma no console

	// int GreaterNumber = GetGreaterNumberFunction(IntForEdit1, IntForEdit2); // Chama a função GetGreaterNumberFunction e armazena o resultado na variável GreaterNumber
	// UE_LOG(LogTemp, Warning, TEXT("Maior número: %d"), GreaterNumber); // Log para mostrar o maior número no console :D

	// SayHelloOnNumberOne(IntForEdit1); // Chama a função SayHelloOnNumberOne e passa o valor de IntForEdit1 como parâmetro

	PrintGreaterAgeFunction(IntArray);
}

// Called to bind functionality to input
void AMCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}