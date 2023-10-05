// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestTracker.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PKMNWORLD_4_27_API UQuestTracker : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestTracking")
	int QuestProgess = 0;
};
