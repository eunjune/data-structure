#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct node
{
	int data;
	struct node* next;
} Node;

void destroy(Node* head);
void insert_front(Node** head, int n);
void remove_node(Node** head, int n);
Node* find_node(const Node* head, int n);
void print_linked_list(const Node* head);
#endif

/*
Node* head = NULL;

	insert_front(&head, 5);
	insert_front(&head, 3);
	insert_front(&head, 2);

	print_linked_list(head);

	printf("%d\n", find_node(head,3)->data);

	remove_node(&head, 3);

	print_linked_list(head);
*/