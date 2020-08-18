#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Deque.h"

void DequeInit(Deque* deq)
{
	deq->head = NULL;
	deq->tail = NULL;
}

int DequeIsEmpty(Deque* deq)
{
	if (deq->head == NULL)
	{
		return TRUE;
	}
	else {
		return FALSE;
	}

	return 0;
}

void DequeAddFirst(Deque* deq, Data data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;

	if (DequeIsEmpty(deq))
	{
		deq->tail = node;
	} 
	else
	{
		deq->head->prev = node;
	}

	node->next = deq->head;
	node->prev = NULL;
	deq->head = node;
}

void DequeAddLast(Deque* deq, Data data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;

	if (DequeIsEmpty(deq))
	{
		deq->head = node;
	}
	else
	{
		deq->tail->next = node;

	}
	node->prev = deq->tail;
	node->next = NULL;

	deq->tail = node;

}

Data DequeRemoveFirst(Deque* deq)
{
	Node* node = deq->head;
	Data data = node->data;

	assert(!DequeIsEmpty(deq));

	deq->head = node->next;
	free(node);

	if (deq->head == NULL)
	{
		deq->tail = NULL;
	} 
	else
	{
		deq->head->prev = NULL;
	}

	return data;
}

Data DequeRemoveLast(Deque* deq)
{
	Node* node = deq->tail;
	Data data = node->data;

	assert(!DequeIsEmpty(deq));

	deq->tail = node->prev;
	free(node);

	if (deq->tail == NULL)
	{
		deq->head = NULL;
	}
	else
	{
		deq->tail->next = NULL;
	}

	return data;
}

Data DequeGetFirst(Deque* deq)
{
	assert(!DequeIsEmpty(deq));

	return deq->head->data;
}

Data DequeGetLast(Deque* deq)
{
	assert(!DequeIsEmpty(deq));

	return deq->tail->data;
}

