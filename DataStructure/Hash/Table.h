#ifndef TABLE
#define TABLE

#include "Slot.h"
#include "../LinkedList/LinkedList.h"

#define MAX_TBL 100

typedef int HashFunc(Key k);

typedef struct table
{
	List tbl[MAX_TBL];
	//Slot tbl[MAX_TBL];
	HashFunc* hf;
} Table;

void TBLInit(Table* pt, HashFunc* f);

void TBLInsert(Table* pt, Key k, Value v);

Value TBLDelete(Table* pt, Key k);

Value TBLSearch(Table* pt, Key k);

#endif // !TABLE
