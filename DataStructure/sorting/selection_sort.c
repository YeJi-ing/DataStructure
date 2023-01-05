// input: 1. 배열의 맨 앞 주소 
//		  2. 배열의 크기
// output: 배열을 오름차순으로 정렬

/*
int find_smallest(int* arr, int start_idx, int size)
{
	int smallest_idx = start_idx;  // return할 값
	int smallest = arr[start_idx]; // if로 비교할 값

	int i;
	for (i = start_idx; i < size; i++)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
			smallest_idx = i;
		}
	}

	return smallest_idx;
}

void selection_sort(int* arr, int size)
{
	int i, j;
	for (i = 0; i < size; i++)
	{
		j = find_smallest(arr, i, size);
		swap(arr, i, j);
		printALL(arr, size); // 단계별 출력
	}
}
*/