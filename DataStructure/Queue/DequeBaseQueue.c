#include "DequeBaseQueue.h"

void QueueInit(Queue* pq)
{
	DequeInit(pq);
}

int QIsEmpty(Queue* pq)
{
	return DequeIsEmpty(pq);
}

void Enqueue(Queue* pq, Data data)
{
	DequeAddLast(pq, data);
}

Data Dequeue(Queue* pq)
{
	DequeRemoveFirst(pq);
}

Data QPeek(Queue* pq)
{
	return DequeGetFirst(pq);
}