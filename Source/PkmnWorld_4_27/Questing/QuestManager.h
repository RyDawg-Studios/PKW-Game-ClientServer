// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestTracker.h"
#include "Engine/DataTable.h"
#include "QuestManager.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FQuestInfo : public FTableRowBase 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString questName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString questDesc;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UQuestTracker> QuestTracker;
};


UCLASS(Blueprintable)
class PKMNWORLD_4_27_API UQuestManager : public UObject
{
	GENERATED_BODY()
	

public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestTracking") 
	TMap<FName, UQuestTracker*> ActiveQuests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
	class UDataTable* QuestDataTable;

};
