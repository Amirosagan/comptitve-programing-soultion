
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	char k[5]="dfd";
	cin >> s;
	int i = 0;
	int count = 0;
	while (i<size(s))
	{
		if (s[i] == 'h')
		{
			count++;
			//k[0] = 'h';
			i++;
			break;
		}
		i++;
	}
	while (i < size(s))
	{
		if (s[i] == 'e')
		{
			count++;
			//k[1] = 'e';
			i++;
			break;
		}
		i++;
	}
	while (i < size(s))
	{
		if (s[i] == 'l')
		{
			count++;
			//k[2] = 'l';
			i++;
			break;
		}
		i++;
	}
	while (i < size(s))
	{
		if (s[i] == 'l')
		{
			count++;
			//k[3] = 'l';
			i++;
			break;
		}
		i++;
	}
	while (i < size(s))
	{
		if (s[i] == 'o')
		{
			count++;
			//k[4] = 'o';
			i++;
			break;
		}
		i++;
	}

	if (count >= 5)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}




}

