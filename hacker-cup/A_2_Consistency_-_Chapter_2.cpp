#include <bits/stdc++.h>
// not solved 
using namespace std;

#define ll long long 

const int INF = int(1e9) + 9;


const int ALFA =26;
const char min_CHAR = 'A';


vector<vector<int>> dist;

bool isval (string s){
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] != s[i-1])
            return 0;
    }
    return 1;
}

void solve(string s){
    for (int i = 0; i < ALFA; i++)
    {
        dist[i][i] = 0;
    }

    for (int k = 0; k < ALFA; k++)
        for (int i = 0; i < ALFA; i++)
            for (int j = 0; j < ALFA; j++)
                dist[i][j] = min(dist[i][j],dist[i][k] + dist[k][j]);


    ll bost = INF;

    for (int i = 0; i < ALFA; i++)
    {
        ll sum = 0;

        for(auto c : s){
            sum += dist[c-min_CHAR][i];
        }

        bost = min(bost,sum);

    }
    
            
    if(bost < INF){
        cout << bost;
    }else{
        cout << -1;
    }
    
}




int main (){
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        dist.assign(ALFA , vector<int>(ALFA , INF));
        
        string s;
        cin >> s;
        int n ;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            
            string ss;
            cin >> ss;
            dist[ss[0] - min_CHAR][ss[1] - min_CHAR] = 1;
            
        }
        cout << "Case #" << test << ": " ;

        solve(s);
        cout << endl;
    }
    



    return 0;
}