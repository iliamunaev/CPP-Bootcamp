#include "PhoneBook.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook() : totalContacts(0), oldestContact(0) {}

void PhoneBook::addContact(void)
{
  if (totalContacts < MAX_NUM_CONTACTS)  {
    contacts[totalContacts++].setContact();
  } else {
    std::cout << "PhoneBook is fuul. Replacing the oldest contact.\n";
    contacts[oldestContact].setContact();
    oldestContact = (oldestContact + 1) % MAX_NUM_CONTACTS;
  }
}

void PhoneBook::searchContact(void) {
  std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
  for (int i = 0; i < totalContacts; ++i) {
    contacts[i].displaySummary(i);
  }

  std::cout << "\nEnter index to view details: ";
  std::string input;
  std::getline(std::cin, input);

  if (input.empty() || !isNumber(input)) {
      std::cout << "Invalid index. Only numbers are acceptable.\n";
      return;
  }

  int index = std::atoi(input.c_str());
  if (index < 0 || index >= totalContacts || contacts[index].isEmpty()) {
        std::cout << "No contact found.\n";
        return;
    } else {
      contacts[index].displayDetails();
    }
}
