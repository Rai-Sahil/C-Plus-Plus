#include <iostream>

int main() {
    /**
     * Number represented in different ways
     */
    int number1 {15};
    int number2 {017};
    int number3 {0x0f};
    int number4 {0b00001111};

    std::cout << "Numbers written in binary, hex, oct, and decimal" << std::endl << std::endl;

    std::cout << "Number 1: " << number1 << std::endl;
    std::cout << "Number 2: " << number2 << std::endl;
    std::cout << "Number 3: " << number3 << std::endl;
    std::cout << "Number 4: " << number4 << std::endl;
    return 0;
}
