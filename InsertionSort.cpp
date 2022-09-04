//Insertion Sort
//O(N * N)

#include <iostream>

int arr[10] = {5,8,3,6,9,1,2,4,7,10};

void InsertionSort()
{
	for(int i = 0; i < 9; i++)
	{
		int j = i;
		while(j >= 0 && arr[j] > arr[j + 1])
		{
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
			j--;
		}
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
}

int main(void)
{
	InsertionSort();
	return 0;
}

 
