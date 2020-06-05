#ifndef ARRAY_STACK
#define ARRAY_STACK

#define TRUE 1
#define FALSE 0
#define LENGTH 100

typedef int Data;

typedef struct arrayStack
{
	Data stackArr[LENGTH];
	int top;
} Stack;

void StackInit(Stack* pstack);
int SIsEmpty(const Stack* pstack);

void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(const Stack* pstack);

#endif