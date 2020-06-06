#include <stdio.h>

void SelectioSort(int arr[], int n)
{
	size_t i;
	size_t j;
	int tmp;
	int select;

	for (i = 0; i < n; ++i)
	{
		select = i;
		for (j = i + 1; j < n; ++j)
		{
			if (select == -1 || arr[select] > arr[j])
			{
				select = j;
			}
		}

		tmp = arr[select];
		arr[select] = arr[i];
		arr[i] = tmp;
	}
}

int main(void)
{
	int arr[4] = { 3,2,4,1 };
	int i;

	SelectioSort(arr, sizeof(arr) / sizeof(int));

	for (i = 0; i < 4; ++i)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}