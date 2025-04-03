//PhoneBook.hpp
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define ADD "ADD"
#define EXIT "EXIT"
#define MAX_CONTACTS 8


// class PhoneBook {

//     private:
//         std::vector<Contact> contacts;
//         unsigned short num_contacts;

//     public:
//         PhoneBook();
//         void addContact();
//         void displayContacts(int index);
//         int freePhoneBook();
//         bool isValidIndex(int index);
//         int getNewIndex();
// };


class PhoneBook {

    private:
        unsigned short _numberOfContacts;

    public:
        PhoneBook();
        Contact addNewContact();


        unsigned short getNewIndex();
        void incrementNumberOfContacts();

};


#endif /* PHONEBOOK_HPP */
