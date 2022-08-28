
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <utility>

using namespace std;

int main()
{
    string g;
    cin >> g;
    float len = size(g);
   
    for (int i = 0; i < ceil(len); i+=2)
    {

        for (int j = 0; j < ceil(len); j+=2)
        {
            if (g[i] < g[j])
            {
                swap(g[i], g[j]);
            }

        }
        

    }
    cout << g;
    
}

