
#include <iostream>
#include <cmath>

using namespace std;

struct powers1
{
    int power[100];
    int Sum_Of_Power{ 0 };
};

int main()
{
   
    int n;

    cin >> n;
    powers1 gx = { 0 };
    powers1 gy = { 0 };
    powers1 gz = { 0 };
   
    for (int i = 0; i < n; i++)
    {
        cin >> gx.power[i] >> gy.power[i] >> gz.power[i];
    }
    for (int i = 0; i < n; i++)
    {
        gx.Sum_Of_Power += gx.power[i];
        gy.Sum_Of_Power += gy.power[i];
        gz.Sum_Of_Power += gz.power[i];
    }
    if (gx.Sum_Of_Power == 0 && gy.Sum_Of_Power == 0 && gz.Sum_Of_Power == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }



}
