#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    ll arr_sum1[n + 1];
    ll arr_sum2[n + 1];
    arr_sum1[0] = 0;
    arr_sum2[0] = 0;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        arr_sum1[i + 1] = sum;
    }

    sum = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr_sum2[i + 1] = sum;
    }

    int q;
    cin >> q;
    
    for (int i = 0; i < q; i++)
    {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
            cout << arr_sum1[r] - arr_sum1[l - 1];
        else
            cout << arr_sum2[r] - arr_sum2[l - 1];

        cout << "\n";
    }

    return 0;
}