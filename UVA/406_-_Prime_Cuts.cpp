#include <bits/stdc++.h>

using namespace std;
#define ll long long


vector<ll> solve(int n , int c){
    vector<ll> v;
    bool primes[n+1] ;
    memset(primes,1,n+1);
    primes[0] = primes[1] = 0;
    for (ll i = 2; i*i <= n; i++)
    {
        if(primes[i]){
            for (int j = i*2; j <= n; j+=i)
                primes[j] = 0;
        }
    }
    primes[1] = 1;
    for (ll i = 0; i < n+1; i++)
    {
        if(primes[i])
            v.push_back(i);
    }
    
    if(v.size() % 2 == 0)
        c = c*2;
    else
        c = (c*2)-1;
    
    if(c > v.size())
        c = v.size();
    int start = ((v.size()-c)/2) , end = v.size()-((v.size()-c)/2)-1;

    for (int i = start; i <= end; i++)    {
        cout << " " << v[i] ;
     }
    

    return v;

}


int main(){
    int n , c;
    while(cin >> n && cin >> c){
        cout << n << " " << c << ":";
         solve(n,c);
        
        cout << endl;
        
    }
}
