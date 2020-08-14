// DataStructure.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include "LinkedList.h"

int main()
{
	List list;
	Point compPos;
	Point* ppos;

	ListInit(&list);

	ppos = (Point*)malloc(sizeof(Point));
	set(ppos, 2, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	set(ppos, 2, 2);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	set(ppos, 3, 1);
	LInsert(&list, ppos);

	ppos = (Point*)malloc(sizeof(Point));
	set(ppos, 3, 2);
	LInsert(&list, ppos);

	printf("현재 데이터의 수: %d \n", LCount(&list));

	if (LFirst(&list, &ppos))
	{
		show(ppos);

		while (LNext(&list, &ppos))
			show(ppos);
	}
	printf("\n");

	compPos.x = 2;
	compPos.y = 0;


	if (LFirst(&list, &ppos))
	{
		if (compare(ppos, &compPos) == X_MATCH)
		{
			ppos = LRemove(&list);
			free(ppos);
		}

		while (LNext(&list, &ppos))
		{
			if (compare(ppos, &compPos) == X_MATCH)
			{
				ppos = LRemove(&list);
				free(ppos);
			}
		}
	}

	printf("현재 데이터의 수: %d \n", LCount(&list));

	Node* cur = list.head;
	while (cur->next != NULL)
	{
		show(cur->data);
	}

	printf("\n");

	return 0;
}
