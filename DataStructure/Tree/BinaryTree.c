#include <stdio.h>
#include <assert.h>
#include "BinaryTree.h"

BTreeNode* MakeBTreeNode(void)
{
	BTreeNode* node = (BTreeNode*)malloc(sizeof(BTreeNode));
	node->left = NULL;
	node->right = NULL;
	return node;
}

BTData GetData(BTreeNode* bt)
{
	return bt->data;
}

void SetData(BTreeNode* bt, BTData data)
{
	bt->data = data;
}

BTreeNode* GetLeftSubTree(BTreeNode* bt)
{
	return bt->left;
}

BTreeNode* GetRightSubTree(BTreeNode* bt)
{
	return bt->right;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->left != NULL)
	{
		free(main->left);
	}

	main->left = sub;
}

void MakeRightSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->right != NULL)
	{
		free(main->right);
	}
	main->right = sub;
}

void PreorderTraverse(BTreeNode* bt)
{
	if (bt == NULL)
	{
		return;
	}

	printf("%d \n", bt->data);
	PreorderTraverse(bt->left);
	PreorderTraverse(bt->right);
}

void InorderTraverse(BTreeNode* bt)
{
	if (bt == NULL)
	{
		return;
	}

	InorderTraverse(bt->left);
	printf("%d \n", bt->data);
	InorderTraverse(bt->right);
}

void PostorderTraverse(BTreeNode* bt)
{
	if (bt == NULL)
	{
		return;
	}

	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	printf("%d \n", bt->data);
}