#include <bits/stdc++.h>

using namespace std;

#define ll long long

// not solved

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
                    cout << arr[i][j];
                }
                cout << endl;
            }
            

            
            
            }else{
                for (int i = 0; i < r; i++)
                {
                    for (int j = 0; j < c; j++)
                    {
                        int count = 0;
                        if( arr[i][j] == '^'){
                            
                            if(i != 0 && arr[i-1][j] == '#'){
                                count ++;
                            }
                            if(j != 0 && arr[i][j-1] == '#'){
                                count ++;
                            }
                            if(i != r-1 && arr[i+1][j] == '#'){
                                count ++;
                            }
                            if(j != c-1 && arr[i][j+1] == '#'){
                                count ++;
                            }
                            if(count > 2){
                                cout << "Impossible";
                                return ;
                            }else{
                                if(count == 1 &&((i == 0 && j == 0) || (i == 0 && j == c-1) || (i == r-1 && j == 0) || (i== r-1 && j == c-1))){
                                    cout << "Impossible";
                                    return ;
                                }
                                else if(count == 2 && (i == 0 || j == 0 || i == r-1 || j == c-1)){
                                    cout << "Impossible";
                                    return ;
                                }
                                
                            }
                        }
                        
                    }
                    
                }
                for (int i = 0; i < r; i++)
                {
                    for (int j = 0; j < c; j++)
                    {
                        int count = 0;
                        if( arr[i][j] != '#'){
                            
                            if(i != 0 && arr[i-1][j] == '#'){
                                count ++;
                            }
                            if(j != 0 && arr[i][j-1] == '#'){
                                count ++;
                            }
                            if(i != r-1 && arr[i+1][j] == '#'){
                                count ++;
                            }
                            if(j != c-1 && arr[i][j+1] == '#'){
                                count ++;
                            }
                            if(count > 2){
                                arr[i][j] = '.';
                            }else{
                                if(count == 1 && ((i == 0 && j == 0) || (i == 0 && j == c-1) || (i == r-1 && j == 0) || (i== r-1 && j == c-1))){
                                    arr[i][j] ='.';
                                }
                                else if(count == 2 && (i == 0 || j == 0 || i == r-1 || j == c-1)){
                                    arr[i][j] = '.';
                                }else{
                                    arr[i][j] ='^';
                                }
                                
                            }
                        }
                        
                    }
                    
                }
                cout << "Possible\n";
                for (int i = 0; i < r; i++)
                {
                    for (int j = 0; j < c; j++)
                    {
                        cout << arr[i][j] ;
                    }
                    cout <<endl;
                }
                
                
            }


}



int main () {
    // freopen("input.txt" , "r" , stdin);
    // freopen("output.txt" , "w" , stdout);
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