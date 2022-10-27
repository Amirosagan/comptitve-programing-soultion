#include <bits/stdc++.h>
using namespace std;

char changer(int c, int key)
{
    c += key;
    int out = c % 123;
    if (out < 97)
    {
        out += 97;
    }
    return (char)out;
}

string caesarCypherEncryptor(string str, int key)
{
    key = key % 26;
    string ans = "";
    for (auto c : str)
    {
        ans.push_back(changer((int)c, key));
    }
    return ans;
}
