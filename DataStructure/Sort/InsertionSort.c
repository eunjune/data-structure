#include <stdio.h>

void InsertionSort(int arr[], int n)
{
	size_t i;
	int j;

	int findIndex;
	int current;

	for (i = 1; i < n; ++i)
	{
		current = arr[i];
		for (j = i-1; j >= 0; --j)
		{
			if (arr[j] > current)
			{
				break;
			}
			arr[j + 1] = arr[j];
		}
	
		arr[j+1] = current;
	}

}

int main(void)
{
	int arr[4] = { 3,2,4,1 };
	int i;

	InsertionSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 4; ++i)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}