#include <iostream>
#include  <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int m;
    cin >> n;
    int qp;
    vector<int> x;
    vector<int> y;
    bool end=false;
    cin >> qp;
    for (int i = 0; i < qp; i++)
    {
        
        cin >>  m;
        x.push_back(m);
    }
    cin >> qp;
    for (int i = 0; i < qp; i++)
    {
        cin >> m;
        y.push_back(m);
    }

    for (int i = 1; i <= n; i++)
    {
        if (find(x.begin(), x.end(), i) != x.end() || find(y.begin(), y.end(), i) != y.end())
        {
            end = true;
        }
        else
        {
            end = false;
            break;
        }

    }

    if (end)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

}
