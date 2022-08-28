
#include <iostream>


using namespace std;

int main()
{
    int x, y, m;
    cin >> x >> y >> m;
    int tru1e =0;

    tru1e = (m - x)/y;

    if (tru1e <= 0)
    {
        cout << "-1";
    }
    else
    {
        cout << tru1e;
    }
}

