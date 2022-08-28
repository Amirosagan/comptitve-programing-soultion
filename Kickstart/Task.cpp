
#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solve() {
    string s;
    cin >> s;
    int sum {0};
    for (int i = 0; i < s.length(); i++)
    {
        sum+=((s[i] - 48)%9);
    }
    int res = 9-sum;

    
    
    if(sum > 9){
        sum = ((sum%9)%9)%9;
    }

    res = (9-sum)%9;
    string ans = "";
    vector<string> v;
    
    if(res == 0)
    {
        for (int i = 1; i < s.length(); i++)
    {
        
             v.push_back((s.substr(0,i) + to_string(res) + s.substr(i,s.length()-i)));
        
    }
    }else{
        for (int i = 0; i < s.length(); i++)
    {
        
             v.push_back((s.substr(0,i) + to_string(res) + s.substr(i,s.length()-i)));
        
    }
    }

    
    

    
        v.push_back((s+ to_string(res)));

        sort(v.begin(),v.end());


        return (v[0]);
    
    

}

int main() {
  int testcases;
  cin >> testcases;
  

  for (int t = 1; t <= testcases; ++t) {
    cout << "Case #" << t << ": " << solve() <<   "\n";
  }
  return 0;
}
