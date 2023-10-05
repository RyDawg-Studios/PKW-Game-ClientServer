// Fill out your copyright notice in the Description page of Project Settings.


#include "QuestManager.h"

void UQuestManager::AddQuest_Implementation(FName questID) {
	FQuestInfo* questInfo = QuestDataTable -> FindRow<FQuestInfo>(questID, TEXT("Add Quest"), true);

	if (questInfo != NULL) {
		AvailableQuests.Add(questID);
	}
	return;
}
