#include "SimpleHeap.h"

void HeapInit(Heap* ph)
{
	ph->numOfData = 0;
}

int HIsEmpty(Heap* ph)
{
	if (ph->numOfData == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int GetParentIDX(int idx)
{
	return idx / 2;
}

int GetLChildIDX(int idx)
{
	return idx * 2;
}

int GetRChildIDX(int idx)
{
	return GetLChildIDX(idx) + 1;
}

int GetHiPriChildIDX(Heap* ph, int idx)
{
	if (GetLChildIDX(idx) > ph->numOfData)
	{
		return 0;
	}

	if (GetLChildIDX(idx) == ph->numOfData)
	{
		return GetLChildIDX(idx);
	}

	if (ph->heapArr[GetLChildIDX(idx)].prValue > ph->heapArr[GetRChildIDX(idx)].prValue)
	{
		return GetRChildIDX(idx);
	}
	else
	{
		return GetLChildIDX(idx);
	}
}

void HInsert(Heap* ph, HData data, Priority pr)
{
	int idx = ph->numOfData + 1;
	HeapElem newHeapElem = { pr, data };

	while (idx != 1)
	{
		if (ph->heapArr[GetParentIDX(idx)].prValue <= newHeapElem.prValue)
		{
			break;
		}

		ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
		idx = GetParentIDX(idx);
	}

	ph->heapArr[idx] = newHeapElem;
	ph->numOfData++;
	
}

HData HDelete(Heap* ph)
{
	HData retData = ph->heapArr[1].data;
	HeapElem lastElem = ph->heapArr[ph->numOfData];

	int parentIdx = 1;
	int childIdx;

	while (childIdx = GetHiPriChildIDX(ph, parentIdx))
	{
		if (lastElem.prValue <= ph->heapArr[childIdx].prValue)
		{
			break;
		}

		ph->heapArr[parentIdx] = ph->heapArr[childIdx];
		parentIdx = childIdx;
	}

	ph->heapArr[parentIdx] = lastElem;
	ph->numOfData--;

	return retData;
}
