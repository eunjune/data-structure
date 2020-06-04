#ifndef CIRCLE_LINKED_LIST
#define CIRCLE_LINKED_LIST

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct node
{
	Data data;
	struct node* next;
} Node;

typedef struct circleLinkedList
{
	Node* tail;
	Node* cur;
	Node* before;
	int length;

} List;

void ListInit(List* plist);

void LInsert(List* plist, Data data);
void LInsertFront(List* plist, Data data);

int LFirst(List* plist, Data* pdata);
int LNext(List* plist, Data* pdata);

Data LRemove(List* plist);

int LCount(const List* plist);


#endif
