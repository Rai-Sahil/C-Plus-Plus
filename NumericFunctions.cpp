#include <iostream>
#include <limits>

/**
 * Using this library we can do a lot more things
 * like find if the number is +ve/-ve or how many digits it has? and many more.
 * For More see https://en.cppreference.com/w/cpp/types/numeric_limits
 */

int main() {

    //MIN AND MAX ONLY
    std::cout << std::showpos;
    std::cout << "Range For Normal Integer is : " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl << std::endl;
    std::cout << "Range For Unsigned Integer is : " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl << std::endl;
    std::cout << "Range For Signed Integer is : " << std::numeric_limits<signed int>::min() << " to " << std::numeric_limits<signed int>::max() << std::endl << std::endl;
    std::cout << "Range For Long Integer is : " << std::numeric_limits<long int>::min() << " to " << std::numeric_limits<long int>::max() << std::endl << std::endl;
    std::cout << "Range For Short Integer is : " << std::numeric_limits<short int>::min() << " to " << std::numeric_limits<short int>::max() << std::endl << std::endl;
    std::cout << "Range For Float is : " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl << std::endl;
    std::cout << "Range For Double is : " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl << std::endl;

    //LOWEST
    std::cout << "Lowest Value For A Double Is :  : " << std::numeric_limits<double>::lowest() << std::endl << std::endl;
    std::cout << "Lowest Value For A Float Is :  : " << std::numeric_limits<float>::lowest() << std::endl << std::endl;
    std::cout << "Lowest Value For A Integer Is :  : " << std::numeric_limits<int>::lowest() << " Same as Minimum" << std::endl << std::endl;

    //SOME OTHER EXAMPLES
    std::cout << "Range For Integer is : " << std::numeric_limits<int>::digits << std::endl << std::endl;


    return 0;
}
