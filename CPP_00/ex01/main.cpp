#include "PhoneBook.hpp"
#include "utils.hpp"

int main() {
  std::signal(SIGINT, signalHandler);

  PhoneBook pBook;

  while (true) {
    std::string prompt = promptUser();

    if (prompt == "EXIT")
      break;
    else if (prompt == "ADD")
      pBook.addContact();
    else if (prompt == "SEARCH")
      pBook.searchContact();
    else
      invalidInpit();
  }
  endProgram();

  return 0;
}
