
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;


int main()
{

	char name1[101]= "A";
	char name2[101] = "a";
	int sum1{0};
	int sum2{0};

	cin.getline(name1, 101);
	
	cin.getline(name2, 101);
	
	
	size_t len = strlen(name1);

	for (int i = 0; i < len; i++)
	{

		if (name1[i]>=97)
		{
			name1[i] -= 32;
		}

		if (name2[i] >= 97)
		{
			name2[i] -= 32;
		}


	}
	for (int i = 0; i < len; i++)
	{

		sum2 += (int)name2[i];
		sum1 += (int)name1[i];


		/*if (name1[i] > name2[i])
		{
			sum1 = 0;
			sum1++;
		}
		 if (name1[i] < name2[i])
		{
			sum2 = 0;
			sum2++;
		}*/
		
		
	}
	if (sum1 > sum2)
	{
		cout << "1";
	}
	if (sum1 < sum2)
	{
		cout << "-1";
	}
	if (sum1 == sum2)
	{
		cout << "0";
	}
	

	



}

