// input: 1. 배열의 맨 앞 주소
//		  2. 값이 바뀌어야 하는 index 1
//		  3. 값이 바뀌어야 하는 index 2

void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

	return;
}