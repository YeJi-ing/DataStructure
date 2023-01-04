#include "main.h"
#define arr_len 5

void main(void)
{
	int data[arr_len];
	int len = arr_len + 1;

	for (int i = 0; i < arr_len; i++)
	{
		scanf_s("%d", &data[i]);
	}

	bubblesort(data, arr_len);
	
	printALL(data, arr_len);

	return;
}