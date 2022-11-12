#include<bits/stdc++.h>

using namespace std;

vector<int> spiralTraverse(vector<vector<int>> array) {
  if(array.empty())
    return {};
  vector<int> result = {};
  int startR = 0 , endR = array.size() - 1 , startC = 0 , endC = array[0].size() - 1;

  while (startR <= endR && startC <= endC)
  {
    for (int col = startC; col <= endC; col++)
      result.push_back(array[startR][col]);

    for (int row = startR + 1; row <= endR; row++)
      result.push_back(array[row][endC]);

    for (int col = endC-1; col >= startC; col--)
    {
      if(startR == endR)
        break;
      result.push_back(array[endR][col]);
    }
    for (int row = endR-1; row > startR; row--)
    {
      if(startC == endC)
        break;
      result.push_back(array[row][startC]);
    }
    startR ++ , endR --;
    startC ++ , endC --;  
  }

  return result;
}

/*
  0 , 1
  0 , 2
  0 , 3
  1 , 3
  2 , 3
  3 , 3
  2 , 3
  1 , 3
  0 , 3
  0 , 1
  0 , 2



*/

