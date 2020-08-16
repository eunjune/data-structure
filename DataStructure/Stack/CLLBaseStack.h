#ifndef CLL_BASE_STACK
#define CLL_BASE_STACK

#include "../LinkedList/CircleLinkedList.h"

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct ListStack
{
	List* list;
} Stack;

void StackInit(Stack* pstack);
int SIsEmpty(const Stack* pstack);

void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(const Stack* pstack);
#endif
