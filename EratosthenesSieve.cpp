//EratosthenesSieve 
#include <iostream>
//#include <math.h>
using namespace std;

int num = 100000;
int a[100001];

void isPrimeNumberSieve()
{
	for(int i = 2; i <= num; i++)
	{
		a[i] = i;
	}
	for(int i = 2; i <= num; i++)
	{
		if(a[i] == 0) continue;
		for(int j = i + i; j < num; j += i)
		{
			a[j] = 0;
		}
	}
	for(int i = 2; i <= num; i++)
	{
		if(a[i] != 0) printf("%d ", a[i]);
	}
}

int main(void)
{
	isPrimeNumberSieve();
	return 0;
}

//O(N)
//bool isPrimeNumber(int x)
//{
//	for(int i = 2; i < x; i++)
//	{
//		if(x % i == 0) return false;
//	}
//	return true;
//}

//O(N^1/2)
//bool isPrimeNumber(int x)
//{
//	int end = (int)sqrt(x);
//	for(int i = 2; i < end; i++)
//	{
//		if(x % i == 0) return false;
//	}
//	return true;
//}
