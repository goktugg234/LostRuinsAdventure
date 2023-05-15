// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CollectArtifact.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArtifactAdded, int32, TotalArtifact);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LOSTRUINSADVENTURE_API UCollectArtifact : public UActorComponent
{
	GENERATED_BODY()

public:
	FOnArtifactAdded OnArtifactAdded;
public:	
	// Sets default values for this component's properties
	UCollectArtifact();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void AddArtifact(class AActor* Artifact);
public:
	UPROPERTY(BlueprintReadWrite)
	TArray<AActor*> ArtifactList = TArray<AActor*>();	
};
