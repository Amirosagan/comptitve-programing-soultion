 #include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(vector<int> arr , int n ,int m,ll sum)
{
    cout << sum%m;
    cout << endl;
}

int main () {
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        ll sum = 0;
        for (int i = 0; i < n; i++){
           cin >> arr[i];
            sum += arr[i];
        }
        

        cout << "Case #" << test+1 << ": ";
        solve(arr ,  n , m ,sum);
        
    }
    

    return 0;
}