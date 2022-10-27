#include<bits/stdc++.h>

using namespace std;


int solve(){
    int n;
    cin >> n;
    vector<pair<string,int>> s_base;
    vector<pair<int,int>> num_base;
    for (int i = 0; i < n; i++)
    {
        string s;
        int d , u;
        cin >> s >> d >> u;
        s_base.push_back({s, u});
        num_base.push_back({d , u});
    }

    
    sort(s_base.begin(), s_base.end());
    sort(num_base.begin() ,num_base.end());

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if(num_base[i].second == s_base[i].second){
            ans ++;
        }
    }
    
    return ans;
    
}



int main () {
    int t ;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int ans = solve();
        cout << "Case #" << test +1  << ": " << ans << endl;

    }
    



    return 0;
}