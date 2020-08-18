#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CircularQueue.h"

#define CUS_COME_TERM 15

#define CHE_BUR 0
#define BUL_BUR 1
#define DUB_BUR 2

#define CHE_TERM 12
#define BUL_TERM 15
#define DUB_TERM 24

int main(void)
{
	int makeProc = 0;
	int cheOrder = 0, bulOrder = 0, dubOrder = 0;
	int sec;

	Queue queue;

	QueueInit(&queue);
	srand(time(NULL));

	for (sec = 0; sec < 3600; ++sec)
	{
		if (sec % CUS_COME_TERM == 0)
		{
			switch (rand() % 3)
			{
				case CHE_BUR:
					Enqueue(&queue, CHE_TERM);
					++cheOrder;
					break;
				case BUL_BUR:
					Enqueue(&queue, BUL_TERM);
					++bulOrder;
					break;
				case DUB_TERM:
					Enqueue(&queue, DUB_TERM);
					++dubOrder;
					break;
				default:
					break;
			}
		}

		if (makeProc <= 0 && !QIsEmpty(&queue))
		{
			makeProc = Dequeue(&queue);
		}

		--makeProc;
	}

	printf("Simulation Report! \n");
	printf(" - Cheese burger: %d \n", cheOrder);
	printf(" - Bulgogi burger: %d \n", bulOrder);
	printf(" - Double burger: %d \n", dubOrder);
	printf(" - Waiting room size: %d \n", LENGTH);

	return 0;
}

