// EX) quick_sort(data, 0, 1, arr_len - 1);

void quick_sort(int* arr, int pivot_idx, int left_idx, int right_idx)
{
	int left = left_idx;
	int right = right_idx;

	while (left < right)
	{
		while (arr[pivot_idx] >= arr[left] && left <= right_idx)
		{
			left = left + 1;
		}
		while (arr[pivot_idx] <= arr[right] && right >= left_idx)
		{
			right = right - 1;
		}

		if (right < left)
		{
			swap(arr, pivot_idx, right);
			quick_sort(arr, pivot_idx, pivot_idx + 1, right);
			quick_sort(arr, right + 1, right + 2, right_idx);
		}
		else
		{
			swap(arr, left, right);
		}
	}
}
