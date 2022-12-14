#include <iostream>

int add(const int* num1, const int* num2){
    return *num1 + *num2;
}

int main() {
    //Another way of declaring variable
    int value {3};
    int value2 {7};

    int sum = add(&value, &value2);
    std::cout << "Sum: " << sum << std::endl;

    //Printing Errors on the terminal
    std::cerr << "This is the Error Message" << std::endl;

    //Print Log messages
    std::clog << "std::clog output : This is the log message " << std::endl;

    int age;
    std::cout << "Enter your age: " << std::endl;
    std:: cin >> age;

    std::cout << "You Age is: " << age << std::endl;

    return 0;
}
