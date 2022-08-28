
#include <iostream>


using namespace std;

int main()
{
	int n;
	int num[200] = { 577578 };
	int count{ -1 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < n; i++)
	{
		if ( ( num[i] % num [i+1] ) !=0 )
		{
			count++;
			continue;
		}
		else
		{
			continue;
		}

	}

	cout << count;


}
