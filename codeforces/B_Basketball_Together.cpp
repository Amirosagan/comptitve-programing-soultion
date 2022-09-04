#include<bits/stdc++.h>

#define ll long long


using namespace std;


int main () {
    int n , d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end());
    int sizee = arr.size();
    int ans = 0;
    for (int i = arr.size()-1; i >= 0; i--)
    {
        int rem = floor((double)d/arr[i]);
        rem ++;
        if(rem <= sizee){
            sizee -= rem;
            ans++;
            
        }else{
            break;
        }
    }
    
    cout << ans;


    return 0;
}