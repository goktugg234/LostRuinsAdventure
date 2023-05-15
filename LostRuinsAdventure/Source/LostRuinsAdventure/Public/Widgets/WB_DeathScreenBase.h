// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WB_DeathScreenBase.generated.h"

/**
 * 
 */
UCLASS()
class LOSTRUINSADVENTURE_API UWB_DeathScreenBase : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UFUNCTION()
    void OnRestartButtonClicked();

    UFUNCTION()
    void OnQuitButtonClicked();
};
