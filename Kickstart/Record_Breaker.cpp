#include <bits/stdc++.h>

#define ll long long 

using namespace std;

bool isbig(vector<int> &arr , int end , int val){
    for (int i = 0; i <= end; i++)
    {
        if(val <= arr[i]){
            return 0;
        }
    }
    return 1;
}

void solve(vector<int> arr , int n)
{
    if(n == 1){
        cout << 1;
        return ;
    }
    int counter = 0;
int pig = arr[0];
    if(arr[1] < arr[0]){
        counter ++;
        pig = arr[0];
    }
    
    for (int i = 1; i < n-1; i++)
    {
        if(pig < arr[i]&& arr[i] > arr[i+1]){
            counter ++;
            pig = arr[i];
            
        }
    }
    if(pig<arr[n-1]){
        counter ++;
    }

    cout << counter;


}


int main () {
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Case #" << test+1 << ": ";
        solve(arr, n);
        cout << endl;


        
    }
    


    return 0;
}