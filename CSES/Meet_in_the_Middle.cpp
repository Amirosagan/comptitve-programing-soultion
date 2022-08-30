#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<ll> arr;
vector<ll> memo;

void solve(ll k, ll n, ll x, vector<ll> &sums1)
{
    if (k == n)
    {
        ll sum = 0;
        for (auto var : memo)
            sum += var;

        sums1.push_back(sum);
    }
    else
    {
        solve(k + 1, n, x, sums1);
        memo.push_back(arr[k]);
        solve(k + 1, n, x, sums1);
        memo.pop_back();
    }
}

int main()
{
    
    ll n, x;
    cin >> n >> x;
    arr.assign(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<ll> sums1, sums2;
    solve(0, (n / 2), x, sums1);

    solve((n / 2), n, x, sums2);
    sort(sums2.begin() , sums2.end());
    sort(sums1.begin() , sums1.end());
    ll ans = 0;
    //! debg code:
    // for(auto var : sums1)
    //     cout << var << " ";
    // cout << endl;
    // for(auto var : sums2)
    //     cout << var << " ";

    for (auto sum1 : sums1){
        if(sum1 > x)
            break;
         ans += upper_bound(sums2.begin() , sums2.end() , (x - sum1)) - lower_bound(sums2.begin() , sums2.end() , (x - sum1));      
    }
     
    cout << ans;

    return 0;
}