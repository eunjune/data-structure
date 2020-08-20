#ifndef LIST_STACK
#define LIST_STACK

#include "../Tree/BinaryTree.h"

#define TRUE 1
#define FALSE 0

//typedef int Data;
typedef BTreeNode* Data;

typedef struct node
{
	Data data;
	struct node* next;
} Node;

typedef struct ListStack
{
	Node* head;
} Stack;

void StackInit(Stack* pstack);
int SIsEmpty(const Stack* pstack);

void SPush(Stack* pstack, Data data);
Data SPop(Stack* pstack);
Data SPeek(const Stack* pstack);

#endif