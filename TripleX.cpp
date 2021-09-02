#include <iostream>

//function
void GameIntroduction()
{
    // print welcome message to the terminal
    std::cout << std::endl;
    std::cout << "You are a secret agent breaking into a secure server room";   //print out the string
    std::cout << std::endl;                                                     //create new line
    std::cout << "You need to enter the correct codes to continue\n";  
    //Note: we can use \n escape sequence instead of std::endl to create a bew line. \n cannot be used in variables
    //std::cout << "He said: \"Hello World!\"\n";   use "\"" escape sequence to insert a string with a quote in the output
}

bool PlayGame()
{
    //a GameIntroduction() function called
    GameIntroduction();

    //To follow unreal engine 4 naming convention, variable declaration must start with a capital letter. Dont use "_" in between.
    const int CodeA = 4;    
    const int CodeB = 3;
    const int CodeC = 2;

    //initializing variables
    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // print sum and product the terminal
    std::cout << std::endl;
    std::cout << "+ There are three numbers in the code\n";
    std::cout << "+ The codes adds up to " << CodeSum << std::endl;            //display the sum and create new line
    std::cout << "+ The codes multiply to give " << CodeProduct << std::endl;            // display the product
    std::cout << std::endl;

    int PlayerGuess;
    int GuessA, GuessB, GuessC;

    std::cout << "Enter Guess A: "; 
    std::cin >> GuessA;             //"std::cin >>" is a input statement
    std::cout << "Enter Guess B: "; 
    std::cin >> GuessB;
    std::cout << "Enter Guess C: ";
    std::cin >> GuessC;
    std::cout << std::endl;

    std::cout <<"You entered: " << GuessA << GuessB << GuessC << std::endl;

    //store player guess
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    std::cout << std::endl;

    //if condition
    if (GuessSum==CodeSum && GuessProduct==CodeProduct)
    {
        std::cout << "Your guess is correct, You win!\n";
        return false;    //we return boolean response because the Playgame() function was initialize as bool. Inthis case, return true
    }
    else
    {
        std::cout << "You guess was wrong, you lose!\n";
        return true;   //this statement must return boolean output as well.
    }

    

}

//default function. The main game function must be called inside of this function
int main()
{
    //while loop
    while (true)
    {
        bool bLevelComplete = PlayGame();   //when a function was initialized as boolean, the return value must boolean as well
        std::cin.clear();   //clear any errors
        std::cin.ignore();  //Discards the buffer
    }

    return 0; 
}