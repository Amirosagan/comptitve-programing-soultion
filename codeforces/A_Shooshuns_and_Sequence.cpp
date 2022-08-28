#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
    ll n , k ,  a ,last{0} ,continues{1};

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if(a == last) {
            continues ++;
        }
        else{
            continues = 1;
        }
        last = a;
    }
    if(continues + k > n) {
        cout << -(continues - n);
    }
    else{

        cout << -1;
    }
    
    return 0;
}