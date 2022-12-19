#include <iostream>
#include <cmath>

/**
 * Failure of new operators.
 * 2 Ways we can solve the problem.
 */

int main() {
    for(size_t i {}; i < 100000000000; i++){
        try{
            int* lots {new int[10000000]};
        } catch (std::exception& ex){
            std::cout << "Caught an exception : " << ex.what() << std::endl;
        }
    }

    for(size_t i {}; i < 10000000000; i++){
        int *lots {new(std::nothrow) int[1000000]};

        if(lots == nullptr){
            std::cout << "ooooffff" << std::endl;
        } else {
            std::cout << "Well well well" << std::endl;
        }
    }

}
