#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include "Contact.hpp"

#define ADD "ADD"
#define EXIT "EXIT"
#define SEARCH "SEARCH"

#define FIRST_NAME "firstName"
#define LAST_NAME "lastName"
#define NICKNAME "nickname"
#define PHONE_NUMBER "phoneNumber"
#define DARK_SECRET "darkSecret"
#define INDEX "index"
#define MAX_CONTACTS 8

class PhoneBook {

    private:
        Contact _contacts[MAX_CONTACTS];
        unsigned short _numberOfContacts;
        unsigned short _currentIndex;

    public:
        PhoneBook();

        void addContact(Contact& contact);
        unsigned short getNewIndex() const;
        void incrementNumberOfContacts();

        void displayRequestedContact(unsigned short index);
        std::string displayFirstName();
};

#endif /* PHONEBOOK_HPP */
