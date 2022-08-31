#include <bits/stdc++.h>

#define ll long long 

using namespace std;

int main () {
    int n ;
    cin >> n;
    unordered_map<int ,int > umap;

    vector<int> bot(n);
    vector<int> bot_open(n);

    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> bot[i] >> bot_open[i];
    }
       int count  = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if( i != j){
                if(bot_open[j] == bot[i]){
                    count --;
                    break;
                }
            }
        }
        
    }
    
    
    cout << count;


    return 0;
}