#include <bits/stdc++.h>
using namespace std;

bool generateDocument(string characters, string document)
{
    int arr1[256];
    int arr2[256];
    memset(arr2, 0, sizeof(arr2));
    memset(arr1, 0, sizeof(arr1));
    if (document.length() == 0)
    {
        return true;
    }
    for (auto c : characters)
    {
        arr1[c]++;
    }

    for (auto c : document)
    {
        arr2[c]++;
    }
    for (int i = 0; i < 255; i++)
    {
        if (arr1[i] < arr2[i])
        {
            return false;
        }
    }

    return true;
}
