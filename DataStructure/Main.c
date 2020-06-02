// DataStructure.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include "ArrayList.h"

int main()
{
	insert_at(0, 7);
	insert_at(1, 6);
	insert_at(2, 3);
	insert_at(3, 1);
	insert_at(4, 9);
	insert_at(5, 23);
	insert_at(2, 10);

	print_array_list();

	printf("%u\n",(unsigned int)find_index(10));
	
	remove_at(2);

	print_array_list();

	printf("%u\n", (unsigned int)find_index(10));

	return 0;
}
