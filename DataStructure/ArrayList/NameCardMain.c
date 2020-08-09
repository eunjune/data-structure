#include <stdio.h>
#include "ArrayList.h"

int main()
{
	Array array;
	ListInit(&array);

	LInsert(&array,MakeNameCard("test1", "010-1111-1111"));
	LInsert(&array,MakeNameCard("test2", "010-2222-2222"));
	LInsert(&array,MakeNameCard("test3", "010-3333-3333"));


	LData data;
	if (LFirst(&array, &data))
	{
		if (!NameCompare(data, "test2"))
		{
			ShowNameCardInfo(&data);
		}

		while (LNext(&array, &data))
		{
			if (!NameCompare(data, "test2"))
			{
				ShowNameCardInfo(data);
				break;
			}
		}
	}

	if (LFirst(&array, &data))
	{
		if (!NameCompare(data, "test1"))
		{
			ChangePhoneNum(data, "010-7574-3466");
		}

		while (LNext(&array, &data))
		{
			if (!NameCompare(data, "test2"))
			{
				ChangePhoneNum(data, "010-7574-3466");
				break;
			}
		}
	}

	if (LFirst(&array, &data))
	{
		if (!NameCompare(data, "test3"))
		{
			data = LRemove(&array);
			free(data);
		}

		while (LNext(&array, &data))
		{
			if (!NameCompare(data, "test2"))
			{
				LRemove(&array);
				free(data);
				break;
			}
		}
	}

	printf("√÷¡æ\n");
	if (LFirst(&array, &data))
	{
		ShowNameCardInfo(data);

		while (LNext(&array, &data))
		{
			ShowNameCardInfo(data);
		}
	}

	return 0;
}