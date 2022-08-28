
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string name;
	cin >> name;
	for (size_t i = 0; i < size(name); i++)
	{
		if (name[i] == 'a' || name[i] == 'e'|| name[i] == 'i'|| name[i] == 'o'|| name[i] == 'u'|| name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U' || name[i] == 'y' || name[i] == 'Y')
		{
			continue;
		}
		else
		{
			

			 cout << "." << (char)tolower(name[i]);
		}
	}
}

