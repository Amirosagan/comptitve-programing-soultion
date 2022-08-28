
#include <iostream>
#include <cmath>

using namespace std;

struct tram
{
    int loop{ 0 };
    int op{ 0 };
    int num[1001];
   
};

int main()
{
    tram q1;
    tram q2;
    tram q3;
    cin >> q1.loop;
    
    for (int i = 0; i < q1.loop; i++)
    {
        cin >> q1.op;
        q3.op = q3.op - q1.op;
        cin >> q2.op;
        q3.op = q3.op+ q2.op;

        q1.num[i] = q3.op;
    }

    for (int i = 1; i < q1.loop; i++)
    {
        if (q1.num[0] < q1.num[i])
        {
            q1.num[0] = q1.num[i];
        }
    }

    cout << q1.num[0];


}