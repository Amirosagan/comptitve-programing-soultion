#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    string s;

    cin >> s;
    int maxim = 0;
    int count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i] == s[i-1]){
            count ++;
        }
        else{
            

            count = 1;
        }
        maxim=max(count,maxim);
    }
    maxim=max(count,maxim);
    cout << maxim;
    return 0;

}