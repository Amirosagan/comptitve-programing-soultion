#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;

    if (n < 4)
    {
        ll b = n + 1;
        ll a = n;
        cout << (b * b) - (a * a);
    }
    else if (n == 4)
    {
        cout << 8;
    }
    else
    {
        ll cheak = n - 4;
        if (cheak % 3 == 0)
        {
            cout << 8 + 4 * (cheak / 3);
        }
        else
        {
            if ((cheak / 3) % 2 == 0)
            {
                if (cheak % 2 == 0)
                {
                    cout << 8 + 4 * (cheak / 3) + 3;
                }
                else
                {
                    cout << 8 + 4 * (cheak / 3) + 1;
                }
            }
            else
            {
                if (cheak % 2 == 0)
                {
                    cout << 8 + 4 * (cheak / 3) + 1;
                }
                else
                {
                    cout << 8 + 4 * (cheak / 3) + 3;
                }
            }
        }
    }

    return 0;
}