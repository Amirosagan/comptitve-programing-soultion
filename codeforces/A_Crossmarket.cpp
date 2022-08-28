#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
    int t;
    cin >> t;
    while(t--){
        ll n , m;
        cin >> n >> m;
        if(n<m){
            swap(n,m);
        }
        else{

        }



        if( n <= 1 && m <= 1){
            cout << 0;
            
        }
        
        else{
            cout << (m-1)*2+n;
        }


        
        cout << endl;
    }
}