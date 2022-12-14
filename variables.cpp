#include <iostream>

int main() {
    //Another way of declaring variable
    int value {3};
    int value2 {7};

    std::cout << "First Number: " << value << std::endl;
    std::cout << "Second Number: " << value2 << std::endl;
    std::cout << "Sum: " << value + value2 << std::endl;
    return 0;
}
