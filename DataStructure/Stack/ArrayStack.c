#include <assert.h>
#include "ArrayStack.h"

void StackInit(Stack* pstack)
{
	pstack->top = -1;
}

int SIsEmpty(const Stack* pstack)
{
	if (pstack->top == -1)
	{
		return TRUE;
	}

	return FALSE;
}

void SPush(Stack* pstack, Data data)
{
	assert(pstack->top < LENGTH);

	pstack->stackArr[++pstack->top] = data;
}

Data SPop(Stack* pstack)
{
	assert(!SIsEmpty(pstack));

	return pstack->stackArr[pstack->top--];
}


Data SPeek(const Stack* pstack)
{
	assert(!SIsEmpty(pstack));

	return pstack->stackArr[pstack->top];
}
