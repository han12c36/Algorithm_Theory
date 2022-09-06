//Kruskal Algorithm
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int GetParent(int parent[],int x)
{
	if(parent[x] == x) return x;
	return parent[x] = GetParent(parent,parent[x]);
}

void UnionParent(int parent[],int a, int b)
{
	a = GetParent(parent,a);
	b = GetParent(parent,b);
	if(a < b) parent[b] = a;
	else parent[a] = b;
}

int FindParent(int parent[],int a, int b)
{
	a = GetParent(parent,a);
	b = GetParent(parent,b);
	if(a == b) return 1;
	else return 0;
}

class Edge{
public : 
	int node[2];
	int distance;
	Edge(int start,int next,int distance)
	{
		this->node[0] = start;
		this->node[1] = next;
		this->distance = distance;
	}
	bool operator <(Edge &edge)
	{
		return this->distance < edge.distance;
	}
};

vector<Edge> a;

int main(void)
{
	int n = 7;
	int m = 11;
	
	a.push_back(Edge(1,7,12));
	a.push_back(Edge(1,4,28));
	a.push_back(Edge(1,2,67));
	a.push_back(Edge(1,5,17));
	a.push_back(Edge(2,4,24));
	a.push_back(Edge(2,5,62));
	a.push_back(Edge(3,5,20));
	a.push_back(Edge(3,6,37));
	a.push_back(Edge(4,7,13));
	a.push_back(Edge(5,6,45));
	a.push_back(Edge(5,7,73));
	
	sort(a.begin(),a.end());
	
	int parent[n];
	for(int i = 0; i < n; i++)
	{
		parent[i] = i;
	}
	
	int sum = 0;
	for(int i = 0; i < a.size(); i++)
	{
		if(!FindParent(parent,a[i].node[0]-1,a[i].node[1]-1))
		{
			sum += a[i].distance;
			UnionParent(parent,a[i].node[0]-1,a[i].node[1]-1);
		}
	}
	
	printf("%d ",sum);
	
	return 0;
}

