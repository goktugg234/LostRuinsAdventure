// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"
#include "LRACharacterBase.generated.h"

class USpringArmComponent;
class UCameraComponent;
class USkeletalMeshComponent;


UCLASS()
class LOSTRUINSADVENTURE_API ALRACharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ALRACharacterBase();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
	USkeletalMeshComponent* MeshComp;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	void MoveRight(float Value);
	void TurnAtRate(float Value);
	void LookUpAtRate(float Value);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float BaseTurnRate;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float BaseLookAtRate;

	UFUNCTION(BlueprintImplementableEvent)
	void OnArtifactAdded(int32 Artifact);

	UFUNCTION(BlueprintImplementableEvent)
	void OnHealthUpdated();

	UFUNCTION()
	void PlayerDied();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	class UCollectArtifact* CollectArtifact;
	class ULRAHealthComponent* HealthComponent;
};
