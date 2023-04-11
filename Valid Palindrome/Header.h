#ifndef HEADER_H
#define HEADER_H

#include <string>

std::string getString();
void convertToLowercase(std::string &originalText);
std::string getReversedString(std::string &formattedText);
bool checkIfPalindrome(std::string &formattedText, std::string &reversedText);
void printAnswer(bool trueOrFalse);

#endif
