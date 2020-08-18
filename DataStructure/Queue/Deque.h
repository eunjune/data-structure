#ifndef DEQUE
#define DEQUE

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
	Data data;
	struct _node* next;
	struct _node* prev;
} Node;

typedef struct _deque
{
	Node* head;
	Node* tail;
} Deque;

void DequeInit(Deque* deq);
int DequeIsEmpty(Deque* deq);

void DequeAddFirst(Deque* deq, Data data);
void DequeAddLast(Deque* deq, Data data);

Data DequeRemoveFirst(Deque* deq);
Data DequeRemoveLast(Deque* deq);

Data DequeGetFirst(Deque* deq);
Data DequeGetLast(Deque* deq);

#endif // !DEQUE
