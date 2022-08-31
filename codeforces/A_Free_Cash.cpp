#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 1;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    int counter = 1;
    for (int i = 1; i < n; i++)
    {
        if (!(arr[i].first == arr[i - 1].first && arr[i].second == arr[i - 1].second))
        {
            ans = max(ans, counter);
            counter = 1;
        }
        else
        {
            counter++;
        }
    }
    ans = max(ans, counter);

    cout << ans;

    return 0;
}