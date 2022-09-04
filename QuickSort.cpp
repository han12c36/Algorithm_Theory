//Quick Sort
//O(N * LogN) //O(N * N)

#include <iostream>

int arr[10] = {5,8,3,1,6,2,4,7,9,10};

void QuickSort(int* arr,int start,int end)
{
	if(start >= end) return;
	
	int pivot = start;
	int i = start + 1;
	int j = end;
	
	while(i <= j)
	{
		while(arr[i] <= arr[pivot] && i <= end) i++;
		while(arr[j] >= arr[pivot] && j > start) j--;
		if(i > j)
		{
			int temp = arr[pivot];
			arr[pivot] = arr[j];
			arr[j] = temp;
		}
		else
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	QuickSort(arr,start,j - 1);
	QuickSort(arr,j + 1, end);
}

int main(void)
{
	QuickSort(arr,0,9);
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}










