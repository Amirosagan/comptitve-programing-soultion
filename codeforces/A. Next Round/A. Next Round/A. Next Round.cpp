
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int players{ 0 };
    int mini_score{ 0 };
    int scores[1000];
    int count{ 0 };
    int count1{ 0 };

    cin >> players >> mini_score;

    for (int i = 0; i < players; i++)
    {

        cin >> scores[i];
        

    }

    for (int i = 0; i < players; i++)
    {
        if (scores[i] > mini_score)
        {
            count++;
        }
        for (int j = 0; j < players; j++)
        {
            if (scores[i] == scores[j])
            {
                count1++;
            }
        }
    }
    if (count1 == players *players && scores[0]!=0)
    {
        count = players;
    }

    cout << count;


}

