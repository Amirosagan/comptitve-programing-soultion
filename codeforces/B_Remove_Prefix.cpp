#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int arr[n] ;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

        }
        int res = 0;
        unordered_map<int,int> umap;
        for (int i = n-1; i >= 0; i--)
        {
            if(umap.find(arr[i]) == umap.end()){
                umap[arr[i]] = arr[i];
            }
            else{
                res = i;
                res ++;
                i=0;

            }
        }
        cout << res <<endl;
        
    }
    return 0;
}