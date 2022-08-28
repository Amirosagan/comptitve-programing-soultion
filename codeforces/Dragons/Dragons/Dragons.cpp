
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int s{ 0 }, n{ 0 };

    cin >> s >> n;
	int x[1400] = {10000}, y[1400] = { 100000 };

	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (x[i]>x[j])
			{
				swap(x[i], x[j]);
				swap(y[i], y[j]);
			}
		}
		
	}
	for (int  i = 0; i < n; i++)
	{
		if (x[i] < s)
		{
			s +=y[i];
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";

}

