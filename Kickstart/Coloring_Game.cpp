#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(int n ){
    if(n == 1 || n==2){
        cout << 1;
        return;
    }
    n = ceil((double)n);
    double nn = n;
    cout<<  ceil(nn /5);
    
}



int main () {
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        int n ;
        cin >> n;
        cout <<"Case #" << test << ": " ;

        solve(n);
        cout << "\n";
    }
    
}