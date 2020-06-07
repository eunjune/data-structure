#ifndef SLOT
#define SLOT

#include "Person.h"

typedef int Key;
typedef Person* Value;

enum SlotStatus {EMPTY, DELETED, INUSE};

typedef struct slot
{
	Key key;
	Value val;
	enum SlotStatus status;
} Slot;

#endif // !SLOT
