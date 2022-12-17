#include <iostream>
#include <cmath>

/**
 * <cmath> this library is used to perform many math functions
 * For More see https://en.cppreference.com/w/cpp/header/cmath
 */

int main() {

    //FLOOR
    double weight {7.82};
    std::cout << "The round down weight is : " << std::floor(weight) << std::endl << std::endl;

    //CEIL - ROUND UP
    std::cout << "The round up weight is : " << std::ceil(weight) << std::endl << std::endl;

    //EXP - E ^ x
    std::cout << "The Exponential of 3 is : " << std::exp(3) << std::endl << std::endl;

    //POW
    std::cout << "3 to the power of 2 is : " << std::pow(2, 3) << std::endl << std::endl;

    //SQRT
    std::cout << "The square root of 4 is : " << std::sqrt(4) << std::endl << std::endl;

    //LOG - Default base is log is e.
    std::cout << "The default base of log is e : " << std::log(10) << std::endl;
    std::cout << "The Log of 10000 in base 10 is : " << std::log10(10000) << std::endl << std::endl;

    //ABS
    std::cout << "The absolute value of -7.7 is : " << std::abs(-7.7) << std::endl << std::endl;

    //ROUND
    std::cout << "3.642 round to : " << std::round(3.642) << std::endl;
    return 0;
}
