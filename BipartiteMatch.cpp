//Bipartite Matching
#include <iostream>
#include <vector>
#define MAX 101
using namespace std;

vector<int> a[MAX];
bool check[MAX];
int match[MAX];
int n = 3;

bool DFS(int x)
{
	for(int i = 0; i < a[x].size(); i++)
	{
		int y = a[x][i];
		if(check[y]) continue;
		check[y] = true;
		if(match[y] == 0 || DFS(match[y]))
		{
			match[y] = x;
			return true;
		}
	}
	return false;
}

int main(void)
{
	a[1].push_back(1);
	a[1].push_back(2);
	a[1].push_back(3);
	a[2].push_back(1);
	a[3].push_back(2);
	
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		fill(check,check + MAX, false);
		if(DFS(i)) count++;
	}
	printf("success %d \n",count);
	for(int i = 1; i<= 100; i++)
	{
		if(match[i] != 0)
		{
			printf("%d -> %d\n",match[i],i);
		}
	}
	return 0;
	
}
