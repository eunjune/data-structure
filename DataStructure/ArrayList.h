#ifndef ARRAY_LIST
#define ARRAY_LIST
enum { MAX_NUMS = 8};
enum { INVALID_INDEX = -1};

int nums[MAX_NUMS];
static size_t length = 0;

void insert_at(size_t index, int n);
void remove_at(size_t index);
size_t find_index(int n);
void print_array_list();

/*
	insert_at(0, 7);
	insert_at(1, 6);
	insert_at(2, 3);
	insert_at(3, 1);
	insert_at(4, 9);
	insert_at(5, 23);
	insert_at(2, 10);

	print_array_list();

	printf("%d\n",find_index(10));

	remove_at(2);

	print_array_list();

	printf("%d\n",find_index(10));
*/
#endif