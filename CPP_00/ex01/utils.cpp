// utils.cpp
#include "utils.hpp"

std::string promptUser() {
    std::string input;
    std::cout << "Enter command: ";
    std::getline(std::cin, input);

    std::cout << "You entered: " << input << std::endl;
    return input;
}

void exitProgram() {
    std::cout << "Exiting program..." << std::endl;
}

void displayError() {
    std::cout << "Usage: type <ADD> for save a new contact, ";
    std::cout << "<SEARCH> display a specific contact ";
    std::cout << "or <EXIT> to quit the program" << std::endl;
}
