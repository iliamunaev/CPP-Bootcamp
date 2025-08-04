#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
  m_comments[0] = &Harl::debug;
  m_comments[1] = &Harl::info;
  m_comments[2] = &Harl::warning;
  m_comments[3] = &Harl::error;
}

// Find and execute mathod according passed level
void Harl::complain(const std::string& level) {
  const std::string levels[NUM_LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for (int i = 0; i < NUM_LEVELS; ++i) {
    if (level == levels[i]) {
      (this->*m_comments[i])();
      return;
    }
  }

  std::cout << "Nothing to say" << std::endl;
}

void Harl::debug(void) {
  std::cout << "DEBUG: System initialized correctly with default configuration. Continuing with test parameters." << std::endl;
}

void Harl::info(void) {
  std::cout << "INFO: User successfully logged in. Session token generated and stored." << std::endl;
}

void Harl::warning(void) {
  std::cout << "WARNING: Configuration file not found. Falling back to default settings." << std::endl;
}

void Harl::error(void) {
  std::cout << "ERROR: Database connection failed. Unable to retrieve user data." << std::endl;
}
