#include <iostream>
#include <cstring>
#include <utility>
#include <Bits.h>
#include <algorithm>



using namespace std;

int main()
{
    string name;
    int count{ 0 }, count2{ 0 };
    cin >> name;
    size_t len = size(name);
    sort(name.begin(), name.end());

    for (int i = 1; i < len; i++)
    {
        if (name[i] != name[i - 1])
       {
            count++;
       }
    }

    if (count%2 != 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}
