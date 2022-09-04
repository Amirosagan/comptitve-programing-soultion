#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 20)
    {
        cout << 15;
    }
    else if (n > 10 && n <= 21)
    {
        cout << 4;
    }
    else
    {
        cout << 0;
    }

    return 0;
}