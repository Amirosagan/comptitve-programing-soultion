#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
class textEditor
{
    string s;
    stack<string>slast;
    public:
    textEditor()
    {
        s="";
    }
    void append(string s)
    {
        slast.push(this->s);
        this->s+=s;
    }
    void del(int k)
    {
        slast.push(s);
        for(int i=s.length()-1;k--;i--)
        {
            s.erase(s.begin()+i);
        }
    }
    void print(int k)
    {
        cout<<s[k-1]<<endl;
    }
    void undo()
    {
        s=slast.top();
        slast.pop();
    }
};

int main() {
    textEditor obj;
    int q;
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        switch (t) {
        case 1:
        {
            string w;
            cin>>w;
            obj.append(w);
            break;
        }
        case 2:
        {
            int k;
            cin>>k;
            obj.del(k);
            break;
        }
        case 3:
        {
            int k;
            cin>>k;;
            obj.print(k);
            break;
        }
        case 4:
        {
            obj.undo();
        }
        }
    }  
    return 0;
}