#include <stdio.h>
#include <assert.h>
#include "ArrayList.h"

void insert_at(size_t index, int n)
{
	size_t i;

	assert(index <= length);
	assert(length < MAX_NUMS);

	for (i = length; i > index; --i)
	{
		nums[i] = nums[i - 1];
	}

	nums[index] = n;
	++length;
}

void remove_at(size_t index)
{
	size_t i;

	assert(index < length);

	--length;
	for (i = index; i < length; ++i)
	{
		nums[i] = nums[i + 1];
	}
}

size_t find_index(int n)
{
	size_t i;

	for (i = 0; i < length; ++i)
	{
		if (nums[i] == n)
		{
			return i;
		}
	}

	return INVALID_INDEX;
}

void print_array_list()
{
	size_t i;

	for (i = 0; i < length; ++i)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
}