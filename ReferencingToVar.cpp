#include <iostream>
#include <cmath>

/**
 *Referencing to another variable
 */

int main() {
    int num {42};

    //Reference
    //We use & because we wanna pass on the address
    int& ref {num};

    std::cout << ref << std::endl;

    ref = 23;

    //As you can see over here once we changed the ref child variable the actual parent value was also changed
    std::cout << ref << std::endl;

    //Hence both of their address are also same.
    std::cout << &ref << std::endl;
    std::cout << &num << std::endl;



}
