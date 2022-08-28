#include <bits/stdc++.h>

using namespace std;

int main (){
    string s,s2;
    getline(cin , s);
    getline(cin , s2);
    int arr[255] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != ' ')
            arr[s[i]] ++;
    }
    
    for (int i = 0; i < s2.length(); i++)
    {
        if(arr[s2[i]] == 0 && s2[i] != ' '){
            
            cout << "NO";
            return 0;
        }
            
        if(s2[i] != ' ')
            arr[s2[i]] --;
    }
    
    cout << "YES";


    return 0;
}