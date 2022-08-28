
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    int n = ( s.length() ) /2;
   

    for (size_t i = 0; i < n; i++)
    {
        swap(s[i], s[s.length() - i-1]);
    }
    if (s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


}