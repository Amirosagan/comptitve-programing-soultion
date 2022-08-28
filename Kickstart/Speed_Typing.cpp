
#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solve() {
    string s1,s2;
    cin >> s1 >> s2;
    int pos = 0;
    int s1_size = s1.length();
    int s2_size = s2.length();
    int counter = 0;
    if(s1_size > s2_size){
        return "IMPOSSIBLE";
    }
    
    for (int i = 0; i < s1.length(); )
    {
        if(pos < s2_size && s1[i] == s2[pos]){
            pos++;
            i++;
        }
        else{
            pos++;
            
            if(pos >= s2_size && i < s1_size)
                return "IMPOSSIBLE";
        }
    }
    
    

    return to_string(s2_size-s1_size);
}

int main() {
  int testcases;
  cin >> testcases;
  

  for (int t = 1; t <= testcases; ++t) {
    cout << "Case #" << t << ": " << solve() <<   "\n";
  }
  return 0;
}
