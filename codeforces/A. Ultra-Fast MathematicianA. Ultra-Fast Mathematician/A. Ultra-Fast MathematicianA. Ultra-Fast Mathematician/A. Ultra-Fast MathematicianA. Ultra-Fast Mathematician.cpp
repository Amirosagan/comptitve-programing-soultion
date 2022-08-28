
#include <iostream>

using namespace std;

int main()
{
    string n;
    string s;
    cin >> n >> s;
    
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == s[i])
        {
            cout << '0';
        }
        else
        {
            cout << '1';
        }
    }



}
