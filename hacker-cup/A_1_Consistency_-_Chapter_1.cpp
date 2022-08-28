#include <bits/stdc++.h>

using namespace std;
char alphabets[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

bool isvoll(char max_char){
    
        if(max_char == 'A' || max_char == 'E' || max_char == 'I' || max_char == 'O' || max_char == 'U'){
            return 1;
        }
        return 0;
}

void solve (string s){
    int arr[255] ;
    memset(arr,1 , sizeof(arr));
    bool isdef = 0;
    arr[s[0]] ++;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i] != s[i-1])
            isdef = 1;
        arr[s[i]] ++;
    }

    char max_char ;
    int max_res= 0;

    for (int i = 0; i < 255; i++)
    {
        if(max_res < arr[i]){
            max_res = i;
            max_char = (char)i;
        }
    }
    int min_l = INT32_MAX;
    if(isdef){
        bool isvol = 0;
        if(max_char == 'A' || max_char == 'E' || max_char == 'I' || max_char == 'O' || max_char == 'U'){
            isvol = 1;
        }
        
        for (int j = 0; j < 26; j++)
        {
            int res = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if(s[i] != alphabets[j]){
                    if(isvoll(s[i])){
                        if(isvoll(alphabets[j])){
                            res += 2;
                        }else{
                            res ++;
                        }
                    }else{
                        if(isvoll(alphabets[j])){
                            res ++;
                        }else{
                            res +=2;
                        }
                    }
                        
                }
            }
            min_l = min(min_l,res);
        }
        
        cout << min_l;




    }else{
        cout << 0;
    }


    cout<<endl;
    
}



int main () {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        cout << "Case #" << i << ": ";
        solve(s);
    }
    
}