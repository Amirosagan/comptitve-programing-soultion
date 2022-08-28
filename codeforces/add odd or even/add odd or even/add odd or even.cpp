
#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::cout << "Hello user!\n";
    int nam1{ 0 }, nam2{ 0 }, nam3{ 0 };
    int sum5{ 0 };
    int sum{ 0 };

    cout << "plese entre your loop\n";

        cin >> nam3;

    while ( nam2 < nam3 )
    {
        nam2 += 1;

        cout << "plese entre your number";

            cin >> nam1;

            int chose = nam1 % 2;

        if (chose==0)
        {
             sum = sum + nam1;
        }
        else 
        {
             sum5 = sum5 + nam1;
        }

    }
    cout << "your sum odd number = ";
    cout << sum << "\n";
    cout << "your sum even number = ";
    cout << sum5;




}
