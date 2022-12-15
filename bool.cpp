#include <iostream>
#include <iomanip>

int main() {
    /**
     * Bool size is 8-bits
     */
    bool redLight{true};
    bool greenLight{false};

    /**
     * If we just print the bool straight away from the variables
     * it will only print 0 or 1 NOT true or false. Hence that's
     * why we need to define stdbool::alpha
     */
    std::cout << "Red Light : " << redLight << std::endl;
    std::cout << "Green Light : " << greenLight << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Red Light : " << redLight << std::endl;
    std::cout << "Green Light : " << greenLight << std::endl;
    return 0;
}
