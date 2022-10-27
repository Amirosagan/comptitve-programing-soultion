#include<bits/stdc++.h>
using namespace std;

string runLengthEncoding(string str){
    int count = 1;
    string ans = "";
    for(int i  = 1 ; i < str.length(); i++){
        char prev = str[i-1];
        char curr = str[i];
        if(prev != curr || count == 9){
            ans.push_back(to_string(count)[0]);
            ans.push_back(prev);
            count = 0;
        }
        count ++;
    }
     ans.push_back(to_string(count)[0]);
    ans.push_back(str.back());

    return ans;
}