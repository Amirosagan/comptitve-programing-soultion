
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string name = "a";
	cin >> name;
	int count{ 0 };

	for (int i = 0; i < size(name); i++)
	{
		if (name[i] >= 65 && name[i] <= 90)
		{
			count++;
		}
		else
		{
			continue;
		}
		
	}

	if ( count == (name.length() -1) && name[0] >= 97 && name[0] <= 122)
	{
		if (name[0] >= 97 && name[0] <= 122)
		{
			cout << (char)toupper(name[0]);
		}
		else
		{
			cout << name[0];
		}
		for (int i = 1; i < size(name); i++)
		{
			if (name[i] >= 65 && name[i] <= 90)
			{
				cout << (char)tolower(name[i]);
			}
			else
			{
				cout << name[i];
			}
		}
	}
	else if (count == (name.length()) )
	{
	
		for (int i = 0; i < size(name); i++)
		{
			if (name[i] >= 65 && name[i] <= 90)
			{
				cout << (char)tolower(name[i]);
			}
			else
			{
				cout << name[i];
			}
		}
	}
	else
	{
		cout << name;
	}


	
}

