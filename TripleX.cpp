#include <iostream>

int main()
{
    // Print welcome messages to the terminal
    std::cout << "You are an alien escaping Area 51.";
    // Add new line
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to reach your ship..." << std::endl;

    // Declare 3 different number codes
    const int a = 4;
    const int b = 8;
    const int c = 5;

    const int sum = a + b + c;
    const int product = a * b * c;

    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "The code is made up of 3 numbers." << std::endl;
    std::cout << "The sum of the code is: " << sum << std::endl;
    std::cout << "The 3 numbers multiply to give: " << product << std::endl;

    return 0;
}
