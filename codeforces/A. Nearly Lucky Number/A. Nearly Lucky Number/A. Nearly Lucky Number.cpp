#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int count{ 0 };
    int l = n.length();
    
    for (int i = 0; i < l; i++)
    {

        if (n[i]=='4' || n[i]=='7')
        {
            count += 1;
        }

    }
    
    
     if (count == l && count !=1)
    {
        cout << "YES";
    }
  
    else
    {
        cout << "NO";
    }


}
