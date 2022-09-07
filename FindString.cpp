//Simple Comparsion String Matching Algorithm

#include <iostream>
using namespace std;

int FindString(string parent,string pattern)
{
	int parentSize = parent.size();
	int patternSize = pattern.size();
	for(int i = 0; i < parentSize; i++)
	{
		bool finded = true;
		for(int j = 0; j < patternSize; j++)
		{
			if(parent[i + j] != pattern[j])
			{
				finded = false;
				break;
			}
		}
		if(finded)
		{
			return i;
		}
	}
	return -1;
}

int main(void)
{
	string parent = "Hello World";
	string pattern = "llo W";
	int result = FindString(parent,pattern);
	if(result == -1) printf("Failed");
	else printf("Finded %d",result + 1);
	return 0; 
}
