#include <iostream>

int main()
{
    // Print welcome messages to the terminal
    std::cout << "You are an alien escaping Area 51.";
    // Add new line
    std::cout << std::endl;
    std::cout << "You need to enter the correct code to reach your ship..." << std::endl;

    // Declare 3 different number codes
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "+ The code is made up of 3 numbers." << std::endl;
    std::cout << "+ The numbers in the code add up to: " << CodeSum << std::endl;
    std::cout << "+ The 3 numbers multiply to give: " << CodeProduct << std::endl;

    return 0;
}
