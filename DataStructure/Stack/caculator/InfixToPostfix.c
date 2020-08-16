#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "InfixToPostfix.h"
#include "../ListStack.h"

int GetOpPrec(char op)
{
	switch (op)
	{
		case '*':
		case '/':
			return 5;
		case '+':
		case '-':
			return 3;
		default:
			return 1;
	}

	return -1;
}

int WhoPrecOp(char op1, char op2)
{
	int op1Prec = GetOpPrec(op1);
	int op2Prec = GetOpPrec(op2);

	if (op1Prec > op2Prec)
	{
		return 1;
	}
	else if (op1Prec < op2Prec)
	{
		return -1;
	}
	else 
	{
		return 0;
	}
}

void ConvToRPNExp(char exp[])
{
	Stack stack;
	int expLen = strlen(exp);
	char* convExp = (char*)malloc(expLen + 1);

	int i, idx=0;
	char tok, popOp;

	StackInit(&stack);
	memset(convExp, 0, sizeof(char) * expLen + 1);

	for (i = 0; i < expLen; ++i)
	{
		tok = exp[i];
		if (isdigit(tok))
		{
			convExp[idx++] = exp[i];
		}
		else
		{
			switch (tok)
			{
				case '(':
					SPush(&stack, tok);
					break;
				case ')':
					while (1)
					{
						popOp = SPop(&stack);
						if (popOp == '(')
						{
							break;
						}
						convExp[idx++] = popOp;
					}
					break;
				case '+':
				case '-':
				case '/':
				case '*':
					while (!SIsEmpty(&stack) && WhoPrecOp(SPeek(&stack), tok) >= 0)
					{
						convExp[idx++] = SPop(&stack);
					}
					SPush(&stack, tok);
					break;

				default:
					break;
			}
		}
	}

	while (!SIsEmpty(&stack))
		convExp[idx++] = SPop(&stack);

	strcpy_s(exp, sizeof(char)*expLen+1, convExp);
	free(convExp);
}
