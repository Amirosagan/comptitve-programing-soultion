#include <bits/stdc++.h>

using namespace std;

int arr[101][101];
long long counte(int num, int n, int m, int d)
{
    long long counter = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int ss = abs(num - arr[i][j]);
            if (ss % d != 0)
                return -1;
            counter += (ss / d);
        }
    }
    return counter;
}

int main()
{
    int n, m, d;
    cin >> n >> m >> d;

    int avg = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];

            avg += arr[i][j];
        }
    }
    avg = avg / (n * m);
    long long ans = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            long long res = counte(arr[i][j], n, m, d);
            if (res == -1)
                res = INT32_MAX;
            ans = min(ans, res);
        }
    }
    if (ans != INT32_MAX)
        cout << ans;
    else
        cout << -1;

    return 0;
}