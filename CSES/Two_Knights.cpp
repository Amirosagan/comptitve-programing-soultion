#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    int n;
    cin >> n;
    ll answer;
    for (ll k = 1; k <= n; k++)
    {
        ll a = k*k, aa = a*(a-1)/2;
        if(k >= 3)
            aa -= 4*(k-1)*(k-2);

        cout << aa << endl;


    }
    
}