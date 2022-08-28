#include <bits/stdc++.h>
using namespace std;

struct st
{
    int first;
    int second;
};



int main(){
    int n;
    cin >> n;
    int max_ = 0;
    int min_ = INT32_MAX;
    st arr[n] ;
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i].first;
        cin >> arr[i].second;
        min_ = min(min_,arr[i].first);
        max_ = max(max_,arr[i].second);
    }
    for (int i = 0; i < n; i++)
    {
        if(min_ == arr[i].first && max_ == arr[i].second){
            cout << i+1;
            return 0;
        }
    }
    
    cout << -1;
}