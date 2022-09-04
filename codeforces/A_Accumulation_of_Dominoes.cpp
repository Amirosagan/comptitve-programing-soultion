#include <bits/stdc++.h>

#define ll long long 

using namespace std;

int main () {
    ll n , m;
    cin >> n >> m;
    if(m == 1){
        cout << n-1;
    }else{
        cout << (m-1)*n;
    }



    return 0;
}