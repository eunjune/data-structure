#ifndef BINARY_TREE
#define BINARY_TREE

#define TRUE 1
#define FALSE 0

typedef int BTData;

typedef struct node
{
	BTData data;
	struct node* left;
	struct node* right;
} BTreeNode;

BTreeNode* MakeBTreeNode(void);
BTData GetData(BTreeNode* bt);
void SetData(BTreeNode* bt, BTData data);

BTreeNode* GetLeftSubTree(BTreeNode* bt);
BTreeNode* GetRightSubTree(BTreeNode* bt);


void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub);
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub);

void PreorderTraverse(BTreeNode* bt);
void InorderTraverse(BTreeNode* bt);
void PostorderTraverse(BTreeNode* bt);
#endif