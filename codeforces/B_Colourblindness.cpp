#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R')
            {
                if (s2[i] != 'R')
                {
                    ans = false;
                    i = n;
                }
            }
            else if (s1[i] == 'G' || s1[i] == 'B')
            {
                if (s2[i] == 'R')
                {
                    ans = false;
                    i = n;
                }
            }
        }
        if (ans)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }

        cout << "\n";
    }

    return 0;
}