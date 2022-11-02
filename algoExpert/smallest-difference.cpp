#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo)
{
  sort(arrayOne.begin(), arrayOne.end());
  sort(arrayTwo.begin(), arrayTwo.end());
  int num1, num2;
  int Min = INT32_MAX;
  int i = 0, j = 0;
  while (i < arrayOne.size() && j < arrayTwo.size())
  {
    int first = arrayOne[i];
    int second = arrayTwo[j];
    int current;
    if (first < second)
    {
      current = abs(first - second);
      i++;
    }
    else if (second < first)
    {
      current = abs(first - second);
      j++;
    }
    else
    {
      return {first, second};
    }

    if (current < Min)
    {
      Min = current;
      num1 = first;
      num2 = second;
    }
  }

  return {num1, num2};
}

// -1 3 5 10 20 28
// 15 17 26 134 135