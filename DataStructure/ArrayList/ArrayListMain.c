// DataStructure.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include "ArrayList.h"

int main()
{
	Array array;
	int data;
	
	ListInit(&array);
	
	LInsert(&array, 11);
	LInsert(&array, 11);
	LInsert(&array, 22);
	LInsert(&array, 22);
	LInsert(&array, 33);

	printf("현재 데이터 수 : %d \n", LCount(&array));

	if (LFirst(&array, &data))
	{
		printf("%d ", data);

		while (LNext(&array, &data))
		{
			printf("%d ", data);
		}
		printf("\n\n");
	}

	printf("현재 데이터의 수: %d \n", LCount(&array));

	if (LFirst(&array, &data))
	{
		printf("%d ", data);

		while (LNext(&array, &data))
		{
			printf("%d ", data);
		}
	}
	printf("\n\n");

	return 0;
}
