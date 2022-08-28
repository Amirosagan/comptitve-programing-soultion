#include <bits/stdc++.h>

using namespace std;

#define ll long long

int arr[101];

void solve(int n ,int k){
    if(k*2 < n){
        cout << "NO";
        return ;
    }

    for (int i = 0; i < 101; i++)
    {
        if(arr[i] > 2){
            cout << "NO";
            return ;
        }
    }
    
    cout << "YES";


}



int main () {
    int t;
    cin >>t ;
    for (int test = 0; test < t; test++)
    {
        memset(arr , 0 , sizeof(arr));
        int n , k ;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            arr[num] ++;
        }
        cout << "Case #" << test+1 << ": ";
        solve(n , k);
        cout <<"\n" ;
    }
    





    return 0;
}