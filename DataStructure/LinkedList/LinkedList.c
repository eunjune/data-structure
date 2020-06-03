#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void destroy(Node* head)
{
	Node* p;

	p = head;
	while (p != NULL) {
		Node* next = p->next;
		free(p);
		p = next;
	}
}

void insert_front(Node** head, int n)
{
	Node* node;

	node = malloc(sizeof(Node));
	node->data = n;

	node->next = *head;
	*head = node;
}


void remove_node(Node** head, int n)
{
	Node** pp;

	pp = head;
	while (*pp != NULL) {
		if ((*pp)->data == n) {
			Node* node = *pp;
			*pp = (*pp)->next;
			free(node);
			break;
		}

		pp = &(*pp)->next;
	}
}

Node* find_node(const Node* head, int n)
{
	Node* p;

	p = head;
	while (p != NULL) {
		if (p->data == n) {
			return p;
		}
		p = p->next;
	}

	return NULL;
}

void print_linked_list(const Node* head)
{
	Node* p;

	p = head;
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");

}
