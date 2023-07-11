#include <bits/stdc++.h>

using namespace std;


int db(string s1, string s2, int index  , int ans = 0)
{
  if(index == s1.size())
    return ans;
  if(s2[index] == '1')
  {
    if(index > 0 && s1[index-1] == '1')
    {
      ans ++;
      s1[index-1] = 'x';
    }
    else if(s1[index] == '0')
    {
      ans ++;
      s1[index] = 'x';
    }
    else if(index < s1.size()-1 && s1[index+1] == '1')
    {
      ans ++;
      s1[index+1] = 'x';
    }
  }

  return db(s1, s2, index+1, ans);
}


int main () {
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    cout << db(s1, s2, 0) << endl;
  }
}


// int main () {
//   int t;
//   cin >> t;
//   while(t--)
//   {
//     int n;
//     cin >> n;
//     string s1, s2;
//     cin >> s1 >> s2;
//     int ans = 0;
//     for(int i = 0 ; i < n ; i ++)
//     {
//       if(s2[i] == '1')
//       {

//         if(i > 0 && s1[i-1] == '1'  )
//         {
//           ans ++;
//           s1[i-1] = 'x';
//         }
//         else if(s1[i] == '0')
//         {
//           ans ++;
//           s1[i] = 'x';
//         }
//         else if(i < n-1 && s1[i+1] == '1')
//         {
//           ans ++;
//           s1[i+1] = 'x';
//         }
        
//       }
//     }
//     cout << ans << endl;
//   }
// }