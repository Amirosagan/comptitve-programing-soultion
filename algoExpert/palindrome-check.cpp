#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    for (int i = 0, j = str.length() - 1; i <= str.length() / 2 && j >= str.length() / 2; i++, j--)
    {
        if (str[j] != str[i])
        {
            return false;
        }
    }

    return true;
}
