#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    int num = -1;

    for (int i = 0; i < 10; i++)
    {
        int aa;
        aa = a * 10;
        aa += i;
        if (aa % b == 0)
        {
            num = aa;
        }
    }
    n--;
    if (num == -1)
    {
        cout << num;
        return 0;
    }

    string ans = to_string(num);
    while (n--)
    {
        ans = ans + '0';
    }

    cout << ans;

    return 0;
}