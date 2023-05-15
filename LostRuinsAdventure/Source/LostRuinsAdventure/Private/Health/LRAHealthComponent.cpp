// Fill out your copyright notice in the Description page of Project Settings.


#include "Health/LRAHealthComponent.h"
#include "Characters/LRACharacterBase.h"

// Sets default values for this component's properties
ULRAHealthComponent::ULRAHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	DefaultHeath = 100.0f;
	Health = DefaultHeath;
}


// Called when the game starts
void ULRAHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	AActor* Owner = GetOwner();
	if (Owner) {
		Owner->OnTakeAnyDamage.AddDynamic(this, &ULRAHealthComponent::TakeDamage);
	}
	
}

// Called every frame
void ULRAHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void ULRAHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	AActor* Owner = GetOwner();
	if (Damage <= 0) {
		return;
	}
	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHeath);
	if (Health <= 0.0f) {
		OnPlayerDied.Broadcast();
		Owner->Destroy();
	}
}

