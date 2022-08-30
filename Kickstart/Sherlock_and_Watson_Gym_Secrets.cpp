#include <bits/stdc++.h>
using namespace std;



// not solved yet :(

#define ll unsigned long long int 

int const MOD = 1000000007;

ll fastpow(ll n, ll w)
{
    ll res = 1;
    while(w){
        if(w%2)
            res = (res*n)%MOD , w--;
        else
            n = (n*n)%MOD , w /= 2;
    }

    return res;
}

void solve(int a, int b, int n, int k)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j != i)
            {
                ll pounds = (fastpow(i, a) + fastpow(j, b)) % MOD;
                
                if (pounds % k == 0)
                {
                    count++;
                }
            }
        }
    }

    cout << count;
}

int main()
{
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        ll A, B, N, K;
        cin >> A >> B >> N >> K;

        cout << "Case #" << test << ": ";
        solve(A, B, N, K);
        cout << "\n";
    }
}