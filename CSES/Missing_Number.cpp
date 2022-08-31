#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main () {
    ll n;
    cin >>n;
    ll res = (n*(n+1))/2;
    ll sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        int num;
        cin >> num;
        sum += num;
    }

    cout << res-sum;
    
}