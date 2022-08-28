
#include <iostream>
#include <algorithm>

using namespace std;

void n123(int number1[1000], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (number1[i] < number1[j])
            {
                swap(number1[i], number1[j]);
            }
        }
    }
}
void n321(int number1[1000], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (number1[i] > number1[j])
            {
                swap(number1[i], number1[j]);
            }
        }
    }
}

int main()
{
    int n, i1{0}, i2{ 0 };
    int a[1000];
    int a1[1000];
    float all{0};
    cin >> n;
    for (int  i = 0; i < n; i++)
    {
        cin >> a[i];
        a1[i] = a[i];
        all = all + a[i];
    }
    all = all / 2;
    n123(a, n);
    n321(a1, n);

    for (int i = 1; i < n; i++)
    {
        if (a[0]<=all)
        {
            a[0] = a[0] + a[i];
             
        }
        else
        {
            
            break;
        }
        i1 ++;
    }
    i1++;
    for (int i = 1; i < n; i++)
    {
        if (a1[0] <= all)
        {
            a1[0] = a1[0] + a1[i] ;
           
        }
        else
        { 
            
            break;
        }
        i2 ++;
    }
    i2++;
    if (i1 <= i2)
    {
        cout << i1;
    }
    else
    {
        cout << i2;
    }


}

