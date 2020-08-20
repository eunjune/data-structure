#include <stdio.h>
#include "ExpressionTree.h"

int main(void)
{
	char exp[] = "12+7*";
	BTreeNode* tree = MakeExpTree(exp);

	printf("전위 표기법의 수식 : ");
	ShowPrefixTypeExp(tree);
	printf("\n");

	printf("중위 표기법의 수식 : ");
	ShowInfixTypeExp(tree);
	printf("\n");

	printf("후위 표기법의 수식 : ");
	ShowPostfixTypeExp(tree);
	printf("\n");

	printf("연산의 결과 : %d \n", EvaluateExpTree(tree));

	return 0;
}