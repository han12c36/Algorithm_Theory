//Beakjoon 1431
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<string> arr;

int GetSum(string a)
{
	int sum = 0;
	for(int i = 0; i < a.length(); i++)
	{
		if(a[i] - '0' <= 9 && a[i] - '0' >= 0)
		sum += a[i] - '0';
	}
	return sum;
}

bool compare(string a, string b)
{
	if(a.length() != b.length()) return a.length() < b.length();
	else
	{
		int sumA = GetSum(a);
		int sumB = GetSum(b);
		if(sumA != sumB) return sumA < sumB;
		else return a < b ;
	}
}

int main(void)
{
	cin >> n;
	string input;
	for(int i = 0; i < n; i++)
	{
		cin >> input;
		arr.push_back(input);
	}
	
	sort(arr.begin(),arr.end(),compare);
	
	for(int i = 0; i < n; i++)
	{
		if(i > 0 && arr[i] == arr[i - 1]) continue;
		cout << arr[i] << '\n';
	}
	return 0;
}
