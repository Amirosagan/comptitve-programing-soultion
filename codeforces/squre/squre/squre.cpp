#include <iostream>
#include <cmath>;

using namespace std;


int main()
{

	double_t n{ 0 }, m{ 0 }, a{ 0 };

	double_t x{ 0 }, y{ 0 };

	cin >> n >> m >> a ;

    x = n / a;
	y = m / a;
	
	cout <<  (long long)ceil(x) * (long long)ceil(y);

}
