#include <stdio.h>
#include "LinkedList.h"

int compare(int d1, int d2)
{
	return d1 < d2;
}

int main(void)
{
	// List�� ���� �� �ʱ�ȭ /////////////////////////////
	List list;
	int data;
	ListInit(&list);

	SetSortRule(&list, compare);

	// 5���� ������ ���� /////////////////////////////
	LInsert(&list, 11);  
	LInsert(&list, 11);
	LInsert(&list, 22);  
	LInsert(&list, 22);
	LInsert(&list, 33);


	// ����� �������� ��ü ��� /////////////////////////
	printf("���� �������� ��: %d \n", LCount(&list));

	if (LFirst(&list, &data))    // ù ��° ������ ��ȸ
	{
		printf("%d ", data);

		while (LNext(&list, &data))    // �� ��° ������ ������ ��ȸ
			printf("%d ", data);
	}
	printf("\n\n");

	// ���� 22�� �˻��Ͽ� ��� ���� //////////////////////////
	if (LFirst(&list, &data))
	{
		if (data == 22)
			LRemove(&list);

		while (LNext(&list, &data))
		{
			if (data == 22)
				LRemove(&list);
		}
	}

	// ���� �� �����ִ� ������ ��ü ��� ////////////////////////
	printf("���� �������� ��: %d \n", LCount(&list));

	if (LFirst(&list, &data))
	{
		printf("%d ", data);

		while (LNext(&list, &data))
			printf("%d ", data);
	}
	printf("\n\n");
	return 0;
}