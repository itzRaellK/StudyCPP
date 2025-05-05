// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MCharacter.generated.h"

UCLASS()
class STUDYCPP_API AMCharacter : public ACharacter
{
	GENERATED_BODY()

// How to DECLARE PUBLIC variables in Unreal Engine?
// Declare the variable in the header file (.h) using the UPROPERTY macro.
// Declare a variavel no arquivo de cabeçalho (.h) usando o macro UPROPERTY.
public:
	int IntTypeVariable = 0;
	float FloatTypeVariable = 0.0f;
	bool BoolTypeVariable = false; 								// Or true :D	
	FString StringTypeVariable = "This is a string variable";
	FVector VectorTypeVariable = FVector(0,0,0); 				// Or 'FVector::ZeroVector' make the same in the code for this purpose :D
	FRotator RotatorTypeVariable = FRotator(0,0,0); 			// Or 'FRotator::ZeroRotator' make the same in the code for this purpose :D
	FTransform TransformTypeMatrix = FTransform::Identity; 		// For some reason, this is different from the others :/

// How to EDIT PUBLIC variables in Blueprints in Unreal Engine?
// Declare the variable in the header file (.h) using the UPROPERTY macro with EditAnywhere or EditDefaultsOnly specifier.
// Declare a variavel no arquivo de cabeçalho (.h) usando o macro UPROPERTY com o especificador EditAnywhere ou EditDefaultsOnly.
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	int IntForEdit1 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	int IntForEdit2 = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	int ResultInt = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	FString SayHello = "Hello Unreal Engine!";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	TArray<int> IntArray = {15, 16, 13, 12, 18, 17}; // Array de idades 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	FString NameField = "Dev Name is: ";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	FString MyName = "Kessler Dev";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "My Variables")
	FVector ActualVector = FVector(900, 1100, 102.013); // Variável do tipo vetor que será usada para armazenar a posição atual do personagem
	

public:
	// Sets default values for this character's properties
	AMCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
