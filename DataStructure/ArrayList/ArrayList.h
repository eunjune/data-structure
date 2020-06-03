#include "Point.h"

#ifndef ARRAY_LIST
#define ARRAY_LIST
enum { MAX_LEN = 8};
enum { INVALID_INDEX = -1};

//typedef int LData;
typedef Point* LData;

typedef struct ArrayList
{
	LData arr[MAX_LEN];
	size_t length;
} ArrayList;

void init(ArrayList* arrayList);
void insert(ArrayList* arrayList, size_t index, LData data);
void removeData(ArrayList* arrayList, size_t index);

#endif