#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define mod (1000000000+7)

unsigned ll result(ll n){
    unsigned ll res=2;
    for (int i = 1; i < n; i++)
    {
        res = (res*2)%mod;
    }
    return res;
}


int main () {
    ll n;
    cin >> n;
    unsigned ll res = result(n);
    

    cout << res;
}