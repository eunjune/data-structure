#include <stdio.h>
#include <assert.h>
#include "ArrayList.h"

void init(ArrayList* arrayList)
{
	arrayList->length = 0;
}

void insert(ArrayList* arrayList, size_t index, int data)
{
	size_t i;

	assert(index <= arrayList->length);
	assert(arrayList->length < MAX_LEN);

	for (i = arrayList->length; i > index; --i)
	{
		arrayList->arr[i] = arrayList->arr[i - 1];
	}

	arrayList->arr[index] = data;
	++arrayList->length;
}

void removeData(ArrayList* arrayList, size_t index)
{
	size_t i;

	assert(index < arrayList->length);

	--arrayList->length;
	for (i = index; i < arrayList->length; ++i)
	{
		arrayList->arr[i] = arrayList->arr[i + 1];
	}
}

size_t findIndex(ArrayList* arrayList, int n)
{
	size_t i;

	for (i = 0; i < arrayList->length; ++i)
	{
		if (arrayList->arr[i] == n)
		{
			return i;
		}
	}

	return INVALID_INDEX;
}

void printArrayList(ArrayList* arrayList)
{
	size_t i;

	for (i = 0; i < arrayList->length; ++i)
	{
		printf("%d ", arrayList->arr[i]);
	}
	printf("\n");
}