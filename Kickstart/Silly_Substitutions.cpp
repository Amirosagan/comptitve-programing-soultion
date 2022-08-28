#include <bits/stdc++.h>
using namespace std;

#define ll long long

unordered_map<string , char > umap = {{"01" , '2'} , {"12" , '3'} , {"23" , '4'} , {"34" , '5'} , {"45" , '6' } , {"56" , '7'} , {"67" , '8'},{"78" , '9'},{"89", '0'},{"90" , '1'}};


void solve(int n , string s){
    for (int i = 0; i < s.size()-1; i++)
    {
        string val = s.substr(i,2);
        if(umap.find(val) != umap.end()){
                
                s.erase(i,2);
                s.insert(s.begin()+i,umap[val]);

            i = -1;
        }
        
    }
    

    cout << s;
    
}






int main () {
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        int n ;
        string s;

        cin >> n >> s;
         umap = {{"01" , '2'} , {"12" , '3'} , {"23" , '4'} , {"34" , '5'} , {"45" , '6' } , {"56" , '7'} , {"67" , '8'},{"78" , '9'},{"89", '0'},{"90" , '1'}};
        cout <<"Case #" << test << ": " ;

        solve(n,s);
        cout << "\n";
    }
    return 0;
}