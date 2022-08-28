#include<bits/stdc++.h>

#define ll long long

using namespace std;

void solve (ll num , ll r){
    if(num == 0){
        cout << " "<< 0;
        return;
    }

    set<ll> v;
    ll i = 1;
    for (  i = 1; i*i < num; i++)
    {
        if(num%i == 0)
            v.insert(i),v.insert(num/i);
    }
    if(i*i == num)
        v.insert(num/i);
    
    

    for(auto i = v.begin() ; i != v.end(); i++){
        ll val = *i;
        if(val > r){
            cout << " " << val;
        }
    }


}



int main(){
    //freopen("input.in" , "r" , stdin);
    //freopen("output.out" , "w" , stdout);

    int t;
    cin >> t;
    for(int test = 1 ; test <= t ; test ++){
        ll r,c;
        cin >> r >>c;
        ll gq = abs(r-c);
        cout << "Case #" << test << ":" ;
        solve(gq , c);
        cout << endl;
    }
    


    return 0;
}