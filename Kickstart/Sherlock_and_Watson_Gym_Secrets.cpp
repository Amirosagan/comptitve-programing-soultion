#include <bits/stdc++.h>
using namespace std;


// not solved yet :(

#define ll long long

int const MOD = 1e7 + 7;

ll fastpow(ll n , ll w){
    ll res = n;
    while(w--){
        res = (res*n)%MOD;
    }
    return res;
}

void solve(int a ,int b , int n , int k) {




}



int main (){
    int t;
    cin >>t ;
    for(int test  = 1 ; test <=t ; test++){
        ll A , B , N , K;
        cin >> A >> B >> N >> K;

        cout << "Case #" << test << ": " ;
        solve(A , B , N ,K);
        cout << "\n";

    }



}