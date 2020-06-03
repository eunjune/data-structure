#ifndef ARRAY_LIST
#define ARRAY_LIST
enum { MAX_LEN = 8};
enum { INVALID_INDEX = -1};

typedef struct ArrayList
{
	int arr[MAX_LEN];
	size_t length;
} ArrayList;

void init(ArrayList* arrayList);
void insert(ArrayList* arrayList, size_t index, int data);
void removeData(ArrayList* arrayList, size_t index);
size_t findIndex(ArrayList* arrayList, int n);
void printArrayList(ArrayList* arrayList);

#endif