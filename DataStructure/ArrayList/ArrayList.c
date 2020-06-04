#include <stdio.h>
#include <assert.h>
#include "ArrayList.h"

void ListInit(Array* array)
{
	array->length = 0;
	array->curPosition = -1;
}

void LInsert(Array* array, LData data)
{
	assert(array->length < LIST_LEN);

	array->arr[array->length++] = data;
}


int LFirst(Array* array, LData* pdata)
{
	if (array->length == 0)
	{
		return FALSE;
	}

	array->curPosition = 0;
	*pdata = array->arr[0];
	return TRUE;
}

int LNext(Array* array, LData* pdata)
{
	if (array->curPosition >= array->length-1)
	{
		return FALSE;
	}

	*pdata = array->arr[++array->curPosition];

	return TRUE;
}

LData LRemove(Array* array)
{
	int rpos = array->curPosition;
	LData removeData = array->arr[rpos];
	
	size_t i;

	for (i = rpos; i < array->length - 1; ++i)
	{
		array->arr[i] = array->arr[i + 1];
	}

	--array->curPosition;
	--array->length;

	return removeData;
}

int LCount(const Array* array)
{
	return array->length;
}