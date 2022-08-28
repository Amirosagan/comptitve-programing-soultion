
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string positoion = "noun";
	int count0{ 0 };
	int count1{ 0 };
	cin >> positoion;

	for (int i = 0; i < size(positoion); i++)
	{
		if (positoion[i]=='0')
		{
			count1 = 0;
			count0++;
		}
		else
		{
			count0 = 0;
			count1++;
		}
		if (count1 >= 7 || count0 >= 7)
		{
			cout << "YES";
			return 0;
		}
		
	}
	cout << "NO";


}

