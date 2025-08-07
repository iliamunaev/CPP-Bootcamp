#include "Harl.hpp"

// ------------------ VALIDATION ------------------ //
bool isNumArgumentsValid(const int numArguments) {
  return numArguments == 2;
}

bool isInputValid(int argc) {

  const int numArguments = argc;
  if (!isNumArgumentsValid(numArguments)) {
    std::cerr << "Validation error: Usage ./Harl <level>" << std::endl;
    return false;
  }

  return true;
}

// ------------------ RUN ------------------ //
int main(int argc, char **argv) {

  if (!isInputValid(argc)) {
    return 1;
  }

  Harl h = Harl();
  const std::string level = argv[1];
  h.complain(level);

  return 0;
}
