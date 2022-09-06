//Baekjoon 1181

#include <iostream>
#include <algorithm>
using namespace std;

string arr[20001];


bool compare(string a,string b)
{
	if(a.length() < b.length()) return 1;
	else if(a.length() > b.length()) return 0;
	else return a < b; 
}

int main(void)
{
	int n; 
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr,arr + n,compare);
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << '\n';
	}
	return 0;
}

