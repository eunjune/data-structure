#include <stdio.h>
#include <assert.h>
#include "LinkedList.h"

void ListInit(List* plist)
{
	plist->head = (Node*)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->length = 0;
	plist->compare = NULL;
	plist->before = plist->head;
	plist->cur = plist->head;
}

void FInsert(List* plist, LData data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = plist->head->next;
	plist->head->next = newNode;

	++plist->length;
}

void SInsert(List* plist, LData data)
{
	Node* pred = plist->head;
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	while (pred->next != NULL)
	{
		if (plist->compare(newNode->data, pred->next->data) != 0)
		{
			break; 
		}

		pred = pred->next;
	}

	newNode->next = pred->next;
	pred->next = newNode;
	++plist->length;
}

void LInsert(List* plist, LData data)
{
	if (plist->compare == NULL)
	{
		FInsert(plist, data);
	}
	else
	{
		SInsert(plist, data);
	}
}


int LFirst(List* plist, LData* pdata)
{
	if (plist->head->next == NULL)
	{
		return FALSE;
	}

	plist->before = plist->head;
	plist->cur = plist->head->next;
	*pdata = plist->cur->data;

	return TRUE;
}

int LNext(List* plist, LData* pdata)
{
	if (plist->cur->next == NULL)
	{
		return FALSE;
	}

	plist->before = plist->cur;
	plist->cur = plist->cur->next;
	
	*pdata = plist->cur->data;
	return TRUE;
}


LData LRemove(List* plist)
{
	assert(plist->cur != plist->before != NULL);

	Node* node = plist->cur;
	LData data = node->data;

	plist->before->next = plist->cur->next;
	plist->cur = plist->before;

	free(node);
	--plist->length;

	return data;
}


int LCount(const List* plist)
{
	return plist->length;
}


void SetSortRule(List* plist, int (*compare)(LData d1, LData d2))
{
	plist->compare = compare;
}