
#include <iostream>

using namespace std;

int main()
{
	int count{ 0 };
	int n{ 0 };
	cin >> n;
	int num[100000] = { 00 };
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < n; i++)
	{
		
		if ( num[i]!= num[i+1])
		{
			count++;
		}
		
	}
	cout << count;


}
