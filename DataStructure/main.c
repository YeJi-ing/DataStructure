#include "main.h"
#define arr_len 5

void main(void)
{
	/* sorting
	int data[arr_len];
	int num;

	for (int i = 0; i < arr_len; i++)
	{
		scanf_s("%d", &data[i]);
	}


	quick_sort(data, 0, 1, arr_len - 1);

	printALL(data, arr_len);
	*/


	int num, data;
	scanf_s("%d", &num);
	
	struct node* new_node = 0;
	head->next = 0;
	head->prev = 0;

	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &data);
		InsertToDLL(head, i, data);
	}

	PrintDLL(head);

	return;

}
