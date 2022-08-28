#include <bits/stdc++.h>

#define ll long long

using namespace std;
// 1 2 3 4 1 2 3 4 100000 999999
// 6 6 6 6 6 5 4 3    2     1
int main()
{
    int n, q;
    cin >> n >> q;

    bool arr_nn[100001];
    int arr_res[n + 1];
    int arr[n + 1];

    ll summ = 0;
    memset(arr_nn, 0, sizeof(arr_nn));

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = n - 1; i >= 0; i--)
    {
        int num = arr[i];
        if (arr_nn[num])
        {
            arr_res[i + 1] = summ;
        }
        else
        {
            arr_nn[num] = 1;
            summ++;
            arr_res[i + 1] = summ;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int num;
        cin >> num;
        cout << arr_res[num] << "\n";
    }

    return 0;
}