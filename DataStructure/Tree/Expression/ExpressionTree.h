#ifndef EXPRESSION_TREE
#define EXPRESSION_TREE

#include "../BinaryTree.h"

BTreeNode* MakeExpTree(char exp[]);
int EvaluateExpTree(BTreeNode* bt);

void ShowPrefixTypeExp(BTreeNode* bt);
void ShowInfixTypeExp(BTreeNode* bt);
void ShowPostfixTypeExp(BTreeNode* bt);

#endif // !EXPRESSION_TREE
