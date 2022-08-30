#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool comp(pair<int,int> f , pair<int,int>s){
    if()
}

int main () {
    int t;
    cin >>t;
    while(t--){
        int n , q;
        cin >> n >> q;
        vector<pair<int,int>> reg(n);
        for (int i = 0; i < n; i++)
        {
            cin >> reg[i].first >> reg[i].second;
            
        }
        sort(reg.begin() , reg.end());
        
        for (int i = 0; i < q; i++)
        {
            ll res = 0;
            int hs , ws , hb , wb;
            cin >> hs >> ws >> hb >> wb;
            
                auto it = upper_bound(reg.begin() , reg.end() ,{hs,ws} , comp) - lower_bound(reg.begin() , reg.end() , {hb,wb});
                cout << *it;
                
            
            cout << res << endl;
        }
        
        

        
        
        

    }




    return 0;
}