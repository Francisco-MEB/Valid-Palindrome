#include "Header.h"
#include <iostream>
#include <string>

int main()
{
    std::string userInput = getString();
    
    convertToLowercase(userInput);
    
    std::string reversedString = getReversedString(userInput);
    
    bool trueOrFalse = checkIfPalindrome(userInput, reversedString);
    
    printAnswer(trueOrFalse);
    
    return 0;
}
