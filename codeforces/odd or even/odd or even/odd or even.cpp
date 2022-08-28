
#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::cout << "Hello User\n" << "welcome to odd or even or negative programe\n";

    cout << "please entre number\n";

    int number1{ 0 }, number2{ 0 };

    cin >> number1 ;


    if (number1 > 0)
    {

        number2 = number1 % 2;

        if (number2 == 0)
        {
            cout << "the number is odd";
        }
        else
        {
            cout << "the nummber is even";
        }
    }
    else
    {
        if (number1 == 0)
        {
            cout << "entre number > or < 0";
        }
        else
        {
            number2 = number1 % 2;
            if (number2 == 0)
            {
                cout << "the number is odd" << " and negative";
            }
            else
            {
                cout << "the nummber is even" << " and negative";
            }
        }
    }
}
