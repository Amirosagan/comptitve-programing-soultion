#include <bits/stdc++.h>

#define ll long long

using namespace std;







int main () {
    string s;
    cin >> s;
    sort(s.begin() , s.end());
    set<string> strings;
    
    do
    {
        strings.insert(s);
    } while (next_permutation(s.begin() , s.end()));
    cout << strings.size() << endl;

    for(auto ss : strings)
        cout << ss << endl;
    
    


    return 0;
}