
#include <iostream>
#include <cmath>
#include <string>

using namespace std;


struct disdanse
{

    float destense2, destense1;

    int meter;
    float foot;
    float inchis;
}  ;

disdanse add_destense(disdanse v1, disdanse v2)
{
    disdanse result;
    result.meter = v1.meter + v2.meter;
    result.foot = v1.foot + v2.meter;
    result.inchis = v1.inchis + v2.inchis;
    cout << result.meter <<endl <<result.foot <<endl << result.inchis;
    return result;
}




int main()
{
    std::cout << "Hello World!\n";
    disdanse d1, d2 ,d3;
    cout << "add two meter distanse";
    cin >> d1.meter >> d2.meter;
    cout << "add two foot distanse";
    cin >> d1.foot >> d2.foot;
    cout << "add two inchis distanse";
    cin >> d1.inchis >> d2.inchis;
     add_destense(d1,d2 );

}

