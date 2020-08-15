#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "DBDLinkedList.h"

void ListInit(List* plist)
{
	plist->head = (Node*)malloc(sizeof(Node));
	plist->tail = (Node*)malloc(sizeof(Node));
	plist->numOfData = 0;

	plist->head->prev = NULL;
	plist->head->next = plist->tail;

	plist->tail->next = NULL;
	plist->tail->prev = plist->head;
}

void LInsert(List* plist, Data data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;

	plist->tail->prev->next = node;
	node->prev = plist->tail->prev;

	node->next = plist->tail;
	plist->tail->prev = node;

	++plist->numOfData;
}

int LFirst(List* plist, Data* pdata)
{

	if (plist->head->next == plist->tail)
	{
		return FALSE;
	}

	plist->cur = plist->head->next;
	*pdata = plist->cur->data;

	return TRUE;
}

int LNext(List* plist, Data* pdata)
{
	if (plist->cur->next == plist->tail)
	{
		return FALSE;
	}

	plist->cur = plist->cur->next;
	*pdata = plist->cur->data;

	return TRUE;
}

Data LRemove(List* plist)
{
	assert(plist->cur != plist->head);

	Node* node = plist->cur;
	Data data = node->data;

	node->prev->next = node->next;
	node->next->prev = node->prev;
	plist->cur = plist->cur->prev;

	--plist->numOfData;
	free(node);

	return data;
}

int LCount(List* plist)
{
	return plist->numOfData;
}