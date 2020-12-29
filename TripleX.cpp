#include <iostream>
#include <ctime>

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
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

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
        std::cout << "\n***CORRECT CODE. You've made it past the security on Level " << Difficulty << "***\n";
        return true;
    }
    else
    {
        std::cout << "\n***INCORRECT CODE. Be Careful and try Again.***";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // Create new random sequence based on time of day

    int LevelDifficulty = 1;
    const int MaxLevel = 5;

    while(LevelDifficulty <= MaxLevel) // Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Disgards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    std::cout << "CONGRATULATIONS. YOU'VE REACHED YOUR SHIP!!";
    return 0;
}
