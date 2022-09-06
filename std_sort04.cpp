#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string,pair<int,int> > a,pair<string,pair<int,int> > b)
{
	if(a.second.first == b.second.first) return a.second.second > b.second.second;
	else return a.second.first < b.second.first;
}

int main(void)
{
	vector<pair<string,pair<int,int> > > v;
	v.push_back(pair<string,pair<int,int> >("YoungSeokHan1",make_pair(1,19970704)));
	v.push_back(pair<string,pair<int,int> >("YoungSeokHan2",make_pair(2,19970604)));
	v.push_back(pair<string,pair<int,int> >("YoungSeokHan3",make_pair(2,19970504)));
	v.push_back(pair<string,pair<int,int> >("YoungSeokHan4",make_pair(3,19970404)));
	v.push_back(pair<string,pair<int,int> >("YoungSeokHan5",make_pair(3,19970304)));
	
	sort(v.begin(),v.end(),compare);
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << '\n';
	}
	return 0;
}


