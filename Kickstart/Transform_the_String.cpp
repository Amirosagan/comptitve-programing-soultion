#include <bits/stdc++.h>

using namespace std;

#define ll long long

int mini(char c, string f){
    int min_C = INT32_MAX;
    for (int i = 0; i < f.size(); i++)
    {
        if(c == f[i])
            return 0;
        
        int res = min((int)abs((int)c-f[i]) , (int)('z' - 'a')-abs((int)c-f[i])+1);
        min_C= min(res,min_C);
    }
    return min_C;
}


void solve(string s, string f){
    ll res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res+= mini(s[i],f);
    }
    cout << res;

}


int main () {
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        string s, f;
        cin >> s >> f;
        cout << "Case #" << test << ": ";
        solve(s, f);
        cout << endl;
    }
    
}