#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>
#include <vector>
#include "Contact.hpp"

#define ADD "ADD"
#define EXIT "EXIT"
#define MAX_CONTACTS 8

class PhoneBook {

    private:
        std::vector<Contact> contacts;
        unsigned short num_contacts;

    public:
        PhoneBook();
        void addContact();
        void displayContacts(int index);
        int freePhoneBook();
        bool isValidIndex(int index);
        int getNewIndex();
};

#endif /* PHONEBOOK_H */
