
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int h;
    int he[1000];
    int sum{ 0 };

    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        cin >> he[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (he[i] <= h)
        {
            sum++;
        }
        else if (he[i] > h)
        {
            sum += 2;
        }



    }
    cout << sum;



}

