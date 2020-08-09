#include "NameCard.h"

#ifndef ARRAY_LIST
#define ARRAY_LIST

#define TRUE 1
#define FALSE 0

#define LIST_LEN 100

//typedef int LData;
//typedef Point* LData;
typedef NameCard* LData;

typedef struct Array
{
	LData arr[LIST_LEN];
	int length;
	int curPosition;
} Array;

void ListInit(Array* array);
void LInsert(Array* array, LData data);

int LFirst(Array* array, LData* pdata);
int LNext(Array* array, LData* pdata);

LData LRemove(Array* array); // free гр ╟м
int LCount(Array* array);

#endif