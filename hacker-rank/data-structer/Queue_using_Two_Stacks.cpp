#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    int q, x, t;
    stack<int> first, second;
    
    cin>>q;
    while(q--){
        cin>>x;
        if(x == 1){
            cin>>t;
            second.push(t);
        }
        else{
            if(first.empty())
                while(!second.empty()){
                    first.push(second.top());
                    second.pop();
                }
            if(x == 2) first.pop();
            else cout<<first.top()<<endl;
        }
    }   
    return 0;
}