
#include <iostream>

int main()
{

    auto var1 = 0;  auto var2 = 0;  auto var3 = 0;  auto var4 = 0;

    std::cout << "blease entre var1\n";
    std::cin >> var1;
    std::cout << "blease entre var2\n";
    std::cin >> var2;

    std::cout << "variable1 it is before " << var1 << "\n";
    std::cout << "variable2 it is before " << var2 << "\n";
    
    var3 = var2;
    var2 = var1;
    var1 = var3;
    
    std::cout << "variable1 it is after " << var1 << "\n";
    std::cout << "variable2 it is after " << var2 << "\n";







}
