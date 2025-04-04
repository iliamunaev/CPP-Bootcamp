/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlePrompt.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:29 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/04 15:50:30 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "utils.hpp"

int stringToInt(const std::string& str)
{
    std::stringstream ss(str);
    int result = 0;

    ss >> result;
    if (ss.fail() || !ss.eof()) {
        return -1;
    }

    return result;
}

void requestDataFromUser(const std::string &command, Contact &newContact)
{
    std::string data;

    if (command == SEARCH) {
        std::cout << "Enter an index from '0' to '7': ";
        std::cout << "> ";
        std::getline(std::cin, data);

        int index = stringToInt(data);
        if (index < 0 || index > 7) {
            std::cerr << "Error: Invalid index. Please enter a valid index (0-7)." << std::endl;
            return;
        }
        newContact.setIndex(static_cast<unsigned short>(index));
    }
    else if (command == ADD) {
        const std::string prompts[5] = {
            "First name", "Last name", "Nickname", "Phone number", "Darkest secret"
        };

        for (int i = 0; i < 5; i++) {
            std::cout << "> " << prompts[i] << ": ";
            std::getline(std::cin, data);

            if (data.empty()) {
                // std::cerr << "Error: Field cannot be empty. Please enter valid data." << std::endl;
                // i++;
                continue;
            }

            newContact.setData(data, i);
        }
    }
}

void addNewContact(PhoneBook& pbook) {
    Contact newContact;

    std::cout << "Provide First name, Second name, nickname, Phone number, and Darck Secret" << std::endl;

    requestDataFromUser(ADD, newContact);
    pbook.addContact(newContact);
}

void displayContact(PhoneBook& pbook) {
    std::string data;
    std::cout << "Enter an index from '0' to '7': ";
    std::getline(std::cin, data);

    int index = stringToInt(data);
    if (index < 0 || index > 7) {
        std::cerr << "Error: Invalid index. Please enter a valid index (0-7)." << std::endl;
        return;
    }

    pbook.displayRequestedContact(static_cast<unsigned short>(index));
}

void handlePrompt(std::string prompt, PhoneBook& pbook) {
    if (prompt == ADD) {
        addNewContact(pbook);
    }
    else if (prompt == SEARCH) {
        displayContact(pbook);
    }
    else {
       std::cerr << "Error: I Invalid command. Use ADD, SEARCH, or EXIT." << std::endl;
    }
}