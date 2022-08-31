#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    ll n ;
    cin >>n;
    ll res = n;
    while (res >  1)
    {
        cout << res << " ";
        if(res % 2 == 0){
            res = res / 2;
        }
        else{
            res = (res* 3)+1;
        }
    }
    cout << res << " ";
    return 0;
}