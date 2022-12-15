#include <iostream>
#include <iomanip>

int main() {

    /**
     * OUTPUT FORMATTING
     */

    //Sends the message directly to the terminal not cout.
    std::cout << "Hello World" << std::endl << std::flush << std::endl;

    // Adds more spaces between 2 outputs.
    std::cout << "Hello" << std::setw(10) << "world" << std::endl << std::endl;

    //Justification - Right, Left, Internal
    std::cout << std::right;// Data is right aligned - Default Set : No left margin
    std::cout << "Right Justified --> " << "Hello" << std::setw(10) << "world" << std::endl;

    std::cout << std::left;// Data is left aligned : No right margin
    std::cout << "Left Justified --> " << "Hello" << std::setw(10) << "world" << std::endl;

    std::cout << std::internal; // all the signs are left sided and rest is right
    std::cout << "Internal Justified --> " << "Hello" << std::setw(10) << "world" << std::endl << std::endl;

    //Fills the spaces with char specified but only in a single line.
    std::cout << std::setfill('-');
    std::cout << "Setting Fill : " << "Hello" << std::setw(10) << "World" << std::endl << std::endl;

    //Shows us the '+' in front of +ve numbers
    std::cout << std::showpos;
    std::cout << "Showing Positive signs : " << 18 << std::endl << std::endl;
    std::cout << std::noshowpos;

    //To shows the int types in hex/oct/dec format. Doesn't work with floating point numbers
    int posInt {15};
    int negInt {-15};
    std::cout << "Hex Format +ve Number : " << std::hex << posInt << std::endl;
    std::cout << "Hex Format -ve Number : " << std::hex << negInt << std::endl;
    std::cout << "Oct Format -ve Number : " << std::oct << negInt << std::endl << std::endl;

    //Fixed Format - Output the number in sig fig format, no si-fi, no hex or anything.
    std::cout << std::fixed;
    std::cout << "Number in Fixed Format : " << 19.988766 << std::endl;
    std::cout << "Number in Fixed Format : " << 1.34e3 << std::endl << std::endl;

    //Scientific Format
    std::cout << std::scientific;
    std::cout << "Number in Scientific Format : " << 19.988766 << std::endl;
    std::cout << "Number in Scientific Format : " << 1.34e3 << std::endl << std::endl;

    //In Normal/Dec form
    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << "Number in normal mode : " << 19.988766 << std::endl;
    std::cout << "Number in normal mode : " << 1.34e3 << std::endl << std::endl;

    //Set Precision - If the precisions is bigger than variable can handle it will print garbage
    //If the precision is set at 20 at the variable type is double, first 15 digits will be fine after that...
    double var2 {19.79283434};
    std::cout << std::setprecision(5);
    std::cout << "Precision Set : " << var2 << std::endl << std::endl;

    //ShowPoint - Shows the trailing 0's 12 ---> 12.000 OR 12.3 ----> 12.30000
    //Doesn't Work with int's
    std::cout << std::showpoint;
    std::cout << "Showing Points : " << 12.0 << std::endl << std::endl;
    std::cout << std::noshowpoint;
    return 0;
}
