#include <stdio.h>

void Swap(int arr[], int idx1, int idx2)
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int getMid(int arr[], int left, int right)
{
	int samples[3] = { left, (left + right) / 2, right };

	if (arr[samples[0]] > arr[samples[1]])
	{
		Swap(samples, 0, 1);
	}

	if (arr[samples[1]] > arr[samples[2]])
	{
		Swap(samples, 1, 2);
	}

	if (arr[samples[0]] > arr[samples[1]])
	{
		Swap(samples, 0, 1);
	}

	return samples[1];
}

int Partition(int arr[], int left, int right)
{

	int low = left + 1;
	int high = right;
	
	int pIdx = getMid(arr, left, right);
	int pivot = arr[pIdx];

	Swap(arr, left, pIdx);

	//int pivot = arr[left];

	printf("�ǹ�: %d \n", pivot);

	while (low <= high)
	{
		while (pivot > arr[low] && low <= right)
		{
			low++;
		}

		while (pivot < arr[high] && high >= (left+1))
		{
			high--;
		}

		if (low <= high)
		{
			Swap(arr, low, high);
		}
	}

	Swap(arr, left, high);
	return high;
}

void QuickSort(int arr[], int left, int right)
{
	if (left <= right)
	{
		int pivot = Partition(arr, left, right);

		QuickSort(arr, left, pivot-1);
		QuickSort(arr, pivot + 1, right);
	}
}

int main(void)
{
	int arr[15] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	//int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	//int arr[7] = { 3,2,4,1,7,6,5 };
	//int arr[3] = { 3,3,3 };

	int len = sizeof(arr) / sizeof(int);
	int i;

	QuickSort(arr, 0, sizeof(arr) / sizeof(int) - 1);

	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}