#include "PhoneBook.hpp"
#include "utils.hpp"

int main() {
    PhoneBook pbook;

    while (true) {
        std::string prompt = promptUser();

        if (prompt == "EXIT")
            break;
        else
            handlePrompt(prompt, pbook);
    }
    exitProgram();

    return 0;
}
