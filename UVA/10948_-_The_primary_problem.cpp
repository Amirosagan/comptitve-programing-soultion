#include <bits/stdc++.h>

using namespace std;
#define ll long long  
#define FileIn(file) freopen(file".inp", "r", stdin)
#define FileOut(file) freopen(file".out", "w", stdout)
#define FOR(i, a, b) for (int i=a; i<=b; i++)
#define REP(i, n) for (int i=0; i<n; i++)
#define Fill(ar, val) memset(ar, val, sizeof(ar))
#define PI 3.1415926535897932385
#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define bit(n) (1<<(n))
#define Last(i) (i & -i)
#define INF 500000000
#define maxN 1000001


bool isP[maxN];
vector<int> prime;
int n, x;

void Sieve() {
    Fill(isP, true);
    isP[0] = isP[1] = false;
    for (int i=4; i<maxN; i+=2) isP[i] = false;
    for (int i=3; i*i<maxN; i+=2)
        if (isP[i]) for (int j=i*i; j<maxN; j+=i+i)
            isP[j] = false;
    prime.pb(2);
    for (int i=3; i<maxN; i+=2)
        if (isP[i]) prime.pb(i);
}

bool Check() {
    if (n%2 || n==4) {
        x = 2;
        return isP[n-x];
    }
    for (int i=1; i<prime.size() && prime[i]<=n/2; i++)
        if (isP[n - prime[i]]) {
            x = prime[i];
            return true;
        }
    return false;
}

main() {
 //   FileIn("test"); FileOut("test");
    Sieve();
    while (scanf("%d", &n) && n) {
        printf("%d:\n", n);
        if (Check()) printf("%d+%d\n", x, n-x);
        else puts("NO WAY!");
    }
}
