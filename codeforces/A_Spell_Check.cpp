#include <bits/stdc++.h>
#define f(var, start, end) for (int var = start; var < end; var++)

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int gan;
        cin >> gan;
        string swo;
        cin >> swo;
        string w = "Timur";
        map<char, int> k;
        bool ch = true;
        if (swo.size() != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            f(i, 0, swo.size())
            {
                if (w.find(swo[i]) != string::npos)
                {
                    k[swo[i]]++;
                    if (k[swo[i]] == 2)
                    {
                        ch = false;
                        break;
                    }
                }
                else
                {
                    ch = false;
                    break;
                }
            }
            if (ch)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}