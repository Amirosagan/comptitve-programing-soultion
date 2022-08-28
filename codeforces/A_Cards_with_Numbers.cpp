#include <bits/stdc++.h>

#define ll long long

using namespace std;

struct ss
{
    int num;
    int index;
};

bool sortF(ss num1, ss num2)
{
    if (num1.num > num2.num)
        return 1;
    return 0;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    n = n * 2;
    ss arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].num;
        arr[i].index = i + 1;
    }
    sort(arr, arr + n, sortF);

    for (int i = 0; i < n - 1; i += 2)
    {
        if (arr[i].num != arr[i + 1].num)
        {
            cout << -1;
            return 0;
        }
    }

    for (int i = 0; i < n - 1; i += 2)
    {
        cout << arr[i].index << " " << arr[i + 1].index << "\n";
    }

    return 0;
}