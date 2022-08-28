
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string name;
	cin >> n >> name;
	char star[100];
	int count{ 0 };
	bool ifto = false;
	for (int i = 0; i < n; i++)
	{
		if (name[i] <= 90)
		{
			name[i] += 32;
		}

		if (i == 0)
		{
			
			star[0] = name[i];
			count++;
		}
		else
		{
			for (int j = 0; j < count; j++)
			{
				if (name[i] == star[j])
				{
					ifto = true;
				}
				if (j == (count-1))
				{
					star[count] = name[i];
					count++;
					ifto = false;
					break;
				}
				if (ifto)
				{
					ifto = false;
					break;
				}
				else
				{
					continue;
				}
			}
		}
	}
	
	if (count == 26)
	{
		cout << "YES";
	}
	else
	{

		cout << "NO";

	}


	return 0;

}
