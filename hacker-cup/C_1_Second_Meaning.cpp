#include <bits/stdc++.h>

#define ll long long

using namespace std;

// not solved yet
void resolve(){
    
}



void solve (string s,int n ){
    vector<string>res;
    string ss;
    for (int i = 0; i < n; i++)
    {
        ss.push_back('.');
    }
        
    for (int i = 0; i < n; i++)
    {
        string news =ss;
        for (int j = i+1; j < n; j++)
        {
            news[j]='-';
        }
        res.push_back(news);
    }
    n--;
    while(n){
        if(s != res.back()){
            cout << res.back();
            cout << "\n";
            n--;
        }
        res.pop_back();
    }
    


}











int main () {
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int N ;
        cin >> N;
        string s;
        cin >> s;
        cout << "Case #" << test+1 << ":";
        cout << "\n";
        solve(s , N);
        
    }
    





    return 0;
}