
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n;
	cin  >> n;
	long long Fn{0};
	
	if (n%2 == 0)
	{
		Fn = n / 2;
	}
	else
	{
		n++;
		Fn = (n / 2) * (-1);
	}
	cout << Fn;




}

