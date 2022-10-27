#include <bits/stdc++.h>

using namespace std;

bool is_seme (string s)
{
    if(s.length() % 2 != 0){
        for (int j = 0; j < s.length(); j++)
        {
            string news = s;
            news.erase(j,1);
            unordered_map<char,int> umap;
            bool asn = true;
            for (int i = news.length()/2; i < news.length(); i++)
            {
                if(umap.find(news[i]) == umap.end()){
                    umap[news[i]] = 0;
                }else{
                    umap[news[i]] ++;
                }
            }
            for (int i = 0; i < news.length()/2; i++)
            {
                if(umap.find(news[i]) == umap.end()){
                    asn = false;
                    break;
                }else{
                    if(umap[news[i]] > 1){
                        umap[news[i]] --;
                    }else{
                        umap.erase(umap.find(news[i]));
                    }
                }
                
            }
            
            if(asn == true){
                
                return 1;
            }   
        }
        



    }else{
        return 0;
    }
    return 0;
}

int solve() {
    int n;
    string s;
    cin >> s  >>n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int f , t;
        cin >> f >> t;
        string ss = s.substr(f-1 , t-f+1);
        ans += is_seme(ss);
    }
    
    return ans;

}

int main () {
    freopen("input.in" , "r" , stdin);
    freopen("output.text","w", stdout);
    int t;
    cin >> t;
    for (int test  = 0; test  < t; test ++)
    {
        int ans = solve();
        cout << "Case #" << test + 1 << ": " << ans << endl;
    }
    


    return 0;
}