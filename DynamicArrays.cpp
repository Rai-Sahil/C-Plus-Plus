#include <iostream>
#include <cmath>

/**
 *Dynamic Arrays
 * Using std::nothrow in dynamic arrays
 */

int main() {
    //Different ways of making an dynamic array.
    int *arr {new(std::nothrow) int[10]};
    arr = new(std::nothrow) int(10);
    arr = new(std::nothrow) int(20);
    arr[1] = *new(std::nothrow) int(20);
    arr[2] = 9;

    if(arr) std::cout << "Array value is : " << arr[2] << std::endl;

    //Giving values to array inside the intialization
    double *arr2 {new(std::nothrow) double[5] {1, 2, 3, 4, 5}};

    //To delete the dynamic array we use []
    delete[] arr;
    arr = nullptr;

    delete[] arr2;
    arr2 = nullptr;

}
