// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Patroling/PatrolPoint.h"
#include "Perception/PawnSensingComponent.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class LOSTRUINSADVENTURE_API AEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnHitPlayer(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& HitResult);

	UFUNCTION()
	void OnSeePawn(APawn* Pawn);

	UFUNCTION()
	void OnChasePlayer(float DeltaTime);

	UFUNCTION()
	void OnPatroling();
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<APatrolPoint*> PatrolPoints;

	UPROPERTY(EditAnywhere, Category = "AI")
	TArray<APatrolPoint*> SpecificPatrolPoints;

private:
	UPROPERTY(EditAnywhere)
	float Damage;
	bool bPlayerVisible;

	const AActor* Owner;

	class ALRACharacterBase* PlayerCharacter;
	UCapsuleComponent* CapsuleComponent;

	UPROPERTY(EditAnywhere, Category = "AI")
	UPawnSensingComponent* PawnSensingComponent;

	UPROPERTY(EditAnywhere)
	int32 CurrentPatrolPointIndex;

	UPROPERTY(EditAnywhere)
	float MovementSpeed;

	UPROPERTY(EditAnywhere)
	float DistanceThreshold;
};
