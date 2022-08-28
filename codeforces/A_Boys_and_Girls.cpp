#include <bits/stdc++.h>

#define ll long long


using namespace std;

int main () {
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    int n , m;
    char greater , less;
    cin >> n >> m;
    if(n < m){
        greater = 'G';
        less = 'B';
        swap(n ,m);
    }else{
        greater = 'B';
        less = 'G';
    }
        
    int i =0;
    while(n && m){
        if(i % 2 == 0){
            cout << greater;
            n--;
        }else{
            cout << less;
            m--;
        }
        i++;
    }
    while(n){
        cout << greater;
        n--;
    }
    while(m){
        cout << less;
        m--;
    }

    
    return 0;
}