#include <bits/stdc++.h>
using namespace std ;

#define ll long long  


#define ld long double


#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


// #include <bits/stdc++.h>

// #define ll long long

// using namespace std;

// const ll MOD = 1000000007;

// ll MO(ll num1 ){
//     if(num1 >=0){
//         return num1%MOD;
//     }else{
//         if(-num1 > MOD){
//             return 0;
//         }else{
//             return MOD + num1;
//         }
//     }
    
// }

// void solve(){
//     int n, q;
//     cin >> n ;
//     ll x_2 = 0;
//     ll y_2 = 0;
//     ll _2x = 0;
//     ll _2y = 0;
//     // cout << MO(1000000007);
//     for (int i = 0; i < n; i++)
//     {
//         int x , y;
//         cin >> x >> y;
//         x_2 = (((x*x)%MOD)+x_2)%MOD;
//         y_2 = (((y*y)%MOD)+y_2)%MOD;
//         _2x = (((2*x)%MOD)+_2x)%MOD;
//         _2y = (((2*y)%MOD)+_2y)%MOD;
//     }
//     // cout << x_2 << " " << y_2 << " "<<  _2x << " "<< _2y;
//     cin >> q;
//     ll ans = 0;
//     for (int i = 0; i < q; i++)
//     {

#define yen(fee,yes,no) if(fee) {cout<<yes<<'\n';} else {cout<<no<<'\n';}


int main ()
{
     freopen("input.in", "r", stdin);
     freopen("output.text", "w", stdout);
    fast
    ll t,it=1;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>arr1(n),arr2(n);
        for (ll i = 0; i <n ; ++i)
            cin>>arr1[i];
        
        for (ll i = 0; i <n ; ++i)
            cin>>arr2[i];
        
        cout<<"Case #"<<it<<": ";

         if((arr1!=arr2&&k==0)||(arr1==arr2&&k==1)||(arr1!=arr2&&n==2&&k%2==0)||(arr1==arr2&&n==2&&k%2!=0))
            cout<<"NO\n";
        // or (ll i = 0; i <n ; ++i)
        //     cin>>arr2[i];
        
        // cout<<"Case #"<<it<<": ";

        //  if((arr1!=arr2&&k==0)||(arr1==arr2&&k==1)||(arr1!=arr2&&n==2&&k%2==0)||(arr1==arr2&&n==2&&k%2!=0))
        //     cout<<"NO\n";
        
        // else
        else
        {
            map<ll,ll>mp;
            bool f= true;
            for (ll i = 0; i <n ; ++i)
            {
                if(i==(n-1))
                    mp[arr2[i]]=arr2[0];
                else
                    mp[arr2[i]]=arr2[i+1];
                
            }
            for (ll i = 0; i <n ; ++i)
            {
                if(i==(n-1))
                {
                    if(mp[arr1[i]]!=arr1[0])
                    {
                        f= false;
                        break;
                    }
                }
                else
                {
                    if(mp[arr1[i]]!=arr1[i+1])
                    {
                        f= false;
                        break;
                    }
                }
            }
            yen(f,"YES","NO");
        }
        it+=1;
    }
    return 0;
}