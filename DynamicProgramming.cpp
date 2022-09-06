//Dynamic Programming(DP)
#include <iostream>
#define MAX 100
using namespace std;

int dp[MAX];

int Fibonacchi(int x)
{
	if(x == 1) return 1;
	if(x == 2) return 1;
	if(dp[x]) return dp[x]; 
	return dp[x] = Fibonacchi(x - 1) + Fibonacchi(x - 2);
}

int main(void)
{
	printf("%d",Fibonacchi(10));
	return 0;
}
