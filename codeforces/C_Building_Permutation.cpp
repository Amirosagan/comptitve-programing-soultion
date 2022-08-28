#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int beg = n;
    ll count = 0;
    for (int i = n - 1; i >= 0; i--)
        count += abs((i + 1) - arr[i]);

    cout << count;

    return 0;
}
