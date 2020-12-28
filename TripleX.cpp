#include <iostream>

void PrintIntroduction(int Difficulty)
{
    // Print welcome messages to the terminal
    std::cout << "\nYou're an alien escaping Level " << Difficulty;
    std::cout << " of Area 51. \nYou need to enter the correct code to reach your ship...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare 3 different number codes
    const int CodeA = 4;
    const int CodeB = 8;
    const int CodeC = 5;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
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
        std::cout << "\nCORRECT CODE. You've escaped. Well Done!!\n";
        return true;
    }
    else
    {
        std::cout << "\nINCORRECT CODE. Try Again.";
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    while(true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Disgards the buffer

        if (bLevelComplete)
        {
            // Increase level difficulty
            ++LevelDifficulty;
        }
        
    }
    return 0;
}
