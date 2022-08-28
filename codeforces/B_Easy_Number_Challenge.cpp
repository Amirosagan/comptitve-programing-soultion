#include <bits/stdc++.h>

#define ll long long

using namespace std;

int arr[1000000];

int const INF = 1073741824;

int numofFact(int n)
{
    int count = 0;
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
            count++;
        }
    }
    if (i * i == n)
    {
        count++;
    }

    return count;
}

void shange()
{
    memset(arr, 0, sizeof(arr));
    for (int a = 1; a <= 100; a++)
    {
        for (int b = 1; b <= 100; b++)
        {
            for (int c = 1; c <= 100; c++)
            {
                if (arr[a * b * c] == 0)
                    arr[a * b * c] = numofFact(a * b * c);
            }
        }
    }
}

int main()
{
    int aa, ba, ca;
    cin >> aa >> ba >> ca;
    ll sum = 0;
    shange();
    for (int a = 1; a <= aa; a++)
    {
        for (int b = 1; b <= ba; b++)
        {
            for (int c = 1; c <= ca; c++)
            {
                sum += arr[a * b * c];
            }
        }
    }

    cout << sum;

    return 0;
}