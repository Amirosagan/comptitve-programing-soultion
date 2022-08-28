#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool cheaker(vector<char> v)
{
    int count_1 = 0, count_2 = 0;
    for (auto c : v)
    {
        if (c == '#')
            count_1++;
        if (c == '.')
            count_2++;
    }

    if (count_1 == count_2)
        return 0;

    return 1;
}

int main()
{
    char arr[4][4];

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            vector<char> v = {arr[i][j], arr[i + 1][j], arr[i][j + 1], arr[i + 1][j + 1]};
            if (cheaker(v))
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}