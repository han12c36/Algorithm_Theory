#include <iostream>
#include <algorithm>
using namespace std;

int arr[10] = {5,3,4,6,2,9,1,8,7,10};

bool compare(int a,int b)
{
	return a < b;
}

int main(void)
{
	sort(arr,arr + 10,compare);
	for(int i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}


