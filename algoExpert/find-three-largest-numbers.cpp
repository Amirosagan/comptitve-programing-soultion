#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool is_not_in (int n , vector<int> arr){
    for(auto it : arr){
        
        if(n == it)
            return 0;
    }
    return 1;
}

vector<int> findThreeLargestNumbers(vector<int> array) {
    vector<int> ans;
    
    for (int i = 0; i < 3; i++)
    {
        ans.push_back(INT32_MIN);
        for(auto it : array){
            
            if(is_not_in(it , ans)){
                ans[i] = max(ans[i] , it);
            }
        }
        
    }

    sort(ans.begin() , ans.end());
    for (int i = 2; i >= 0; i--)
    {
        if(ans[i] == INT32_MIN){
            ans[i] = [i+1];
        }
    }
    

  return ans;
}

