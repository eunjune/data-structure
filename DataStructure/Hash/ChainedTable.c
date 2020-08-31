#include <stdio.h>
#include "Table.h"

void TBLInit(Table* pt, HashFunc* f)
{
	size_t i;

	for (i = 0; i < MAX_TBL; ++i)
	{
		ListInit(&(pt->tbl[i]));
	
	}
	pt->hf = f;
}

void TBLInsert(Table* pt, Key k, Value v)
{
	int hashCode = pt->hf(k);
	Slot slot = { k, v };

	if (TBLSearch(pt, k) != NULL)
	{
		printf("키 중복 오류 발생 \n");
		return;
	}

	LInsert(&(pt->tbl[hashCode]), slot);
}

Value TBLDelete(Table* pt, Key k)
{
	int hashCode = pt->hf(k);
	Slot slot;

	if (LFirst(&(pt->tbl[hashCode]), &slot))
	{
		if (slot.key == k)
		{
			LRemove(&(pt->tbl[hashCode]));
			return slot.val;
		}

		while (LNext(&(pt->tbl[hashCode]), &slot))
		{
			if (slot.key == k)
			{
				LRemove(&(pt->tbl[hashCode]));
				return slot.val;
			}
		}
	}

	return NULL;
}

Value TBLSearch(Table* pt, Key k)
{
	int hashCode = pt->hf(k);
	Slot slot;

	if (LFirst(&pt->tbl[hashCode], &slot))
	{
		if (slot.key == k)
		{
			return slot.val;
		}

		while (LNext(&pt->tbl[hashCode], &slot))
		{
			if (slot.key == k)
			{
				return slot.val;
			}
		}
	}

	return NULL;
}