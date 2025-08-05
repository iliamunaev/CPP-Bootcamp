#include "utils.hpp"

void signalHandler(int signal) {
  if (signal == SIGINT)
  {
    std::cout << "\nProgram interrupted. Exiting ..." << std::endl;
    std::exit(0);
  }
}

bool isNumber(const std::string &str)
{
  for (size_t i = 0; i < str.length(); i++) {
    if (!std::isdigit(str[i]))
      return false;
  }
  return true;
}

void handleInterruption(bool status) {
  if (!status) {
    std::cout << "\nInput interrupted. Exiting..." << std::endl;
    std::exit(0);
  }
}

std::string promptUser() {
  std::string prompt;
  std::cout << "Enter command (ADD, SEARCH, EXIT): " << std::endl;
  std::cout << "> ";

  if (!std::getline(std::cin, prompt)) {
    handleInterruption(false);
  }

  return prompt;
}

void invalidInpit() {
  std::cout << "Invalide input:" << std::endl;
  std::cout << "  'ADD' : save a new contact" << std::endl;
  std::cout << "  'SEARCH' : display a specific contact" << std::endl;
  std::cout << "  'EXIT'   : quit the program" << std::endl;
}

std::string getUserData(const std::string &field)
{
  std::string input;

  while (true) {
    std::cout << field << ": ";

    if (!std::getline(std::cin, input)) {
      handleInterruption(false);
    }
    if (!input.empty())
      break;
    std::cout << "Field cannot be empty. Try again.\n";
  }

  return input;
}

void endProgram() {
  std::cout << "Exiting program..." << std::endl;
}
