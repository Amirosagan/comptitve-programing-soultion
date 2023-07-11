#include<bits/stdc++.h>
using namespace std;

int main () {
  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;
    int ans = n;
    for(int i = 0; i < n; i++)
    {
      pair<int,int> temp;
      cin >> temp.first >> temp.second;
      if(temp.first <= temp.second)
      {
        ans --;
      }
    }

    cout << ans << endl;
  }
}