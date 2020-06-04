#ifndef DOUBLE_LINKED_LIST
#define DOUBLE_LINKED_LIST

#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct node
{
	LData data;
	struct node* next;
	struct node* prev;
} Node;

typedef struct linkedList
{
	Node* head;
	Node* cur;
	int length;
} List;

void ListInit(List* plist);

void LInsert(List* plist, LData data);

int LFirst(List* plist, LData* pdata);

int LNext(List* plist, LData* pdata);
int LPrevious(List* plist, LData* pdata);

LData LRemove(List* plist);

int LCount(const List* plist);

#endif
