// input: 1. 배열의 맨 앞 주소 
//		  2. 배열의 크기
// output: 배열을 오름차순으로 정렬

///*
void insertion_sort(int* arr, int last_idx)
{
	int i;
	for (i = 1; i < last_idx; i++)
	{
		int j = i;

		while ((j - 1) >= 0 && arr[j - 1] > arr[j])
		{
			swap(arr, j - 1, j);
			j--;
		}

		printALL(arr, last_idx); //단계별 출력
	}

	return;
}
//s*/
