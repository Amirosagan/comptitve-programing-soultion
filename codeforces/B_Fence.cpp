#include  <bits/stdc++.h>

using namespace std;





int main () 
{
    int n , k ;
    cin >> n >> k;
    int arr[n+2] = {0};
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(i)
            arr[i] += arr[i-1];
    }
    int ans , min_width = INT32_MAX-2;
    for (int i = 0; i <= n-k; i++)
    {
        long sum = 0;
        if(i)
        {
            sum = arr[i+k-1] - arr[i-1];
        }else
        {
            sum = arr[i+k-1];
        }

        
        if(sum < min_width)
        {
            min_width = sum;
            ans = i+1;
        }
    }
    
    
    cout << ans;
    return 0;

}