
#include "PhoneBook.hpp"
#include "Contact.hpp"


void PhoneBook::addContact(

    ) {

        // str prompt = getPrompt();
        // const std::string firstName, 
        // const std::string lastName,
        // const std::string nickName,
        // const std::string phoneNumber,
        // const std::string darkSecret

            // do, no empty fields
}

void PhoneBook::displayContacts(int index) {

    // if (!isValidIndex(index))
   // std::cout << "Error: msg";

    
    // else
        // displayAll();
}

Contact::Contact(
    int index,
    const std::string& firstName,
    const std::string& lastName,
    const std::string& nickName,
    const std::string& phoneNumber,
    const std::string& darkSecret
 ) :
    firstName(firstName),
    lastName(lastName),
    nickName(nickName),
    phoneNumber(phoneNumber),
    darkSecret(darkSecret)
{}

void displayUsage() {
    
    std::cout << "msg";
}


int main() {

    PhoneBook pbook;

    while (true) {

        // str prompt = getPrompt();
    
        if(prompt == ADD) {

            pbook.addContact();
        }
        else if (SEARCH) {

            // displayContacs();
        }
        else if (EXIT) {
            // continue
        }
        else {
            // displayUsage();
        }
    }
    pbook.freeBook();
    return (0);
}
