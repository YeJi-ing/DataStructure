// input: 1. �迭�� �� �� �ּ�
//		  2. ���� �ٲ��� �ϴ� index 1
//		  3. ���� �ٲ��� �ϴ� index 2

void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

	return;
}