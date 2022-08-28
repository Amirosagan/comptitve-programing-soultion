#include <bits/stdc++.h>
#define ll long long

using namespace std;

unordered_map<char,bool> umap = {{'R',0}, {'Y',0}, {'B',0}};


void solve(int n, string s){

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'R'){
            if(!umap['R']){
                umap['R'] = 1;
                count ++;
            }
            umap['Y'] = 0;
            umap['B'] = 0;
        }
        else if(s[i] == 'Y'){
            if(umap['Y']){

            }else{
                umap['Y'] = 1;
                count ++;
                
            }

            umap['R'] = 0;
            umap['B'] = 0;
        } else if(s[i] == 'B'){
            if(umap['B']){

            }else{
                umap['B'] = 1;
                count ++;
                
            } 
            umap['R'] = 0;
            umap['Y'] = 0;
            }else if(s[i] == 'G'){
                if(!umap['Y']){
                    umap['Y'] = 1;
                    count ++;
                }
                if(!umap['B']){
                    umap['B'] = 1;
                    count ++;
                }

                umap['R'] = 0;
            } else if(s[i] == 'O'){
                if(!umap['Y']){
                    umap['Y'] = 1;
                    count ++;
                }
                if(!umap['R']){
                    umap['R'] = 1;
                    count ++;
                }
                umap['B'] = 0;
            }else if(s[i] == 'P'){
                if(!umap['B']){
                    umap['B'] = 1;
                    count ++;
                }
                if(!umap['R']){
                    umap['R'] = 1;
                    count ++;
                }
                umap['Y'] = 0;
            }else if(s[i] == 'A'){
                if(!umap['Y']){
                    umap['Y'] = 1;
                    count ++;
                }
                if(!umap['R']){
                    umap['R'] = 1;
                    count ++;
                }
                if(!umap['B']){
                    umap['B'] = 1;
                    count ++;
                }
                
            }else if(s[i] == 'U'){
                umap = {{'R',0}, {'Y',0}, {'B',0}};
            }

            
        }

        cout << count;
        
    }
    



int main () {
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        int n ;
        string s;

        cin >> n >> s;
         umap = {{'R',0}, {'Y',0}, {'B',0}};
        cout <<"Case #" << test << ": " ;

        solve(n,s);
        cout << "\n";
    }



    return 0;
}