#include <iostream>
#include <cmath>
#include <cstring>

/**
 *Referencing to another variable
 */

int main() {
    char* string {new char[] {"Hello"}};

    //Count the length of the string.
    std::cout << std::strlen(string) << std::endl;
    std::cout << sizeof(string) << std::endl;

    //To compare to strings.
    std::cout << std::strcmp("Hello", "Aello") << std::endl;

    //Find the first occurence
    char var1[] {"Hello World"};
    char check {'e'};
    char *result = std::strchr(var1, check);
    std::cout << "First Occurence : " << result + 1 << std::endl;

    //Concatenation
    char s1[] {"Hello"};
    char s2[] {" World"};

    std::strcat(s1, s2);
    std::cout << "Concat : " << s1 << std::endl;

    //Concatenating only specific number of characters from the second string
    char e1[] {"hello"};
    char e2[] {" world"};
    std::strncat(e1, e2, 3);
    std::cout << "Concatenating specif number of characters : " << e1 << std::endl;

    //Copying string to another variable
    char j1[] {"Hello"};
    char j2[] {" world"};
    std::strcpy(j1, j2);
    std::cout << "Copied String is : " << j1 << std::endl;

    //Copying only number of characters from other string
    char i[] {"Hello"};
    char i2[] {" World"};
    std::strncpy(i, i2, 3);
    std::cout << "Copying only number of characters from string and replacing from other  : " << i << std::endl;
}
