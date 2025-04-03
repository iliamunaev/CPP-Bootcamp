#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <iostream>
#include "PhoneBook.hpp"

void handlePrompt(std::string prompt, PhoneBook& pbook);

std::string promptUser();
void displayError() ;
void exitProgram();

#endif /* UTILS_HPP */
