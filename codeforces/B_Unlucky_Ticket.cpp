#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main () {
    int n ;
    string s;
    cin >> n >> s;
    sort(s.begin(), s.begin() + n);
    sort(s.begin()+n, s.end());
    int f = 0 , l = n;
    bool mm = false;

    if((int)s[f] > (int)s[l]){
        mm = true;
    }else if((int)s[f] < (int)s[l]){
        mm = false;
    }
    else if(s[f] == s[l]){
        cout << "NO";
        return 0;
    }


    l++;
    f++;
    while(l < n*2){
        if((int)s[f] < (int)s[l] && mm == true){
            cout << "NO";
            return 0;
        }
        if((int)s[f] > (int)s[l] && mm == false){
            cout << "NO";
            return 0;
        }
        if(s[f] == s[l]){
            cout << "NO";
            return 0;
        }
        



        l++;
        f++;
    }





    if(s.size() == 2 && s[0] == s[1]){
        cout << "NO";
        return 0;
    }
    


    cout << "YES";



    return 0;
}