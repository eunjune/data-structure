// DataStructure.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include "ArrayList.h"

int main()
{
	Array array;
	Point compPos;
	Point* ppos;

	ListInit(&array);

	ppos = (Point*)malloc(sizeof(Point));
	set(ppos, 2, 1);
	LInsert(&array, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	set(ppos, 2, 2);
	LInsert(&array, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	set(ppos, 3, 1);
	LInsert(&array, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	set(ppos, 3, 2);
	LInsert(&array, ppos);

	printf("현재 데이터의 수: %d \n", LCount(&array));

	if (LFirst(&array, &ppos))
	{
		show(ppos);

		while (LNext(&array, &ppos))
			show(ppos);
	}
	printf("\n");

	compPos.x = 2;
	compPos.y = 0;


	if (LFirst(&array, &ppos))
	{
		if (compare(ppos, &compPos) == X_MATCH)
		{
			ppos = LRemove(&array);
			free(ppos);
		}

		while (LNext(&array, &ppos))
		{
			if (compare(ppos, &compPos) == X_MATCH)
			{
				ppos = LRemove(&array);
				free(ppos);
			}
		}
	}

	printf("현재 데이터의 수: %d \n", LCount(&array));

	size_t i;
	for (i = 0; i < array.length; ++i)
	{
		show(array.arr[i]);
	}
	printf("\n");

	return 0;
}
