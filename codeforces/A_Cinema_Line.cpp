#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count_25 = 0, count_50 = 0, count_100 = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num == 25)
            count_25++;
        else if (num == 50)
        {
            if (count_25 > 0)
            {
                count_25--;
            }
            else
            {
                cout << "NO";
                return 0;
            }
            count_50++;
        }
        else if (num == 100)
        {
            if (count_50 > 0 && count_25 > 0)
            {
                count_50--;
                count_25--;
            }
            else if (count_25 > 2)
            {
                count_25 -= 3;
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";

    return 0;
}