//Selection Sort
#include <iostream>

int arr[10] = {5,9,8,6,2,3,7,1,10,4};
int index,temp;

void SelectionSort()
{
	for(int i = 0; i < 10; i++)
	{
		int min = 1000;
		
		for(int j = i; j < 10; j++)
		{
			if(min > arr[j])
			{
				min = arr[j];
				index = j;
			}
		}
		
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;	
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
}

int main(void)
{
	SelectionSort();
	return 0;
}
