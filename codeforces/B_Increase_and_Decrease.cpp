#include <bits/stdc++.h>

#define ll long long

using namespace std;


int main () {
    int n ;
    cin >> n;
    int arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[n] ;

        sum+= arr[n];

    }
    if(sum % n != 0){
        cout << n-1;
    }else{
        cout << n;
    }

    
    
    


    
}