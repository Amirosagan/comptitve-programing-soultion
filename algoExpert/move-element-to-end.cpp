#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove)
{
  int i = 0;
  int last = array.size() - 1;
  while (i < last)
  {
    while (i < last && array[last] == toMove)
    {
      last--;
    }
    if (array[i] == toMove)
    {
      swap(array[i], array[last]);
        }
    i++;
  }

  return array;
}
