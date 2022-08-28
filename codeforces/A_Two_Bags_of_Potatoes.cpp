#include <bits/stdc++.h>

#define ll long long


using namespace std;


int main () {
    int y , k , n;
    cin >> y >> k >> n;

    int x = 1;
    vector<int> ans;
    for ( int i = 1; x+y <= n; i++)
    {
        if(i*k >= x+y){
            x = (k*i) - y;
            ans.push_back(x);
        }
    }
    

    if(!ans.empty())
        ans.pop_back();

    if(ans.empty()){
        cout << -1;
    }else{
        
        for(auto v : ans)
            cout << v << " ";
    }

    return 0;
}