#include <iostream>
#include <iomanip>

int main() {

    auto var1 {12};
    auto var2 {12.0};
    auto var3 {12.3f};
    auto var4 {'c'};
    auto var8 {true};

    //Variable Modifiers
    auto var5 {12321l};
    auto var6 {12345ull};
    auto var7 {1234u};

    std::cout << "Variable 1 is : " << var1 << std::endl;
    std::cout << "Variable 2 is : " << var2 << std::endl;
    std::cout << "Variable 3 is : " << var3 << std::endl;
    std::cout << "Variable 4 is : " << var4 << std::endl;
    std::cout << "Variable 5 is : " << var5 << std::endl;
    std::cout << "Variable 6 is : " << var6 << std::endl;
    std::cout << "Variable 7 is : " << var7 << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Variable 8 is : " << var8 << std::endl;

    return 0;
}
