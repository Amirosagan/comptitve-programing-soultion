#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long

bool isprime(int n){
    if( n == 2)
        return 1;
    if( n == 0 || n==1)
        return  0;
    for (int i =2; i*i <= n; i++)
    {
        if(n % i ==0)
            return 0;
    }
    
    return 1;
}


void solve(int n){
    ll sum = 0;
    
    ll num =pow(2,n-1)*(pow(2,n) -1);
    
   
    if(isprime(n) && n != 11 && n != 23 && n != 29){
        cout << "Perfect: "<< num << "!";
        return ;
    }
    

    if(isprime(n)){
        cout << "Given number is prime. But, NO perfect number is available.";
    }else{
        cout << "Given number is NOT prime! NO perfect number is available.";
    }
    




}



int main (){
    int n;
    cin >> n;
    while(n){
        solve(n);
        cout << endl;

        cin >> n;
    }




    return 0;
}