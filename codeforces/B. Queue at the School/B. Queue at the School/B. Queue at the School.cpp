
#include <iostream>
#include <string>

using namespace std;





int main()
{
	int loop;
	int t;
	
	string BG;
	cin >> loop >> t;
	cin >> BG;
	for (size_t i = loop-1; i >= 1 ; i--)
	{
		if (BG[i] == 'G')
		{
			for (size_t j = 1; j <= t; j++)
			{
				if (BG[i-j] == 'B')
				{
					swap(BG[i], BG[i - j]);
				}
				else
				{
					continue;
				}

			}
		}
		else
		{
			continue;
		}
		
	}
	cout << BG;
}
