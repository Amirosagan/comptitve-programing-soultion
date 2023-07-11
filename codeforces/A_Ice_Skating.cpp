#include <bits/stdc++.h>

using namespace std;

set<pair<int,int>> s;

void dfs(vector<pair<int,int>> &v,int index , int ans = 0)
{
  s.insert(v[index]);
  for(int i = 0 ; i < v.size() ; i++)
  {
    if(s.find(v[i]) == s.end())
    {
      if(v[i].first == v[index].first || v[i].second == v[index].second)
        dfs(v,i);
    }
  }

  
}

int main () {
  int n;
  cin >> n;
  vector<pair<int,int>> v(n);

  for(auto &i : v) 
    cin >> i.first >> i.second;
    
  int ans = 0;

  for(int i = 0 ; i < n ; i++)
  {
    if(s.find(v[i]) == s.end())
    {
      ans++;
      dfs(v,i);

    }
  }
  cout << ans-1;

}