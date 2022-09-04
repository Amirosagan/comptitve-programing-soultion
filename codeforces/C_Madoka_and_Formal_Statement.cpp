#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr1(n);
        vector<int> arr2(n);
        bool is = false;
        for (int i = 0; i < n; i++)
        {   
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            if((arr1[i] > arr2[i] || (arr2[i]-1) > arr2[i+1]) && arr1[i] != arr2[i]){
                cout << "NO";
                is = true;
                break;
            }
        }
        if((arr1[n-1] > arr2[n-1] || (arr2[n-1]-1) > arr2[0]) && arr1[n-1] != arr2[n-1]){
            if(!is){
                cout << "NO";
                is = true;
            }
        }
        if(!is){
            cout << "YES";
        }

        cout << endl;

        
    }



    return 0;
}