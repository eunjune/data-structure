#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NameCard.h"

NameCard* MakeNameCard(char* name, char* phone)
{
	NameCard* result = (NameCard*)malloc(sizeof(NameCard));
	strcpy_s(result->name, sizeof(result->name), name);
	strcpy_s(result->phone, sizeof(result->phone), phone);

	return result;
}

void ShowNameCardInfo(NameCard* pcard)
{
	printf("name : %s\n", pcard->name);
	printf("phone : %s\n", pcard->phone);

	printf("");

}

int NameCompare(NameCard* pcard, char* name)
{
	return strcmp(pcard->name, name);
}

void ChangePhoneNum(NameCard* pcard, char* phone)
{
	strcpy_s(pcard->phone, sizeof(pcard->phone), phone);
}