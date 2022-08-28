#include <Bits.h>
#include <iostream>
#include <algorithm> 
#include <cmath>

using namespace std;

int main()
{
    int num1{ 0 };
	int num2{0} ;
	float count{ 0 };
	int a{ 0 }, b{ 0 }, c{ 0 }, d{ 0 };
	cin >> num1;
	for (int i = 0; i < num1; i++)
	{
		cin >> num2;
		if (num2 == 4)
		{
			d++;
		}
		else if (num2 == 3)
		{
			c++;
		}
		else if (num2 == 2)
		{
			b++;
		}
		else if (num2 == 1)
		{
			a++;
		}
	}
	count += d;
	if (c>=a)
	{
		count += a;
		c = c - a;
		a = 0;
	}
	else if (c<a)
	{
		count += c;
		a = a - c;
		c = 0;
	}
	
	if (c>0)
	{
		count += c;
		c = 0;
	}
	if (b>0)
	{
		count += b / 2;
		b = b % 2;
	}
	int left1 = a + (b * 2);
	if (left1<=4 && left1>0)
	{
		count += 1;
	}
	else if (left1%4 !=0)
	{
		count += (left1 / 4) + 1;
	}
	else
	{
		count += (left1 / 4);
	}

	
	cout << count;

}

