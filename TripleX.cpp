#include <iostream>

int main()
{
    // Print welcome messages to the terminal
    std::cout << "You are an alien escaping Area 51.";
    // Add new line
    std::cout << std::endl;
    std::cout << "You need to enter the correct code to reach your ship...\n\n";

    // Declare 3 different number codes
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSem and CodeProduct to the terminal
    std::cout << "+ The code is made up of 3 numbers.";
    std::cout << "\n+ The numbers in the code add up to: " << CodeSum;
    std::cout << "\n+ The 3 numbers multiply to give: " << CodeProduct << std::endl;

    // Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if player guess is correct
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nCORRECT CODE. You've escaped. Well Done!! ";

    }
    else
    {
        std::cout << "\nINCORRECT CODE. Try Again.";
    }
    

    return 0;
}
