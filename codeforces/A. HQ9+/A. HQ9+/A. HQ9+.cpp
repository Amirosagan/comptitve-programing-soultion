
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char p[1001];

    cin.getline(p, 1001);

    size_t leb = strlen(p);
	for (int  i = 0; i < leb; i++)
	{
		if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9'  )
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";

}
