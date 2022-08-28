#include <bits/stdc++.h>

using namespace std;


int main()
{
    char s1[100005],s2[100005],a[2],b[2];
    int l1,l2,i,j=0,cnt=0;
    cin>>s1>>s2;
    l1=strlen(s1);
    l2=strlen(s2);
    if(l1!=l2){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        for(i=0;i<l1;i++){
            if(s1[i]!=s2[i]){
                cnt++;
                a[j]=s1[i];
                b[j]=s2[i];
                j++;
                if(cnt>2){
                   cout<<"NO"<<endl;
                   return 0;
                }
            }
        }
    }
    if(a[1]==b[0]&&a[0]==b[1]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}