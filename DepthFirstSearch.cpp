//Depth First Search(DFS)
#include <iostream>
#include <vector>
using namespace std;

bool check[7];
vector<int> a[8];

void DFS(int start)
{
	if(check[start]) return;
	check[start] = true;
	printf("%d ",start);
	for(int i = 0; i < a[start].size(); i++)
	{
		int y = a[start][i];
		DFS(y);
	}
}

int main(void)
{
	a[1].push_back(2);
	a[2].push_back(1);
	
	a[1].push_back(3);
	a[3].push_back(1);
	
	a[2].push_back(3);
	a[3].push_back(2);
	
	a[2].push_back(4);
	a[4].push_back(2);
	
	a[2].push_back(5);
	a[5].push_back(2);
	
	a[4].push_back(5);
	a[5].push_back(4);
	
	a[3].push_back(6);
	a[6].push_back(3);
	
	a[3].push_back(7);
	a[7].push_back(3);
	
	a[6].push_back(7);
	a[7].push_back(6);
	
	DFS(1);
	
	return 0;
}
