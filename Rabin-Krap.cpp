//Rabin-Krap
#include <iostream>
using namespace std;

void RabinKrap(string parent,string pattern)
{
	int parentSize = parent.size();
	int patternSize = pattern.size();
	int parentHash = 0;
	int patternHash = 0;
	int power = 1;
	for(int i = 0; i <= parentSize - patternSize; i++)
	{
		if(i == 0)
		{
			for(int j = 0; j < patternSize; j++)
			{
				parentHash += parent[patternSize - 1 - j] * power;
				patternHash += pattern[patternSize -1 -j] * power;
				if(j < patternSize - 1) power *= 2;
			}
		}
		else
		{
			parentHash = 2 * (parentHash - parent[i - 1] *power) + parent[i + patternSize - 1];
		}
		if(parentHash == patternHash)
		{
			bool finded = true;
			for(int j = 0; j < patternSize; j++)
			{
				if(parent[i + j]  != pattern[j])
				{
					finded = false;
					break;
				}
			}
			if(finded) printf("Finded %d\n",i + 1);
		}
	}
}

int main(void)
{
	string parent = "ababacabacaabacaaba";
	string pattern = "abacaaba";
	RabinKrap(parent,pattern);
	return 0;
}

