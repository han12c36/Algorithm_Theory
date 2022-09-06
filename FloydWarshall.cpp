//Floyd Warchall
#include <iostream>
#define INF 1000000000

int n = 4;
int a[4][4] = {
	{0,5,INF,8},
	{7,0,9,INF},
	{2,INF,0,4},
	{INF,INF,3,0},
};

void FloydWarshall()
{
	int dis[n][n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			dis[i][j] = a[i][j];
		}
	}
	//k : path
	//i : start
	//j : end
	for(int k = 0; k < n; k++)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(dis[i][k] + dis[k][j] < dis[i][j])
				{
					dis[i][j] = dis[i][k] + dis[k][j];
				}
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%3d",dis[i][j]);
		}
		printf("\n");
	}
	
}

int main(void)
{
	FloydWarshall();
	
	return 0;
}
