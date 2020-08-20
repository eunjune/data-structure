#include <stdio.h>
#include "ExpressionTree.h"

int main(void)
{
	char exp[] = "12+7*";
	BTreeNode* tree = MakeExpTree(exp);

	printf("���� ǥ����� ���� : ");
	ShowPrefixTypeExp(tree);
	printf("\n");

	printf("���� ǥ����� ���� : ");
	ShowInfixTypeExp(tree);
	printf("\n");

	printf("���� ǥ����� ���� : ");
	ShowPostfixTypeExp(tree);
	printf("\n");

	printf("������ ��� : %d \n", EvaluateExpTree(tree));

	return 0;
}