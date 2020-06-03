// DataStructure.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include "ArrayList.h"

void printArrayList(ArrayList* list)
{
	size_t i;

	for (i = 0; i < list->length; ++i)
	{
		show(list->arr[i]);
	}
	printf("\n");
}

void removePoint(ArrayList* list, Point* comPos)
{
	size_t i;

	for (i = 0; i < list->length; ++i)
	{
		if (compare(list->arr[i], comPos) == X_MATCH)
		{
			Point* point = list->arr[i];
			removeData(list, i);
			free(point);
			break;
		} 
	}

}

int main()
{
	/*ArrayList list;

	init(&list);

	insert(&list, list.length, 11);
	insert(&list, list.length, 11);
	insert(&list, list.length, 22);
	insert(&list, list.length, 22);
	insert(&list, list.length, 33);

	printArrayList(&list);

	size_t index1 = findIndex(&list, 11);
	size_t index2 = findIndex(&list, 22);
	size_t index3 = findIndex(&list, 33);
	printf("%d\n", index1);
	printf("%d\n", index2);
	printf("%d\n", index3);

	removeData(&list, index2);
	printArrayList(&list);*/

	ArrayList list;
	Point comPos;
	Point* point;

	init(&list);

	point = (Point*)malloc(sizeof(Point));
	set(point, 2, 1);
	insert(&list, list.length, point);
	
	point = (Point*)malloc(sizeof(Point));
	set(point, 2, 2);
	insert(&list, list.length, point);

	point = (Point*)malloc(sizeof(Point));
	set(point, 3, 1);
	insert(&list, list.length, point);

	point = (Point*)malloc(sizeof(Point));
	set(point, 3, 2);
	insert(&list, list.length, point);

	printArrayList(&list);

	comPos.x = 2;
	comPos.y = 0;

	removePoint(&list, &comPos);
	printArrayList(&list);

	removePoint(&list, &comPos);
	printArrayList(&list);

	removePoint(&list, &comPos);
	printArrayList(&list);
	return 0;
}
