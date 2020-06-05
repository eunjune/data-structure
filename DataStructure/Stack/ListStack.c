#include <assert.h>
#include "ListStack.h"

void StackInit(Stack* pstack)
{
	pstack->head = NULL;
}

int SIsEmpty(const Stack* pstack)
{
	if (pstack->head == NULL)
	{
		return TRUE;
	}
	
	return FALSE;
}

void SPush(Stack* pstack, Data data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	node->next = pstack->head;
	pstack->head = node;
}

Data SPop(Stack* pstack)
{
	assert(!SIsEmpty(pstack));

	Node* node = pstack->head;
	Data result = node->data;

	pstack->head = node->next;
	free(node);
	
	return result;
}


Data SPeek(const Stack* pstack)
{
	assert(!SIsEmpty(pstack));

	return pstack->head->data;
}
