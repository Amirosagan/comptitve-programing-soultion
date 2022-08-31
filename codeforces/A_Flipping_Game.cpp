#include <bits/stdc++.h>

using namespace std;

#define ll long long

int counter1(vector<int> &arr, int l , int n){
    int count = 0;
    for ( int i = l; i <= n; i++)
    {
        if(arr[i])
            count ++;
    }

    return count;
    
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum  = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum+= arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        
        for (int j = i; j < n; j++)
        {
            vector<int> arr2 = arr;
            for (int k = i; k <= j; k++)
            {
                arr2[k] = 1 - arr2[k];
            }
            



            int sum2 = counter1(arr2,0,n-1);

            res = max(sum2,res);
            
        }
        
    }
    
    if(sum == 0){
        cout << n;
    }
    else if(sum == res){
        cout << 0;
    }else{
        cout << res;
    }
    

    return 0;
}