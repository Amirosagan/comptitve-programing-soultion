//solved with Amir Elsagan


#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
    string s;
    cin >> s;
    int arr[255];
    memset(arr , 0 , sizeof(arr));
    if(s.size() % 2 == 0){
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i]] ++;
        }
        string sss;
        for (int i = 0; i < 255; i++)
        {
            if(arr[i] % 2 == 0 ){
                int rep = arr[i] /2;
                arr[i] = arr[i] /2;
                for (int j = 0; j < rep; j++)
                {
                    sss.push_back((char)i);
                }
                
            }else{
                cout << "NO SOLUTION";
                return 0;
            }
        }
        cout << sss;
        for (int i = 255-1; i >= 50; i--)
        {
                int rep = arr[i] ;       
                for (int j = 0; j < rep; j++)
                {
                    cout << (char)i;
                }
                
        }
        

        
    }else{
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i]] ++;
        }
        char cc = '?';
        int num = 0;
        string sss;
        for (int i = 0; i < 255; i++)
        {
            if(arr[i] % 2 == 0 ){
                int rep = arr[i] /2;
                arr[i] = arr[i] /2;
                for (int j = 0; j < rep; j++)
                {
                    sss.push_back((char)i);
                }
                
            }else{
                if( cc == '?'){
                    cc = (char)i;
                    num = arr[i];
                    arr[i] = 0;
                }else{
                    cout << "NO SOLUTION";
                    return 0;
                }
            }

        }
        cout << sss;
        if(cc != '?'){
            while(num --){
               cout << (char) cc;
            }
        }
        for (int i = 255-1; i >= 50; i--)
        {
                int rep = arr[i] ;       
                for (int j = 0; j < rep; j++)
                {
                    cout << (char)i;
                }
                
        } 

    }
    return 0;
}