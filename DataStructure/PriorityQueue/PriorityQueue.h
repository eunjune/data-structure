#ifndef PRIORITY_QUEUE
#define PRIORITY_QUEUE

#include "UsefulHeap.h"

typedef Heap PQueue;
typedef HData PQData;

void PQueueInit(PQueue* ppq, PriorityComp pc);
int PQIsEmpty(PQueue* ppq);

void PEnqueue(PQueue* ppq, PQData data);
PQData PDequeue(PQueue* ppa);

#endif // !PRIORITY_QUEUE
