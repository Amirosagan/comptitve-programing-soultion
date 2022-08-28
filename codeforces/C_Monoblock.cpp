
#include <bits/stdc++.h>

#define all(S) S.begin(),S.end()

#define ll long long

using namespace std;

int main () {
    int n , q;
    cin >> n >> q;
    int nums[n] ;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    while(q--){
        int l,x ;
        cin >> l >> x;
        int new_nums[n] ;
        for (int i = 0; i < n; i++)
        {
            new_nums[i] =nums[i];
        }
        
         new_nums[l-1] = x;
        int sum = 0;
        int cont[n];
        
        bool first = 1;
        for (int i = 1; i < n; i++)
        {
            if(new_nums[i] != new_nums[i-1]){
                if(first == 0)
                    sum --;
                sum ++;
                cont[i-1] = sum;
                first = 1;
            }
            else{
                if(first){
                    sum ++;
                    first = 0;
                }
                    
                cont[i-1] = sum;
            }
        }
        if(first == 0)
            sum --;
        sum ++;
        cont[n-1] = sum;
        for (int i = 0; i < n; i++)
        {
            cout << cont[i] << " ";
        }
        ll answer = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {

                if( i == 0){
                    answer += cont[j];
                }else 
                answer += cont[j]-cont[i-1];
                cout << answer << " ";
            }
            
        }
        cout << answer;


        cout << endl;
        
    }
    

    
}