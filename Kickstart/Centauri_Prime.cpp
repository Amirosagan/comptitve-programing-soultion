
#include <bits/stdc++.h>

using namespace std;

string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler;
  int arr[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
  bool isVowles = false;


  for (int i = 0; i < 10; i++)
  {
    if(kingdom.back() == arr[i])
      isVowles = true;
  }
  if(kingdom.back() == 'y' || kingdom.back() == 'Y')
    ruler = "nobody";
  else if(isVowles)
    ruler = "Alice";
  else
    ruler = "Bob";

    

  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}
