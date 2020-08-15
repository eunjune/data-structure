#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CircleLinkedList.h"

Employee* WhosNightDuty(List* list, char* name, int day)
{
	Employee* data;
	int i;

	LFirst(list, &data);

	if (strcmp(data->name, name))
	{
		for (i = 1; i < LCount(&list); ++i)
		{
			LNext(list, &data);

			if (strcmp(data->name, name) == 0)
			{
				break;
			}

		}
	}

	for (i = 0; i < day; ++i)
	{
		LNext(list, &data);
	}

	return data;

}

void ShowEmployeeInfo(Employee* employee)
{
	printf("Employee name : %s \n", employee->name);
	printf("Employee name : %d \n", employee->empNum);
}

int main(void)
{
	List list;

	ListInit(&list);

	Employee* pemp;
	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 11111;
	strcpy_s(pemp->name,sizeof(pemp->name) ,"Terry");
	LInsert(&list, pemp);

	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 22222;
	strcpy_s(pemp->name, sizeof(pemp->name), "Jery");
	LInsert(&list, pemp);

	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 33333;
	strcpy_s(pemp->name, sizeof(pemp->name), "Hary");
	LInsert(&list, pemp);

	pemp = (Employee*)malloc(sizeof(Employee));
	pemp->empNum = 44444;
	strcpy_s(pemp->name,sizeof(pemp->name) , "Sunny");
	LInsert(&list, pemp);

	pemp = WhosNightDuty(&list, "Tery", 3);
	ShowEmployeeInfo(pemp);

	pemp = WhosNightDuty(&list, "Sunny", 15);
	ShowEmployeeInfo(pemp);


	if (LFirst(&list, &pemp))
	{
		LRemove(&list);

		while (LNext(&list, &pemp))
		{
			LRemove(&list);
		}
	}

	return 0;
}

