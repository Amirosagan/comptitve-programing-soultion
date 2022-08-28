#include <bits/stdc++.h>
using namespace std;

int arr[5001];

void solve(vector<int> q)
{
    for (auto qq : q)
    {
        cout << arr[qq] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        memset(arr, 0, sizeof(arr));
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int start;
            int end;
            cin >> start >> end;
            for (int j = start; j <= end; j++)
            {
                arr[j]++;
            }
        }
        int qq;
        cin >> qq;
        vector<int> q(qq);
        for (int i = 0; i < qq; i++)
        {
            cin >> q[i];
        }

        cout << "Case #" << test + 1 << ": ";
        solve(q);
    }
}