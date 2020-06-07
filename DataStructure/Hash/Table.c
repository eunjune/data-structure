#include <stdio.h>
#include "Table.h"

void TBLInit(Table* pt, HashFunc* f)
{
	size_t i;

	for (i = 0; i < MAX_TBL; ++i)
	{
		pt->tbl[i].status = EMPTY;
	}

	pt->hf = f;
}

void TBLInsert(Table* pt, Key k, Value v)
{
	int hashValue = pt->hf(k);

	pt->tbl[hashValue].key = k;
	pt->tbl[hashValue].val = v;
	pt->tbl[hashValue].status = INUSE;
}

Value TBLDelete(Table* pt, Key k)
{
	int hashValue = pt->hf(k);

	if (pt->tbl[hashValue].status != INUSE)
	{
		return NULL;
	}

	pt->tbl[hashValue].status = DELETED;

	return pt->tbl[hashValue].val;
}

Value TBLSearch(Table* pt, Key k)
{
	int hashValue = pt->hf(k);

	return pt->tbl[hashValue].status != INUSE ? NULL : pt->tbl[hashValue].val;
}