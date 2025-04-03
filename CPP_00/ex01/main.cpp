// main.cpp
#include "PhoneBook.hpp"
#include "utils.hpp"

// #include "Contact.hpp"


// void displayUsage() {

//     std::cout << "msg";
// }


// void PhoneBook::addContact(

//     ) {

//         // str command = getcommand();
//         // const std::string firstName,
//         // const std::string lastName,
//         // const std::string nickName,
//         // const std::string phoneNumber,
//         // const std::string darkSecret

//             // do, no empty fields
// }

// void PhoneBook::displayContacts(int index) {

//     // if (!isValidIndex(index))
//    // std::cout << "Error: msg";


//     // else
//         // displayAll();
// }

// Contact::Contact(
//     int index,
//     const std::string& firstName,
//     const std::string& lastName,
//     const std::string& nickName,
//     const std::string& phoneNumber,
//     const std::string& darkSecret
//  ) :
//     index(index),
//     firstName(firstName),
//     lastName(lastName),
//     nickName(nickName),
//     phoneNumber(phoneNumber),
//     darkSecret(darkSecret)
// {}


int main() {

    PhoneBook pbook;

    while (true) {
        std::string command = promptUser();

        if (command == "EXIT")
            break;

        else if (command == ADD) {
            pbook.addNewContact();
        }

        else if (command == "INDEX")
            std::cout << pbook.getNewIndex() << std::endl;
    }
    exitProgram();
    return 0;
}
