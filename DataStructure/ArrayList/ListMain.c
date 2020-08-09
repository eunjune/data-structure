#include <stdio.h>
#include "ArrayList.h"

int main()
{
	Array array;
	ListInit(&array);

	int i;
	for (i = 1; i <= 10; ++i)
	{
		LInsert(&array, i);
	}

	LData data;
	int sum = 0;
	if (LFirst(&array, &data))
	{
		sum += data;

		while (LNext(&array, &data))
			sum += data;
	}
	printf("%d\n",sum);

	if (LFirst(&array, &data))
	{
		if (data % 2 == 0 || data % 3 == 0)
		{
			LRemove(&array);
		}

		while (LNext(&array, &data))
		{
			if (data % 2 == 0 || data % 3 == 0)
			{
				LRemove(&array);
			}
		}
	}

	if (LFirst(&array, &data))
	{
		printf("%d ", data);

		while (LNext(&array, &data))
			printf("%d ", data);
	}

	return 0;
}