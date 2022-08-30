#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll arr[255];

int main()
{
    memset(arr, 0, sizeof(arr));
    ll n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        arr[c]++;
    }
    sort(arr, arr + 255);
    int l = 255 - 1;
    ll ans = 0;
    while (k > 0)
    {
        ll sum = min(k, arr[l]);
        k -= sum;
        ans += (sum * sum);
        l--;
    }
    cout << ans;

    return 0;
}