
#include <bits/stdc++.h>

#define all(S) S.begin(),S.end()

#define ll long long

using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<ll> a(n);
        if(s<k*b||s>n*(k-1)+k*b){
            cout<<-1<<endl;
        }
        else{
            a[n-1]=k*b;
            s-=k*b;
            for(int i=n-1;i>=0 && s>0;i--){
                a[i]+=min(k-1,s);
                s-=min(k-1,s);
            }
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}