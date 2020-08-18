#include <stdio.h>
#include "Deque.h"

int main(void)
{
	Deque deque;
	DequeInit(&deque);

	DequeAddFirst(&deque, 3);
	DequeAddFirst(&deque, 2);
	DequeAddFirst(&deque, 1);

	DequeAddLast(&deque, 4);
	DequeAddLast(&deque, 5);
	DequeAddLast(&deque, 6);

	while (!DequeIsEmpty(&deque))
		printf("%d ", DequeRemoveFirst(&deque));

	printf("\n");

	DequeAddFirst(&deque, 3);
	DequeAddFirst(&deque, 2);
	DequeAddFirst(&deque, 1);

	DequeAddLast(&deque, 4);
	DequeAddLast(&deque, 5);
	DequeAddLast(&deque, 6);

	while (!DequeIsEmpty(&deque))
		printf("%d ", DequeRemoveLast(&deque));

	return 0;
}