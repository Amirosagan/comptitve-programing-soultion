#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    int n ;
     cin >> n;
     if(n < 4 && n != 1){
        cout << "NO SOLUTION";
        return 0;
     }
     if(n == 4){
        cout << "2 4 1 3";
        return 0;
     }
     for (int i = n; i >= 1; i--)
     {
        if(i % 2 == 0){
            cout << i << " ";
        }   
     }
     for (int i = n; i >= 1; i--)
     {
        if(i % 2 != 0){
            cout << i << " ";
        }
     }
     
     return 0;
     
}