#include <bits/stdc++.h>

using namespace std;

unordered_map<int,vector<int>> adj;
unordered_map<int,bool> visited;

int main () {
  int n , m;
  cin >> n >> m;
  for(int i = 0 ; i < m ; i++)
  {
    int k ;
    cin >> k;
    int before = -1;
    for(int j = 0 ; j < k ; j++)
    {
      int x;
      cin >> x;
      x--;
      if(before != -1)
      {
        adj[before].push_back(x);
        adj[x].push_back(before);
      }else
      {
        before = x;
      }
    }
  }
  int ans[n];
  for(int i = 0; i< n ; i ++)
  {
      if(visited.find(i) == visited.end())
      {
        vector<int> compon;
        queue<int> q;
        q.push(i);

        while(!q.empty())
        {
          int node = q.front();
          q.pop();
          if(visited.find(node) != visited.end()) continue;
          compon.push_back(node);
          visited[node] = true;
          for(auto &i : adj[node])
          {
            if(visited.find(i) == visited.end())
            {
              q.push(i);
            }
          }
        }
        for(auto &i : compon)
        {
          ans[i] = compon.size();
        }
        
      }
  }
  for(int i = 0 ; i < n ; i++)
  {
    cout << ans[i] << " ";
  }

}