// ELsagan
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int k{ 0 }, n{ 0 }, w{ 0 };
	cin >> k >> n >> w;
	int price{ 0 };
	for ( int i = 0; i <= w; i++)
	{
		price = price + (i * k);
	}
	if (price <= n)
	{
		cout << 0;
	}
	else
	{
		k = 0;
		k = price - n;
		cout << k;
	}
}

