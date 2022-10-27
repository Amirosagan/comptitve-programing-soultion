#include <bits/stdc++.h>
using namespace std;

int firstNonRepeatingCharacter(string string)
{
    int arr[256];
    memset(arr, 0, sizeof(arr));

    for (auto c : string)
    {
        arr[c]++;
    }

    for (int i = 0; i < string.length(); i++)
    {
        if (arr[string[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}
