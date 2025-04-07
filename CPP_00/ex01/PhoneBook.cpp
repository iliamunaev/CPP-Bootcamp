/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:54 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 13:33:37 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file PhoneBook.cpp
 * @brief Implementation of the PhoneBook class.
 *
 * This file implements the methods of the PhoneBook class which is responsible for
 * managing a collection of contacts. It provides functionality for adding, searching,
 * and displaying contacts.
 */
#include "PhoneBook.hpp"
#include "utils.hpp"

/**
 * @brief Constructs a new PhoneBook object.
 *
 * Initializes the phone book with zero contacts and sets the oldest contact index to zero.
 */
PhoneBook::PhoneBook() : totalContacts(0), oldestContact(0) {}

/**
 * @brief Adds a new contact to the phonebook.
 *
 * If the phonebook is full (i.e., contains the maximum number of contacts), it replaces
 * the oldest contact with the new one. Otherwise, the new contact is simply added.
 *
 * The contact is added using the `setContact()` method of the Contact class.
 */
void PhoneBook::addContact()
{
	if (totalContacts < MAX_NUM_CONTACTS)
		contacts[totalContacts++].setContact();
	else {
		std::cout << "PhoneBook is fuul. Replacing the oldest contact.\n";
		contacts[oldestContact].setContact();
		oldestContact = (oldestContact + 1) % MAX_NUM_CONTACTS;
	}
}

/**
 * @brief Searches for and displays contact information by index.
 *
 * This method displays a table of all stored contacts with their index, first name,
 * last name, and nickname. The user is then prompted to enter an index to view
 * the full details of a specific contact.
 *
 * If the user enters an invalid index or an index outside the range of stored contacts,
 * an error message is displayed.
 *
 * @note The function uses `std::atoi()` for converting user input to an integer.
 */
void PhoneBook::searchContact() {
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	for (int i = 0; i < totalContacts; ++i)
		contacts[i].displaySummary(i);

	std::cout << "\nEnter index to view details: ";
	std::string input;
	std::getline(std::cin, input);

    if (input.empty() || !isNumber(input)) {
        std::cout << "Invalid index. Only numbers are acceptable." << std::endl;
        return;
    }

	int index = std::atoi(input.c_str());
	if (index < 0 || index >= totalContacts || contacts[index].isEmpty()) {
        std::cout << "No contact found.\n";
        return;
    }
    else
        contacts[index].displayDetails();
}
