#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main () {
    int t;
    cin >>t;

    while(t--){
        int n;
        ll sum = 0;
        cin >> n;
        string dir ;
        cin >> dir;
        int sums[n];
        for (int i = 0; i < n; i++)
        {
            if(dir[i] == 'L'){
                sums[i] = i;
            }else{
                sums[i] = n-i-1;
            }
            sum += sums[i];
        }
        set<ll> after_sum;
        ll summ = sum;
        for (int i = 0 , j = n-1; i < n/2 || j >= n/2; i++ , j --)
        {
            if(dir[i] == 'L'){
                summ += ((n-i-1) - sums[i] );
                
            }
            after_sum.insert(summ);
            if(dir[j] == 'R'){
                summ += ((j) - sums[j]);
                
            }
            after_sum.insert(summ);
        }
        
        vector<ll> ans;
        for(auto val : after_sum){
            ans.push_back(val);
        }
        while(ans.size() < n){
            ans.push_back(ans.back());
        }
        for(auto val : ans)
            cout << val << " ";
        cout << endl;
    }



    return 0;
}