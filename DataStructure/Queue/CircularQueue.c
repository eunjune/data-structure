#include <stdio.h>
#include <assert.h>
#include "CircularQueue.h";

int next(int pos)
{
	return (pos + 1) % LENGTH;
}

void QueueInit(Queue* pq)
{
	pq->front = 0;
	pq->rear = 0;
}

int QIsEmpty(Queue* pq)
{
	if (pq->front == pq->rear)
	{
		return TRUE;
	}

	return FALSE;
}

void Enqueue(Queue* pq, Data data)
{
	assert(next(pq->rear) != pq->front);

	pq->rear = next(pq->rear);
	pq->queArr[pq->rear] = data;
}

Data Dequeue(Queue* pq)
{
	assert(!QIsEmpty(pq));

	pq->front = next(pq->front);
	return pq->queArr[pq->front];
}

Data QPeek(Queue* pq)
{
	assert(!QIsEmpty(pq));

	return pq->queArr[next(pq->front)];
}
