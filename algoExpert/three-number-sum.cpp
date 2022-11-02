#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum)
{
  unordered_map<int, int> umap;
  set<vector<int>> ans;

  for (auto value : array)
    umap[value] = value;

  for (int i = 0; i < array.size(); i++)
  {
    int a = array[i];

    for (int j = 0; j < array.size(); j++)
    {
      if (j != i)
      {
        int b = array[j];

        int c = targetSum - a - b;
        if (umap.find(c) != umap.end() && c != a && c != b)
        {
          vector<int> cont = {a, b, c};
          sort(cont.begin(), cont.end());
          ans.insert(cont);
        }
      }
    }
  }

  vector<vector<int>> last_ANS;
  for (auto val : ans)
  {
    last_ANS.push_back(val);
  }

  return last_ANS;
}

// a + b + c = targetSum
// sample TEST = {12, 3, 1, 2, -6, 5, -8, 6}


// sort TEST = {-8 , -6 , 1 , 2 , 3 , 5 , 6 , 12}