#include <stdio.h>
#include <assert.h>
#include "DoubleLinkedList.h"

void ListInit(List* plist)
{
	plist->head = NULL;
	plist->length = 0;
	plist->cur = NULL;
}

void LInsert(List* plist, LData data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;

	node->next = plist->head;
	if (plist->head != NULL)
	{
		plist->head->prev = node;
	}
	
	node->prev = NULL;
	plist->head = node;

	++plist->length;
}

int LFirst(List* plist, LData* pdata)
{
	if (plist->head == NULL)
	{
		return FALSE;
	}

	plist->cur = plist->head;
	*pdata = plist->cur->data;
	
	return TRUE;
}

int LNext(List* plist, LData* pdata)
{
	if (plist->cur == NULL || plist->cur->next == NULL)
	{
		return FALSE;
	}

	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;

	return TRUE;
}

int LPrevious(List* plist, LData* pdata)
{
	if (plist->cur == NULL || plist->cur->prev == NULL)
	{
		return FALSE;
	}

	plist->cur = plist->cur->prev;
	*pdata = plist->cur->data;

	return TRUE;
}


//LData LRemove(List* plist)
//{
//	
//}

int LCount(const List* plist)
{
	return plist->length;
}

void SetSortRule(List* plist, int (*compare)(LData d1, LData d2))
{
	plist->compare = compare;
}