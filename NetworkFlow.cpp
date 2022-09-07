//Network Flow(= Edmond-Krap Algorithm)

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define MAX 100
#define INF 1000000000
using namespace std;
int n = 6;
int MaxFlow;
int Capacity[MAX][MAX];
int Flow[MAX][MAX];
int check[MAX];
vector<int> a[MAX];

void BFS(int start,int end)
{
	while(1)
	{
		fill(check,check + MAX, -1);
		queue<int> q;
		q.push(start);
		while(!q.empty())
		{
			int x = q.front();
			q.pop();
			for(int i = 0; i < a[x].size(); i++)
			{
				int y = a[x][i];
				if(Capacity[x][y] - Flow[x][y] > 0 && check[y] == -1)
				{
					q.push(y);
					check[y] = x;
					if(y == end) break;
				}
			}
		}
		if(check[end] == -1) break;
		int flow = INF;
		for(int i = end; i != start; i = check[i])
		{
			flow = min(flow,Capacity[check[i]][i] - Flow[check[i]][i]);
		}
		for(int i = end; i != start; i = check[i])
		{
			Flow[check[i]][i] += flow;
			Flow[i][check[i]] -= flow;
		}
		MaxFlow += flow;
	}
}

int main(void)
{
	a[1].push_back(2);
	a[2].push_back(1);
	Capacity[1][2] = 12;
	
	a[1].push_back(4);
	a[4].push_back(1);
	Capacity[1][4] = 11;
	
	a[2].push_back(3);
	a[3].push_back(2);
	Capacity[2][3] = 6;
	
	a[2].push_back(4);
	a[4].push_back(2);
	Capacity[2][4] = 3;
	
	a[2].push_back(5);
	a[5].push_back(2);
	Capacity[2][5] = 5;
	
	a[2].push_back(6);
	a[6].push_back(2);
	Capacity[2][6] = 9;
	
	a[4].push_back(5);
	a[5].push_back(4);
	Capacity[4][5] = 9;
	
	a[5].push_back(3);
	a[3].push_back(5);
	Capacity[5][3] = 3;
	
	a[5].push_back(6);
	a[6].push_back(5);
	Capacity[5][6] = 4;
	
	a[3].push_back(6);
	a[6].push_back(3);
	Capacity[3][6] = 8;
	
	BFS(1,6);
	
	printf("%d ",MaxFlow);
	
	return 0;
}























