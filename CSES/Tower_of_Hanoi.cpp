#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;


#define ll long long

using namespace std;
typedef tree<int,null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> indexed_set;



vector<pair<int,int>> v;

void move(int num , int n1 , int n3 , int n2){
    if(num > 0){
        move(num -1 , n1,n2,n3);
        v.push_back({n1 , n3});
        move(num-1 , n2,n3,n1);
    }


}


int main () {
    int n;
    cin >> n;
    indexed_set s;
        
    move(n , 1 ,3,2);
    cout << v.size() << endl;
    for(auto vv : v){
        cout<< vv.first << " " << vv.second;
        cout <<endl;
    }


    return 0;
}