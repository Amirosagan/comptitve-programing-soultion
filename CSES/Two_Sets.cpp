#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    ll n ;
    cin >> n;
    ll sum = n*(n+1)/2;
    set<ll, greater<ll>> s1,s2;
    if(sum % 2 != 0){
        cout << "NO";
        return 0;
    }
    ll target = sum /2;
    ll t = n;
    for (int i = 1; i <= n; i++)
    {
        s1.insert(i);
    }
    
    while(s1.count(target) == 0){
        target -= t;
        s1.erase(t);
        s2.insert(t);
        t --;        
    }
    s1.erase(target);
    s2.insert(target);
    cout << "YES\n";
    cout << s2.size() << "\n";
    for(auto s : s2)
        cout << s << " ";
    cout << endl;
    cout << s1.size() << "\n";
    for(auto s : s1)
        cout << s << " ";
    cout << endl;
    

return 0;
    

}