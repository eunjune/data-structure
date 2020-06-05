#ifndef LIST_QUEUE
#define LIST_QUEUE

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct node
{
	Data data;
	struct node* next;
} Node;

typedef struct listQueue
{
	Node* front;
	Node* rear;
} Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);

void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);

#endif