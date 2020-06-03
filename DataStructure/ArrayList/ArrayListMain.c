// DataStructure.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include "ArrayList.h"

int main()
{
	ArrayList list;

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
	printArrayList(&list);

	return 0;
}
