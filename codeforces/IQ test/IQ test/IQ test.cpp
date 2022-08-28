
// https://codeforces.com/problemset/problem/25/A

#include <iostream>
#include <cmath>


using namespace std;



int main()
{
	int loop;
	cin >> loop;
	int num[100]{ 0 }, countOdd{ 0 }, countEven{ 0 }, numeven{ 0 }, numodd{0};



	for (int i = 0; i < loop; i++)
	{
		cin >> num[i];
		if (num[i] % 2 == 0)
		{
			countOdd++;
			numodd = i + 1;
		}
		else
		{
			countEven++;
			numeven = i+1;
		}
	}
	if (countOdd ==1  )
	{
		cout << numodd;
	}
	else
	{
		cout << numeven;
	}
	
}

