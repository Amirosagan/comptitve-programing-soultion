#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    int t;
    cin >> t;
     while(t--){
       unsigned ll y , x;
        cin >> y >> x;
        unsigned ll z = max(y,x) , ans = 0;
        if(y == 1 && x == 1){
            ans = 1;
        }
        else if(z % 2 == 0 ){
            if( x == z){
                ans = (x-1)*(x-1)+(y-1)+1;
            }else {
                ans = (ll)y*y-(x-1);
            }
        } else {
            if(x == z){
                ans = z*z-(y-1);
            }else {
                ans = (y-1)*(y-1)+(x-1)+1;
            }
        }

        cout << ans  << endl;
     }
}