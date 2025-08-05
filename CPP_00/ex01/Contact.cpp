#include "Contact.hpp"
#include "utils.hpp"

void Contact::setContact(void) {
  _firstName = getUserData("First Name");
  _lastName = getUserData("Last Name");
  _nickname = getUserData("Nickname");
  _phoneNumber = getUserData("Phone Number");
  _darkestSecret = getUserData("Darkest Secret");
}

static std::string truncate(const std::string &str) {
  if (str.length() > 10)
    return str.substr(0, 9) + ".";
  return str;
}

void Contact::displaySummary(int index) const {
  std::cout << "|" << std::setw(10) << index
        << "|" << std::setw(10) << truncate(_firstName)
        << "|" << std::setw(10) << truncate(_lastName)
        << "|" << std::setw(10) << truncate(_nickname)
        << "|\n";
}

void Contact::displayDetails(void) const {
  std::cout << "First Name....: " << _firstName << "\n"
        << "Last Name.....: " << _lastName << "\n"
        << "Nickname......: " << _nickname << "\n"
        << "Phone Number..: " << _phoneNumber << "\n"
        << "Darkest Secret: " << _darkestSecret << "\n";
}

bool Contact::isEmpty() const {
  return _firstName.empty();
}
