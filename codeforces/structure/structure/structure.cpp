
#include <iostream>
#include <cmath>
#include <string>
using namespace std;


struct firstStructue 
{
    int id;
    string name = "a";
} inu ;

int main()
{
    std::cout << "Hello World!\n";
    int id;
    string name = "a";
    cin >> id ;
    cin.ignore();
    getline(cin, name, '\n');
     inu = {id , name};
    cout << inu.id << endl << inu.name;
    


}
