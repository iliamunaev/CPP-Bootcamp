// handlePrompt.cpp
#include "Contact.hpp"
#include "utils.hpp"

std::string handleDataFromUser(
    const std::string &data,
    std::string request,
    std::string command) {

    std::istringstream stream(data);

    if (command == SEARCH) {
        std::string index;
        stream >> index;
        return index;
    }
    else if (command == ADD) {
        std::string firstName, lastName, nickname, phoneNumber, darkSecret;

        stream >> firstName >> lastName >> nickname >> phoneNumber >> darkSecret;

        if (request == FIRST_NAME)
            return firstName;
        else if (request == LAST_NAME)
            return lastName;
        else if (request == NICKNAME)
            return nickname;
        else if (request == PHONE_NUMBER)
            return phoneNumber;
        else if (request == DARK_SECRET)
            return darkSecret;
        else
            return "";
    }
    else {
        return "";
    }
}

std::string requestDataFromUser(std::string command)
{
    std::string data;

    if (command == SEARCH) {
        std::cout << "Enter index from '0' to '7': ";
        std::cout << "> ";    }
    else {
        std::cout << "Enter 'First name', 'Last name', 'nickname', 'phone number', 'darkest secret': " << std::endl;
        std::cout << "> ";
    }
    std::getline(std::cin, data);

    return data;
}

void addNewContact(PhoneBook& pbook) {
    std::string data = requestDataFromUser(ADD);

    std::string firstName = handleDataFromUser(data, FIRST_NAME, ADD);
    std::string lastName = handleDataFromUser(data, LAST_NAME, ADD);
    std::string nickname = handleDataFromUser(data, NICKNAME, ADD);
    std::string phoneNumber = handleDataFromUser(data, PHONE_NUMBER, ADD);
    std::string darkSecret = handleDataFromUser(data, DARK_SECRET, ADD);

    Contact newContact;
    newContact.setFirstName(firstName);
    newContact.setLastName(lastName);
    newContact.setNickname(nickname);
    newContact.setPhoneNumber(phoneNumber);
    newContact.setDarkSecret(darkSecret);

    pbook.addContact(newContact);
}

void displayContact(PhoneBook& pbook) {
    std::string data = requestDataFromUser(SEARCH);

    std::string indexStr = handleDataFromUser(data, INDEX, SEARCH);
    unsigned short index = static_cast<unsigned short>(std::atoi(indexStr.c_str()));

    pbook.displayRequestedContact(index);
}

void handlePrompt(std::string prompt, PhoneBook& pbook) {
    if (prompt == ADD) {
        addNewContact(pbook);
    }
    else if (prompt == SEARCH) {
        displayContact(pbook);
    }
    else {
       displayError();
    }
}
