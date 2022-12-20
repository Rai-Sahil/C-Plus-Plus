#include <iostream>
#include <cmath>
#include <cstring>


int main() {
    //Declaring String
    std::string message {"Hello World"};

    //String that stores multiple copies of one char
    std::string message2 {4, 'H'};

    //String storing part of a string
    std::string message3 {"Hello World", 5};

    //Contains specified part of string
    std::string message4 {"Hello World", 6, 5};
}
