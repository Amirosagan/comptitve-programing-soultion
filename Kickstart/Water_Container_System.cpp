#include<bits/stdc++.h>

using namespace std;

unordered_map<int,pair<int,int>> umap;

int arr[100000];

void gr(int ind = 1,int val = 1 ){
    arr[val] ++;
    if(umap.find(ind) == umap.end()){
        return;
    }
    if(umap[ind].first != -1){
        gr(umap[ind].first,val+1);
    }
    if(umap[ind].second != -1){
        gr(umap[ind].second,val+1);
    }
}

int solve(){
    int n , q;
    cin >> n >> q;
    memset(arr, 0 , sizeof(arr));
    for (int i = 0; i < n-1; i++)
    {   
        int ind , va;
        cin >> ind >> va;
        if(umap.find(ind) == umap.end()){
            umap[ind] = {va , -1};
        }else{
            umap[ind].second = va;
        }
    }
    
    for (int i = 0; i < q; i++)
    {
        int num ;
        cin >> num;
        
    }
    
    gr();
    int big = 0;
    int ans = 0;
    for (int i = 1; i < 65536; i++)
    {
        if(arr[i] == 0){
            break;
        }
        if(q >= arr[i]){
            q -= arr[i];
            ans += arr[i];
        }else{
            break;
        }
    }
    
    return ans;

    
}



int main (){
    int t;
    cin >>t;
    for (int test = 0; test < t; test++)
    {
        int ans = solve();
        cout << "Case #" << test  +1 << ": " << ans << "\n";
        
    }
    
}