#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
    ll n;
    cin >> n;
    ll res = 0;
    for(ll i =5 ; i <=n ; i*= 5)
        res += n/i;

    cout << res;
    
}