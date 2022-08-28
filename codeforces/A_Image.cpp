#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        set<int> se;
        for (int i = 0; i < 2; i++)
        {
            string s;
            cin >>s;
            for(auto ss : s){
                se.insert((int)ss);
            }
            
        }
        if(se.size() == 1)
            cout << 0;
        else if(se.size() == 2)
            cout << 1;
        else if(se.size() == 3)
            cout << 2;
        else if(se.size() == 4)
            cout << 3;
        
        cout << "\n";


    }


    return 0;
}