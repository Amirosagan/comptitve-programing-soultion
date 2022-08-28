#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arrx[n], arry[n];
    ll sumx = 0, sumy = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arrx[i] >> arry[i];
        sumx += arrx[i];
        sumy += arry[i];
    }

    if (sumx % 2 == 0 && sumy % 2 == 0)
    {
        cout << 0;
        return 0;
    }
    if (sumx % 2 != 0 && sumy % 2 != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (arrx[i] % 2 == 0 ^ arry[i] % 2 == 0)
            {
                cout << 1;
                return 0;
            }
        }
        cout << -1;
    }
    else
    {
        cout << -1;
    }

    return 0;
}