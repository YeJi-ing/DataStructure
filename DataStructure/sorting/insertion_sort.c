// input: 1. �迭�� �� �� �ּ� 
//		  2. �迭�� ũ��
// output: �迭�� ������������ ����

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

		printALL(arr, last_idx); //�ܰ躰 ���
	}

	return;
}
//s*/
