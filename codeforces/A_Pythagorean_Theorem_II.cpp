#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin >> n;
    double a, b, c;
    set<int> cc;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            c = sqrt((double)(i * i + j * j));

            if ((double)sqrt((double)(i * i + j * j)) == round(c) && c >= j && c <= n)
            {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}