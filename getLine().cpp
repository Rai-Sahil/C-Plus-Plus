#include <iostream>

int main() {
    //Another way of declaring variable
    int age;
    //We need std to get the string variable
    std::string name;

    std::cout << "Enter your name and age followed by space" << std::endl;
    std::cin >> name >> age;

    std::cout << "You name is: " << name << " And age is: " << age << std::endl;

    /**
     * TODO The problem with cin is that if you have a space in yur name,
     * TODO cin won't pick that up, hence for you have to use std::getline(std::cin, variable_name)
     */

    std::cout << "Enter Your name and age : " << std::endl;
    std::getline(std::cin, name);
    std::cin >> age;

    std::cout << "You name is: " << name << " And age is: " << age << std::endl;
    return 0;
}
