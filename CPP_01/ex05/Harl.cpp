#include "Harl.hpp"

Harl::Harl() {
    _comments[0] = &Harl::debug;
    _comments[1] = &Harl::info;
    _comments[2] = &Harl::warning;
    _comments[3] = &Harl::error;
}

Harl::~Harl() {};

void Harl::complain(const std::string& level) {
    const std::string levels[COMMENTS_COUNT] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < COMMENTS_COUNT; ++i) {
        if (level == levels[i]) {
            (this->*_comments[i])();
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
