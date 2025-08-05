#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_NUM_CONTACTS 8

class PhoneBook {
  public:
    PhoneBook(void);
    void addContact(void);
    void searchContact(void);

  private:
    Contact contacts[MAX_NUM_CONTACTS];
    int		totalContacts;
    int		oldestContact;

};

#endif
