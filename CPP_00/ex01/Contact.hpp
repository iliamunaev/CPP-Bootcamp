#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>

class Contact {
  public:
    void setContact(void);
    void displaySummary(int index) const;
    void displayDetails(void) const;
    bool isEmpty(void) const;

  private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
};

#endif // CONTACT_HPP
