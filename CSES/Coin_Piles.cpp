#include <bits/stdc++.h>

#define ll long long
using namespace std;

int main () {
    int t;
    cin >> t;

    while(t--){
        ll a , b;
        cin >> a >> b;
        
        if((a+b) % 3 == 0 && 2*a>=b && 2*b>=a){
            cout << "YES";
        } else{
            cout << "NO";
        }
        cout << endl;
    }


    return 0;
}