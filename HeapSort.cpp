//Heap Sort
//O(N * LogN)

#include <iostream>

int heap[10] = {6,2,8,3,10,5,1,7,9,4};

//赛 积己 舅绊府硫  
void Heapify()
{
	for(int i = 0; i < 10; i++)
	{
		int child = i;
		do{
			int parent = (child - 1) / 2;
			if(heap[child] > heap[parent])
			{
				int temp = heap[child];
				heap[child] = heap[parent];
				heap[parent] = temp;
			}
			child = parent;
		} while(child != 0);
	}
}
void HeapSort()
{
	for(int i = 10 - 1; i >= 0; i--)
	{
		int temp = heap[0];  
		heap[0] = heap[i];
		heap[i] = temp;
		
		int parent = 0;
		int child = 1;
		do{
			child = parent * 2 + 1;
			if(child < i - 1 && heap[child] < heap[child + 1]) child++;
			if(child < i && heap[child] > heap[parent])
			{
				temp = heap[child];
				heap[child] = heap[parent];
				heap[parent] = temp;
			}
			parent = child;
		} while(child < i);
	}
}

int main(void)
{
	Heapify();
	HeapSort();
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",heap[i]);
		
	}
	return 0;
}







