#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node* next;
} Node;

int main(void)
{
	Node* dummy = (Node*)malloc(sizeof(Node));
	Node* head = dummy;
	Node* tail = dummy;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	while (1)
	{
		printf("자연수 입력: ");
		scanf_s("%d", &readData);
		if (readData < 1)
			break;

		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		tail->next = newNode;
		tail = newNode;

	}

	printf("\n");

	printf("입력 받은 데이터의 전체출력! \n");
	if (head == tail)
	{
		printf("지정된자연수가 존재하지 않습니다.\n");
	}
	else
	{
		cur = head;

		while (cur->next != NULL)
		{
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n");

	if (head == tail)
	{
		return 0;
	}
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;

		while (delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d를 삭제합니다 \n", delNode->data);
			free(delNode);
		}
	}


	return 0;
}