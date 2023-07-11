#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main () {
  int n , m;
  cin >> n >> m;
  vector<int> dist(n + 1, INF);
  vector<vector<pair<int, int>>> graph(m + 1);

  for (int i = 0; i < m; i++) {
    int u , v , w;
    cin >> u >> v >> w;
    graph[u].push_back({v, w});
  }

  dist[1] = 0;

  set<pair<int, int>> s;
  s.insert({0, 1});

  while(!s.empty())
  {
    auto x = *(s.begin());
    s.erase(x);
    for(auto it : graph[x.second])
    {
      if(dist[it.first] > dist[x.second] + it.second)
      {
        s.erase({dist[it.first], it.first});
        dist[it.first] = dist[x.second] + it.second;
        s.insert({dist[it.first], it.first});
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << dist[i] << " ";
  }

}