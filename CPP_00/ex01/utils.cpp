// utils.cpp
#include "utils.hpp"

std::string getPrompt() {
    std::string input;
    std::cout << "Enter command: ";
    std::getline(std::cin, input);  // Use getline to allow multi-word inputs if needed
    return input;
}
