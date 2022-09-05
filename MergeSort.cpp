//Merge Sort
//O(N * LogN)

#include <iostream>

int arr[10] = {5,3,6,10,1,8,2,9,4,7};
int sorted[10];

void Merge(int arr[],int Left,int Middle,int Right)
{
	int i = Left;
	int j = Middle + 1;
	int k = Left;
	
	while(i <= Middle && j <= Right)
	{
		if(arr[i] <= arr[j]) sorted[k++] = arr[i++];
		else sorted[k++] = arr[j++];
	}
	if(i > Middle)
	{
		for(int t = j; t <= Right; t++)
		{
			sorted[k++] = arr[t];
		}
	}
	else 
	{
		for(int t = i; t <= Middle; t++)
		{
			sorted[k++] = arr[t];
		}
	}
	for(int t = Left; t <= Right; t++)
	{
		arr[t] = sorted[t];
	}
}

void MergeSort(int arr[],int Left,int Right)
{
	if(Left < Right)
	{
		int Middle = (Left + Right) / 2;
		MergeSort(arr,Left,Middle);
		MergeSort(arr,Middle + 1,Right);
		Merge(arr,Left,Middle,Right);
	}
}

int main(void)
{
	MergeSort(arr,0,9);
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}




