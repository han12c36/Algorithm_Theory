//Dijkstra Algorithm
//O(N * LogN)
#include <iostream>
#include <vector>
#include <queue>
#define INF 1000000000
using namespace std;

int n = 6;
vector<pair<int,int> > a[7];
int dis[7];

void Dijkstra(int start)
{
	dis[start] = 0;
	priority_queue<pair<int,int> > q;
	q.push(make_pair(start,0));
	while(!q.empty())
	{
		int current = q.top().first;
		int curdis = -q.top().second;
		q.pop();
		if(dis[current] < curdis) continue;
		for(int i = 0; i < a[current].size(); i++)
		{
			int next = a[current][i].first;
			int nextdis = curdis + a[current][i].second;
			if(nextdis < dis[next])
			{
				dis[next] = nextdis;
				q.push(make_pair(next,-nextdis));
			}
		}
	}
}

int main(void)
{
	for(int i = 1; i <= n; i++)
	{
		dis[i] = INF;
	}
	
	a[1].push_back(make_pair(2,2));
	a[1].push_back(make_pair(3,5));
	a[1].push_back(make_pair(4,1));
	
	a[2].push_back(make_pair(1,2));
	a[2].push_back(make_pair(3,3));
	a[2].push_back(make_pair(4,2));
	
	a[3].push_back(make_pair(1,5));
	a[3].push_back(make_pair(2,3));
	a[3].push_back(make_pair(4,3));
	a[3].push_back(make_pair(5,1));
	a[3].push_back(make_pair(6,5));
	
	a[4].push_back(make_pair(1,1));
	a[4].push_back(make_pair(2,2));
	a[4].push_back(make_pair(3,3));
	a[4].push_back(make_pair(5,1));
	
	a[5].push_back(make_pair(3,1));
	a[5].push_back(make_pair(4,1));
	a[5].push_back(make_pair(6,2));
	
	a[6].push_back(make_pair(3,5));
	a[6].push_back(make_pair(5,2));
	
	Dijkstra(1);
	
	for(int i = 1; i <= n; i++)
	{
		printf("%d ",dis[i]);
	}

	return 0;
}
