#include <bits/stdc++.h>

#define ll long long

using namespace std;


int main () {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '0'){
            s.erase(i,1);
            cout << s;
            return 0;
        }
    }
    s.erase(0,1);
    cout << s;




    return 0;
}