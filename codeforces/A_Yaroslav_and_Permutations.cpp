#include <bits/stdc++.h>

using namespace std;
int main () {
    int n;
    cin >> n;
    int arr[1001] {0};
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[num] ++;
    }
    
    for (int i = 0; i < 1001; i++)
    {
        if(ceil((float)n/2) < arr[i]  )
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
    
}