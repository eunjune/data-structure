#ifndef CIRCULAR_QUEUE
#define CIRCULAR_QUEUE

#define TRUE 1
#define FALSE 0
#define LENGTH 100

typedef int Data;

typedef struct ciruclarQueue
{
	int front;
	int rear;
	Data queArr[LENGTH];
} Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);

void Enqueue(Queue* pq, Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);

#endif