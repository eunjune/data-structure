#include <stdio.h>
#include <assert.h>
#include "ListQueue.h";

void QueueInit(Queue* pq)
{
	pq->front = NULL;
	pq->rear = NULL;
}

int QIsEmpty(Queue* pq)
{
	if (pq->front == NULL)
	{
		return TRUE;
	}

	return FALSE;
}

void Enqueue(Queue* pq, Data data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	if (QIsEmpty(pq))
	{
		pq->front = node;
		pq->rear = node;
	}
	else
	{
		pq->rear->next = node;
		pq->rear = node;
	}

}

Data Dequeue(Queue* pq)
{
	assert(!QIsEmpty(pq));

	Node* node = pq->front;
	Data result = node->data;

	pq->front = pq->front->next;
	free(node);

	return result;
}

Data QPeek(Queue* pq)
{
	assert(!QIsEmpty(pq));

	return pq->front->data;
}
