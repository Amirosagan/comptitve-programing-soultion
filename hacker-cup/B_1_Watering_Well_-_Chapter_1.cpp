#include <bits/stdc++.h>

#define ll long long

using namespace std;


const ll MOD = 1000000007;

ll MO(ll num1 ){
    if(num1 >=0){
        return num1%MOD;
    }else{
        if(-num1 > MOD){
            return 0;
        }else{
            return MOD + num1;
        }
    }
    
}

void solve(){
    int n, q;
    cin >> n ;
    ll x_2 = 0;
    ll y_2 = 0;
    ll _2x = 0;
    ll _2y = 0;
    // cout << MO(1000000007);
    for (int i = 0; i < n; i++)
    {
        int x , y;
        cin >> x >> y;
        x_2 = (((x*x)%MOD)+x_2)%MOD;
        y_2 = (((y*y)%MOD)+y_2)%MOD;
        _2x = (((2*x)%MOD)+_2x)%MOD;
        _2y = (((2*y)%MOD)+_2y)%MOD;
    }
    // cout << x_2 << " " << y_2 << " "<<  _2x << " "<< _2y;
    cin >> q;
    ll ans = 0;
    for (int i = 0; i < q; i++)
    {
        int x , y;
        cin >> x >> y;
        ll xx =  (((x*((n*x)%MOD-_2x)%MOD)%MOD+x_2)%MOD);
        ll yy =  (((y*((n*y)%MOD-_2y)%MOD)%MOD+y_2)%MOD);
        ans = MO(ans + abs(MO(xx + yy)));
    }
    
    cout << MO(ans);


}



int main () {
    freopen("input.in" , "r" , stdin);
    freopen("output.text" , "w" , stdout);
    int t;
    cin >> t;

    for (int test = 1; test <= t; test++)
    {
        cout << "Case #" << test << ": ";
        solve();
        cout << endl;
    }
    



    return 0;
}