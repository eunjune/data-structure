#include <assert.h>
#include "CLLbaseStack.h"

void StackInit(Stack* pstack)
{
	pstack->list = (List*)malloc(sizeof(List));
	ListInit(pstack->list);
}

int SIsEmpty(const Stack* pstack)
{
	if (LCount(pstack->list) == 0) 
	{
		return TRUE;
	}

	return FALSE;
}

void SPush(Stack* pstack, Data data)
{
	LInsertFront(pstack->list, data);
}

Data SPop(Stack* pstack)
{
	Data data;
	LFirst(pstack->list, &data);
	LRemove(pstack->list);
	return data;
}


Data SPeek(const Stack* pstack)
{
	Data data;
	LFirst(pstack->list, &data);
	return data;
}