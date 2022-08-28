
#include <iostream>




using namespace std;

int main()
{
    string n;
    cin >> n;
	int heavy = 0;
	long long count =0;
	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] == 'h' && n[i+1] == 'e'&& n[i+2] == 'a'&& n[i+3] == 'v'&& n[i+4] == 'y')
		{
			heavy++;
			
			i += 4;
		
		}
		
		else if (n[i ] == 'm' && n[i +1] == 'e' && n[i + 2] == 't' && n[i + 3] == 'a' && n[i + 4] == 'l')
		{
			count += heavy;
			i += 4;
		}
		else
		{
			continue;
		}
	}
	cout << count;


}
