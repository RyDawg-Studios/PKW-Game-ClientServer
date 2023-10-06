// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestManager.h"
#include <Net/UnrealNetwork.h>


void UQuestManager::AddQuest(FName QuestID) {
	FQuestInfo* QuestInfo = QuestDataTable -> FindRow<FQuestInfo>(QuestID, TEXT("Add Quest"), true);

	if (QuestInfo) {
		AvailableQuests.Add(QuestID);
	}
	else {
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
	}
	return;
}


