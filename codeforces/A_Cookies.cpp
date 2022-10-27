#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count_even = 0, count_odd = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        sum += num;
        if (num % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    if (sum % 2 == 0)
    {
        cout << count_even;
    }
    else
    {
        cout << count_odd;
    }

    return 0;
}