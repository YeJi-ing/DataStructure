#include "main.h"
#define arr_len 5

void main(void)
{
	int data[arr_len];
	int num;

	for (int i = 0; i < arr_len; i++)
	{
		scanf_s("%d", &data[i]);
	}


	quick_sort(data, 0, 1, arr_len - 1);

	printALL(data, arr_len);
}
