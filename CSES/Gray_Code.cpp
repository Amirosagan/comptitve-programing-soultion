#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector<string> get_Code(int n){
    vector<string> actul;
    if(n == 1){
        actul.push_back("0");
        actul.push_back("1");
        return actul;
    }

    vector<string> prev = get_Code(n-1);

    for (int i = 0; i < (int)prev.size(); i++)
    {
        string s;
        s += "0";
        s += prev[i];
        actul.push_back(s);
    }

    for (int i = (int)prev.size()-1; i >= 0; i--)
    {
        string s;
        s += "1";
        s+= prev[i];
        actul.push_back(s);
    }
    
    
    return actul;


}


int main ( ){
    int  n ;
    cin >> n;
    vector<string> ans = get_Code(n);

    for(string s: ans){
        cout << s << "\n";
    }

    return 0;
}