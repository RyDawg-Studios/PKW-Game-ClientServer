// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestManager.h"
#include <Net/UnrealNetwork.h>

void UQuestManager::AddQuest_Implementation(FName QuestID) {
	FQuestInfo* questInfo = QuestDataTable -> FindRow<FQuestInfo>(QuestID, TEXT("Add Quest"), true);

	if (questInfo) {
		AvailableQuests.Add(QuestID);
	}
	return;
}

