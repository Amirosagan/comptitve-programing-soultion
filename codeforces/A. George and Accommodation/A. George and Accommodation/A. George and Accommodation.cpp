// A. George and Accommodation.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>


using namespace std;

int main()
{
	int numOfrooms, Pi, Qi, count{0};
	cin >> numOfrooms ;

	for (int i = 0; i < numOfrooms; i++)
	{
		cin >> Pi >> Qi;
		if ((Qi-Pi) >= 2)
		{
			count++;
		}
		else
		{
			continue;
		}
	}

	cout << count;





}
