//Union-Find
#include <iostream>

int GetParent(int parent[], int x)
{
	if(parent[x] == x) return x;
	return parent[x] = GetParent(parent,parent[x]);
}
void UnionParent(int parent[], int a, int b)
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

int main(void)
{
	
	int parent[11];
	for(int i = 1; i <= 10; i++)
	{
		parent[i] = i;
	}
	
	UnionParent(parent,1,2);
	UnionParent(parent,2,3);
	UnionParent(parent,3,4);
	UnionParent(parent,5,6);
	UnionParent(parent,6,7);
	UnionParent(parent,7,8);
	printf("1 and 5 connected? %d\n",FindParent(parent,1,5));
	UnionParent(parent,1,5);
	printf("1 and 5 connected? %d\n",FindParent(parent,1,5));
	
	return 0;
}
