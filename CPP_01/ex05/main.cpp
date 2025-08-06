#include "Harl.hpp"

// ------------------ VALIDATION ------------------ //
bool isLevelValid(const std::string &level) {
  const static std::string s_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for (int i = 0; i < NUM_LEVELS; i++) {
    if (level == s_levels[i])
      return true;
  }

  return false;
}

bool isNumArgumentsValid(const int numArguments) {
  return numArguments == 2;
}

bool isInputValid(int argc, char **argv) {

  const int numArguments = argc;
  if (!isNumArgumentsValid(numArguments)) {
    std::cerr << "Validation error: Usage ./Harl <level>" << std::endl;
    return false;
  }

  const std::string level = argv[1];
  if (!isLevelValid(level)) {
    std::cerr << "Validation error: Choose level `DEBUG`, `INFO`, `WARNING` or `ERROR`" << std::endl;
    return false;
  }

  return true;
}

// ------------------ RUN ------------------ //
int main(int argc, char **argv) {

  if (!isInputValid(argc, argv)) {
    return 1;
  }

  Harl h = Harl();
  const std::string level = argv[1];
  h.complain(level);

  return 0;
}
