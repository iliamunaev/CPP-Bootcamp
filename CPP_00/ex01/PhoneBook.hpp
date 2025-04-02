// PhoneBook.h
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include <iostream>

class PhoneBook {

    private:    
        unsigned short  num_contacts;
        
    public:
        void addContact();
        void displayContacts(int);       
        int freePhoneBook();    
        bool isValidIndex(int);
        int getNewIndex();      
        
        
        
    } pbook;
    
    


#endif /* PHONEBOOK_H */