#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<pair<string,int> > v;
	v.push_back(pair<string,int>("YoungSeokHan1",1));
	v.push_back(pair<string,int>("YoungSeokHan2",2));
	v.push_back(pair<string,int>("YoungSeokHan3",3));
	v.push_back(pair<string,int>("YoungSeokHan4",4));
	v.push_back(pair<string,int>("YoungSeokHan5",5));
	
	sort(v.begin(),v.end());
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << '\n';
	}
	return 0;
}


