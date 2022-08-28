
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number_of_freinds{ 0 };
    int number_frind[102];
    int number_frind1[102];
    int attat{ 0 }, t{ 0 };
    cin >> number_of_freinds;
    for (int i = 1; i < number_of_freinds+1; i++)
    {
        
        cin >> number_frind[i];
       
    }
    for (int i = 1; i < number_of_freinds + 1; i++)
    {
        t = number_frind[i];
        t = number_frind[t];
        number_frind1[t] = number_frind[i];
    }
    for (int i = 1; i < number_of_freinds+1; i++)
    {
        cout << number_frind1[i] << " ";
    }
    

}
