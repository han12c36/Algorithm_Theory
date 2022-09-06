//Breadth First Search
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> a[8];
int check[7];

void BFS(int start)
{
	queue<int> q;
	q.push(start);
	check[start] = true;
	while(!q.empty())
	{
		int x = q.front();
		q.pop();
		printf("%d ",x);
		for(int i = 0; i < a[x].size(); i++)
		{
			int y = a[x][i];
			if(!check[y])
			{
				q.push(y);
				check[y] = true;
			}
		}
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
	
	BFS(1);
	
	return 0;
}
