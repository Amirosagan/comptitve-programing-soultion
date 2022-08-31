#include <bits/stdc++.h>

using namespace std;

#define ll long long;

bool isprime(int n ){
    if(n == 2)
        return 1;
    if(n == 0 || n == 1)
        return 0;
    for (int i = 2; i *i<= n; i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}



void solve(string s) {
    int arr_s[255] ;
    memset(arr_s, 0 , sizeof(arr_s));
    for (int i = 0; i < s.length(); i++)
    {
        arr_s[(int)s[i]] ++;
        
    }
    
    vector<char> v;
    for (int i = 0; i < 255; i++)
    {
        if(isprime(arr_s[i]))
        {
            v.push_back((char)i);
            
        }
    }
    if(v.size()){
        for(auto vv : v){
            cout << vv;
        }
            
    }
    else{
        cout << "empty";
    }

}


int main () {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        cout << "Case " << i << ": " ;
        solve(s);
        cout << endl;
    }
    
}