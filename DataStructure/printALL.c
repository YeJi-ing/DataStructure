// input: 1. 배열의 맨 앞 주소 
//		  2. 배열의 크기
// output: 배열을 출력

#include "main.h"

void printALL(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return;
}