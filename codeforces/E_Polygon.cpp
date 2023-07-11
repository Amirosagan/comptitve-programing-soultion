#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));

    for (auto &i : v)
    {
      for (auto &j : i)
      {
        char c;
        cin >> c;
        j = c - '0';
      }
    }

    for(int i = 0 ; i < v.size(); i ++)
    {
      for(int j = 0 ;  j < v[0].size(); j ++)
      {
        if(v[i][j] && (i != v.size() -1  && !v[i+1][j]) && (j != v[0].size() -1&& !v[i][j+1]))
        {
          cout << "NO" << endl;
          goto end;
        }
      }
    }

    cout << "YES" << endl;

    end: ;
  }
}