#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

#include "../Tree//BinaryTree.h"

typedef BTData BSTData;

void BSTMakeAndInit(BTreeNode** pRoot);

BSTData BSTGetNodeData(BTreeNode* bst);

void BSTInsert(BTreeNode** pRoot, BSTData data);

BTreeNode* BSTSearch(BTreeNode* bst, BSTData target);

BTreeNode* BSTRemove(BTreeNode** pRoot, BSTData target);

void BSTShowAll(BTreeNode* bst);

#endif // !BINARY_SEARCH_TREE
