/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:54 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 12:07:38 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"
#include <iostream>
#include <cstdlib>

PhoneBook::PhoneBook() : totalContacts(0), oldestContact(0) {}

void PhoneBook::addContact()
{
	if (totalContacts < 8)
		contacts[totalContacts++].setContact();
	else {
		std::cout << "Replacing the oldest contact.\n";
		contacts[oldestContact].setContact();
		oldestContact = (oldestContact + 1) % 8;
	}
}

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
