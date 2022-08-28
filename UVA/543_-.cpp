#include <bits/stdc++.h>

using namespace std;

#define ll long long 

 bool isprime(int num){
    for (int i = 2; i*i <= num; i++)
    {
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
 }


void solve(int n ){
    int res;
    bool next = 1;
    for (int i = n; i >= n/2-1; i--)
    {
        if(isprime(i)&& isprime(n-i)&& (n-i) != 1){
            res = i;
            break;
        }
        
    }

    cout << n-res << " + " << res;



}



int main (){
    int n =1;
    cin >> n;
    while(n){
        
        cout <<  n  << " = ";
        solve(n);
        cout << endl;
        cin >> n;
    }


    return 0;
}
