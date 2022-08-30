#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector<string> per1(n),per2(n),per3(n);
        unordered_map<string,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> per1[i];
            if(mp.find(per1[i]) == mp.end()){
                mp[per1[i]] = 1;
            }else{
                mp[per1[i]] += 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> per2[i];
            if(mp.find(per2[i]) == mp.end()){
                mp[per2[i]] = 1;
            }else{
                mp[per2[i]] += 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> per3[i];
            if(mp.find(per3[i]) == mp.end()){
                mp[per3[i]] = 1;
            }else{
                mp[per3[i]] += 1;
            }
        }

        int sums = 0;
        for(auto s : per1){
            if(mp[s] == 1){
                sums += 3;
            }else if(mp[s] == 2){ 
                sums += 1;
            }
        }
        cout << sums << " ";
        sums = 0;
        for(auto s : per2){
            if(mp[s] == 1){
                sums += 3;
            }else if(mp[s] == 2){ 
                sums += 1;
            }
        }
        cout  << sums << " ";
        sums = 0;
        for(auto s : per3){
            if(mp[s] == 1){
                sums += 3;
            }else if(mp[s] == 2){ 
                sums += 1;
            }
        }
        cout << sums << " ";
        cout << endl;
    }



    return 0;
}