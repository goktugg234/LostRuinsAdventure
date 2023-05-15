// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/LRACharacterBase.h"
#include "Artifact/CollectArtifact.h"
#include "Health/LRAHealthComponent.h"
#include "Blueprint/UserWidget.h"
#include "Widgets/SWidget.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/WidgetComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"

// Sets default values
ALRACharacterBase::ALRACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	SpringArmComp -> SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComp -> SetupAttachment(SpringArmComp);

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PlayerMesh"));
	MeshComp->SetupAttachment(RootComponent);

	BaseTurnRate = 45.0f;
	BaseLookAtRate = 45.0f;
}

// Called when the game starts or when spawned
void ALRACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
	CollectArtifact = FindComponentByClass<UCollectArtifact>();
	HealthComponent = FindComponentByClass<ULRAHealthComponent>();

	if (CollectArtifact)
	{
		CollectArtifact->OnArtifactAdded.AddDynamic(this, &ALRACharacterBase::OnArtifactAdded);
	}

	if (HealthComponent) {
		HealthComponent->FOnUpdateHealth.AddDynamic(this, &ALRACharacterBase::OnHealthUpdated);
		HealthComponent->OnPlayerDied.AddDynamic(this, &ALRACharacterBase::PlayerDied);
	}

}
void ALRACharacterBase::PlayerDied() {
	DetachFromControllerPendingDestroy();
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

}

void ALRACharacterBase::MoveForward(float Value)
{
	if ((Controller) && Value != 0.0f) {
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ALRACharacterBase::MoveRight(float Value)
{
	if ((Controller) && Value != 0.0f) {
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void ALRACharacterBase::TurnAtRate(float Value)
{
	AddControllerYawInput(Value * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ALRACharacterBase::LookUpAtRate(float Value)
{
	AddControllerPitchInput(Value * BaseLookAtRate * GetWorld()->GetDeltaSeconds());
}


// Called every frame
void ALRACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ALRACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ALRACharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ALRACharacterBase::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ALRACharacterBase::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ALRACharacterBase::LookUpAtRate);

}

