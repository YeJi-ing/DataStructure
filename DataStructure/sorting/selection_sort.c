// input: 1. �迭�� �� �� �ּ� 
//		  2. �迭�� ũ��
// output: �迭�� ������������ ����

/*
int find_smallest(int* arr, int start_idx, int size)
{
	int smallest_idx = start_idx;  // return�� ��
	int smallest = arr[start_idx]; // if�� ���� ��

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
		printALL(arr, size); // �ܰ躰 ���
	}
}
*/