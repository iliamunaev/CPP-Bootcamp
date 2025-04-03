
// #include "PhoneBook.hpp"
// #include "Contact.hpp"


// void displayUsage() {

//     std::cout << "msg";
// }


// void PhoneBook::addContact(

//     ) {

//         // str prompt = getPrompt();
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

#include <iostream>
#include <string>

std::string getPrompt() {
    std::string input;
    std::cout << "Enter command: ";
    std::getline(std::cin, input);  // Use getline to allow multi-word inputs if needed
    return input;
}

int main() {
    while (true) {
        std::string prompt = getPrompt();
        std::cout << "You entered: " << prompt << std::endl;

        if (prompt == "EXIT")
            break;
    }
    return 0;
}
