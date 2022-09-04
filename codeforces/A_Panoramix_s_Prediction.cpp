#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector<int> sieve(){
    int isprimes[52] ;
    memset(isprimes , 1 , sizeof(isprimes));

    isprimes[0] = isprimes[1] = 0;

    for (int i = 2; i*i < 51; i++)
    {
        if(isprimes){
            for (int j = i*i; j <= 51; j+=i)
            {
                isprimes[j] = 0;
            }
            
        }
    }
    vector<int> ans;
    for (int i = 0; i < 51; i++)
    {
        if(isprimes[i])
            ans.push_back(i);
    }
    return ans;

}



int main () {
    int n , m;
    cin >> n >> m;

    vector<int> primes = sieve();
    auto it = lower_bound(primes.begin() , primes.end() , n);
    it++;
    if(*it == m){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}