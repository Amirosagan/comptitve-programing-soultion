

#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::cout << "Hello User\n";

    float number{ 0 };

    cout << "blese entre your grade\n";

    cin >> number;

    cout << "you are ";

    if (number >= 0)
    {
        if (number > 50)
        {
            if (number > 65)
            {
                if (number > 75)
                {
                    if (number > 85)
                    {
                        cout << "excellent";
                    }
                    else
                    {
                        cout << "very good";
                    }
                }
                else
                {
                    cout << "good";
                }
            }
            else
            {
                cout << "Acceptable";
            }
        }
        else
        {
            cout << "fallen";
        }
    }
    else 
    {
        cout << "blese entre value > 0 ";
    }


    //and &&
    //or ||



}


