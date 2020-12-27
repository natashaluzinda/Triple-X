#include <iostream>

int main()
{
    // Print welcome messages to the terminal
    std::cout << "You are an alien escaping Area 51.";
    // Add new line
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to reach your ship..";

    // Declare 3 different number codes
    const int a = 4;
    const int b = 8;
    const int c = 5;

    const int sum = a + b + c;
    const int product = a * b * c;

    // Print sum and product to terminal
    std::cout << std::endl;
    std::cout << sum << std::endl;
    std::cout << product << std::endl;

    return 0;
}
