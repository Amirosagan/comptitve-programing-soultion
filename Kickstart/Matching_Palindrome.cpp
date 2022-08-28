#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool bl(string s){
    for(int i  = 0 , l  =s.size()-1 ; i <= s.size()/2 && l >= s.size() / 2; i ++ , l --){
        if(s[i] != s[l]){
            return 0;
        }
    }
    return 1;
}

void solve (int n , string s){
    
}



int main () {
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        int n ;
        string s;

        cin >> n >> s;
        
        cout <<"Case #" << test << ": " ;

        solve(n,s);
        cout << "\n";
    }
    
}