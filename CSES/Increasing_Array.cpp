#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    int n ;
    cin >> n;
    ll preves ;
    ll answer = 0;
    cin >> preves;
    for (int i = 1; i < n; i++)
    {
        ll num;
        cin >> num;
        if(preves > num){
            answer += (preves - num);
            num = preves;
        }
        preves = num;
    }
    

    cout << answer;

    return 0;
}