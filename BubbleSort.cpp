//Bouble Sort
#include <iostream>

int arr[10] = {5,9,3,4,6,8,1,7,2,10};

void BubbleSort()
{
	for(int i = 0; i < 10; i++)
	{
		//for(int j = 0; j < 9 - i; i++)
		for(int j = 0; j < 9; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
}

int main(void)
{
	BubbleSort();
	
	return 0;
}

