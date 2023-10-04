// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestManager.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PKMNWORLD_4_27_API UQuestManager : public UObject
{
	GENERATED_BODY(Blueprintable)
	

public: 
	UPROPERTY(EditAnywhere, Blueprintable, BlueprintType, BlueprintReadWrite, Category = "QuestTracking") TArray<FName> ActiveQuests;
};
