// A. Anton and Letters.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    char chart[1000]="+";
	int counter{ 0 }, count{1};
	string in;

	while (1)
	{
		
		cin >> in;
		if (in[1] == 125 || in[2] == 125)
		{
			chart[counter] = in[0];
			break;
		}
		else if (in[0] == 123)
		{
			chart[counter] = in[1];
			
		}
		else
		{
			chart[counter] = in[0];
		}
		counter++;
	}

	sort(chart, chart + counter+1);

	for (int i = 1; i <= counter; i++)
	{
		if (chart[i] != chart[i-1])
		{
			count++;
		}
		else
		{
			continue;
		}
	}


	if (in[1] < 123)
	{
		cout << count;
	}
	else if (counter == 0 && chart[0] > 12 )
	{
		cout << "0";
		return 0;
	}
	else
	{
		cout << count;
	}

}

