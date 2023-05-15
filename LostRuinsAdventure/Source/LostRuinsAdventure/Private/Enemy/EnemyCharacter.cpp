// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyCharacter.h"
#include "Patroling/PatrolPoint.h"
#include "Characters/LRACharacterBase.h"
#include "Perception/PawnSensingComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Damage = 20.0f;
	bPlayerVisible = false;

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>("PawnSensingComponent");
	if (PawnSensingComponent)
	{
		PawnSensingComponent->SightRadius = 1500.0f;
		PawnSensingComponent->bSeePawns = true;
		PawnSensingComponent->SetPeripheralVisionAngle(60.0f);
		PawnSensingComponent->OnSeePawn.AddDynamic(this, &AEnemyCharacter::OnSeePawn);
	}
}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	PlayerCharacter = Cast<ALRACharacterBase>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (PlayerCharacter == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player character not found!"));
		return;
	}

	CapsuleComponent = FindComponentByClass<UCapsuleComponent>();

	if (CapsuleComponent)
		CapsuleComponent->OnComponentHit.AddDynamic(this, &AEnemyCharacter::OnHitPlayer);
	
	TArray<AActor*> FoundPatrolPoints;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APatrolPoint::StaticClass(), FoundPatrolPoints);
	for (AActor* PatrolPoint : FoundPatrolPoints)
	{
		PatrolPoints.Add(Cast<APatrolPoint>(PatrolPoint));
	}
	CurrentPatrolPointIndex = 0;
	MovementSpeed = 420.0f;
	DistanceThreshold = 50.0f;
	if (PatrolPoints.Num() > 0)
	{
		FVector Destination = PatrolPoints[CurrentPatrolPointIndex]->GetActorLocation();
		GetCharacterMovement()->MaxWalkSpeed = MovementSpeed;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bIgnoreBaseRotation = true;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bIgnoreBaseRotation = true;
		GetCharacterMovement()->bUseControllerDesiredRotation = true;
		GetCharacterMovement()->bOrientRotationToMovement = true;
		GetCharacterMovement()->bIgnoreBaseRotation = true;
		SetActorRotation((Destination - GetActorLocation()).Rotation());
	}
}

void AEnemyCharacter::OnHitPlayer(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& HitResult)
{
	Owner = GetOwner();

	if (Owner == nullptr) return;

	AController* OwnerInstigator = Owner->GetInstigatorController();
	const TSubclassOf<UDamageType> DamageTypeClass = UDamageType::StaticClass();

	if (OtherActor && OtherActor != this && OtherActor != Owner && OtherActor->ActorHasTag("Player"))
	{
		UGameplayStatics::ApplyDamage(OtherActor, Damage, OwnerInstigator, this, DamageTypeClass);
		Destroy();
	}
}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	OnPatroling();
	OnChasePlayer(DeltaTime);
}
void AEnemyCharacter::OnSeePawn(APawn* Pawn)
{
	if (Pawn == PlayerCharacter)
	{
		bPlayerVisible = true;
	}
}

void AEnemyCharacter::OnChasePlayer(float DeltaTime) {
	if (bPlayerVisible)
	{
		// Move towards the player
		FVector DirectionToPlayer = (PlayerCharacter->GetActorLocation() - GetActorLocation()).GetSafeNormal();
		GetCharacterMovement()->MaxWalkSpeed = MovementSpeed;
		AddMovementInput(DirectionToPlayer);

		// Rotate towards the player
		FRotator TargetRotation = (PlayerCharacter->GetActorLocation() - GetActorLocation()).Rotation();
		TargetRotation.Pitch = 0;
		TargetRotation.Roll = 0;
		SetActorRotation(FMath::RInterpTo(GetActorRotation(), TargetRotation, DeltaTime, 10.0f));
	}
}
void AEnemyCharacter::OnPatroling() {
	if (!bPlayerVisible) {
		if (SpecificPatrolPoints.Num() == 0)
		{
			return;
		}

		// Get the current patrol point
		APatrolPoint* CurrentPatrolPoint = SpecificPatrolPoints[CurrentPatrolPointIndex];

		// Check if the enemy has reached the current patrol point
		float DistanceToPatrolPoint = FVector::Distance(GetActorLocation(), CurrentPatrolPoint->GetActorLocation());
		if (DistanceToPatrolPoint < DistanceThreshold)
		{
			// Move to the next patrol point
			CurrentPatrolPointIndex = (CurrentPatrolPointIndex + 1) % SpecificPatrolPoints.Num();
			CurrentPatrolPoint = SpecificPatrolPoints[CurrentPatrolPointIndex];
		}

		// Set the enemy's rotation towards the current patrol point
		FVector DirectionToPatrolPoint = (CurrentPatrolPoint->GetActorLocation() - GetActorLocation()).GetSafeNormal();
		FRotator TargetRotation = DirectionToPatrolPoint.Rotation();
		SetActorRotation(TargetRotation);

		// Move towards the current patrol point
		GetCharacterMovement()->MaxWalkSpeed = MovementSpeed / 2;
		AddMovementInput(DirectionToPatrolPoint);
	}
}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

