// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuestTracker.h"
#include "Engine/DataTable.h"
#include "QuestObject.h"
#include "QuestManager.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FQuestGoalInfo 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UQuestTracker> QuestTracker;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bIsRequired = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName RewardID = FName("defaultRewardId");

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int CompletionProgress = 0;

};

USTRUCT(BlueprintType)
struct FQuestInfo : public FTableRowBase 
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString questName = FString("Default Quest Name");

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString questDesc = FString("Default Quest Description!");

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UQuestObject> QuestObjectClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FQuestGoalInfo> QuestGoals;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName RewardID = FName("defaultRewardId");

};


UCLASS(Blueprintable)
class PKMNWORLD_4_27_API UQuestManager : public UObject
{
	GENERATED_BODY()
	

public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestTracking") 
	TMap<FName, UQuestObject*> ActiveQuests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestTracking")
	TArray<FName> AvailableQuests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestTracking")
	class UQuestTracker* TrackingQuest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QuestData")
	UDataTable* QuestDataTable;

	UFUNCTION(Server, Reliable, BlueprintCallable, Category = "QuestLogic")
	virtual void AddQuest(FName QuestID);

};
