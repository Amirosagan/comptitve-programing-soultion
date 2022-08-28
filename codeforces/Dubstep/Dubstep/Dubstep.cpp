
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    bool istrue = true;

    for (int i = 0; i < size(s); i++)
    {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
                if (!istrue)
                {
                    cout << " ";
                }
                continue;
        }
        else
        {
            istrue = false;
            cout << s[i];
        }
    }



}

