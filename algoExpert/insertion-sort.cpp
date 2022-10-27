#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> array)
{
  for (int i = 1; i < array.size(); i++)
  {
    int j = i;

    while (j > 0 && array[j - 1] > array[j])
    {
      swap(array[j - 1], array[j]);
      j--;
    }
  }

  return array;
}
