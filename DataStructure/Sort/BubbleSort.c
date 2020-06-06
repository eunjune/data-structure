#include <stdio.h>

void BubbleSort(int arr[], int n)
{
	size_t i;
	size_t j;
	int tmp;

	for (i = n; i > 0; --i)
	{
		for (j = 0; j < i - 1; ++j)
		{
			if (arr[j] >= arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(void)
{
	int arr[4] = { 3,2,4,1 };
	int i;

	BubbleSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 4; ++i)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}