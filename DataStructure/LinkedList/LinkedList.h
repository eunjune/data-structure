#ifndef LINKED_LIST
#define LINKED_LIST

#include "Point.h"

#define TRUE 1
#define FALSE 0

//typedef Slot LData;
//typedef int LData;
typedef Point* LData;

typedef struct node
{
	LData data;
	struct node* next;
} Node;

typedef struct linkedList
{
	Node* head;
	Node* cur;
	Node* before;
	int length;
	int (*compare)(LData d1, LData d2);
} List;

void ListInit(List* plist);

void LInsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);

int LNext(List* plist, LData* pdata);

LData LRemove(List* plist);

int LCount(const List* plist);

void SetSortRule(List* plist, int (*comp)(LData d1, LData d2));

#endif
