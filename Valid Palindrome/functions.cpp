#include "Header.h"
#include <iostream>
#include <string>

std::string getString()
{
    std::string userInput{};
    do
    {
        if (std::cin.fail())
        {
            std::cout << "ERROR: INVALID INPUT\n\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max());
        }
        std::cout << "Input: ";
        std::getline(std::cin >> std::ws, userInput);
    } while (std::cin.fail());
        
    return userInput;
}

void convertToLowercase(std::string &originalText)
{
    int lengthOfText_original = static_cast<int>(originalText.length());
    for (int i = 0; i < lengthOfText_original; i++)
    {
        if (isalnum(originalText[i]))
        {
            if (isalpha(originalText[i]))
            {
                originalText[i] = std::tolower(originalText[i]);
            }
        }
    }
}

std::string getReversedString(std::string &formattedText)
{
    int numberOfCharacters_formatted = static_cast<int>(formattedText.length());
    std::string reversedText = "";
    for (int j = numberOfCharacters_formatted - 1; j >= 0; j--)
    {
        reversedText += formattedText[j];
    }
    
    return reversedText;
}

bool checkIfPalindrome(std::string &formattedText, std::string &reversedText)
{
    if (formattedText == reversedText)
    {
        return true;
    }
    
    return false;
}

void printAnswer(bool trueOrFalse)
{
    if (trueOrFalse == true)
    {
        std::cout << "PALINDROME!\n";
    }
    else
    {
        std::cout << "NOT A PALINDROME.\n";
    }
}
