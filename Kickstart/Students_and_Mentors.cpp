#include <bits/stdc++.h>

using namespace std;

#define ll long long

struct st{
    int first;
    int second;
};

int stu[100000];


 bool sortted(st firsti1 , st firsti2){
    return firsti1.first < firsti2.first;
 }

void solve(int n ){
    vector<int> sort_stu(stu,stu+n);

    sort(sort_stu.begin(),sort_stu.end());

    for (int i = 0; i < n; i++)
    {
        auto it = upper_bound(sort_stu.begin(),sort_stu.end(),2*stu[i]);
        
        
            it--;
            if(*it != stu[i]){
                cout << *it << " ";
            }else if(it == sort_stu.begin()){
                cout << -1 << " ";
            }else{
                it--;
                cout << *it<< " ";
            }
            
        
    }
    
    
}



int main () {
    int t;
    cin >> t;
    for (int test = 1; test <= t; test++)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> stu[i];
        }
        
        cout <<"Case #" << test << ": " ;
        solve(n);
        cout << "\n";
    }
    
}