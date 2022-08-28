
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	double n;
	double k;
	double num{ 0 };
	cin >> n >> k;
	if ((long long)k<= ceil(n/2))
	{
		num = 1 + ((k - 1) * 2);
		cout << (long long)num;
	}
	else
	{
		k = k - ceil(n / 2);
		num = 2 + ((k - 1) * 2);
		cout << (long long)num;
	}
	

}
