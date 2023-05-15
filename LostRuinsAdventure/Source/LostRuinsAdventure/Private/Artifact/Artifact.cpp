// Fill out your copyright notice in the Description page of Project Settings.


#include "Artifact/Artifact.h"

#include "Artifact/CollectArtifact.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AArtifact::AArtifact()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArtifact::BeginPlay()
{
	Super::BeginPlay();
	CapsuleComponent = FindComponentByClass<UCapsuleComponent>();

	if (CapsuleComponent)
		CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AArtifact::TakeArtifact);
}
void AArtifact::TakeArtifact(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor,class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,const FHitResult& SweepResult)
{
	UCollectArtifact* CollectArtifact = OtherActor->FindComponentByClass<UCollectArtifact>();

	if (CollectArtifact)
	{
		CollectArtifact->AddArtifact(this);
		Destroy();
	}
}
// Called every frame
void AArtifact::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
