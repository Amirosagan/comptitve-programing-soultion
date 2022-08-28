#include <bits/stdc++.h>

using namespace std;

#define ll long long



void solve(vector<vector<char>> arr , int r , int c){
        if(r == 1 || c == 1){
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if(arr[i][j] == '^' ){
                        cout << "Impossible";
                        return ;
                    }
                }
                
            }
            cout << "Possible\n";
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << '.';
                }
                cout << endl;
            }
            


            
            }else{
            cout << "Possible\n";
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    cout << '^';
                }
                cout << endl;
            }
            }


}



int main () {
    //  freopen("input.txt" , "r" , stdin);
    //  freopen("output.txt" , "w" , stdout);
    int t;
    cin >>t ;
    for (int test = 0; test < t; test++)
    {
        int r , c;
        cin >> r >> c;
        vector<vector<char>> arr(r,vector<char>(c));
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> arr[i][j];
            }
            
        }
        
        
        cout << "Case #" << test+1 << ": ";
        solve(arr , r ,c);
        cout <<"\n" ;
    }
    





    return 0;
}