//Greedy Algorithm
#include <iostream>
using namespace std;

int n;
int result;

void Greedy()
{
	result += n / 500;
	n %= 500;
	result += n / 100;
	n %= 100;
	result += n / 50;
	n %= 50;
	result += n / 10;
	n %= 10;
}

int main(void)
{
	cin >> n;
	Greedy();
	cout << result;
	
	return 0;
}
