/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:54 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/04 15:50:55 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() :
	_numberOfContacts(0),
	_currentIndex(0)
{}

void PhoneBook::incrementNumberOfContacts() {
    if (_numberOfContacts < MAX_CONTACTS)
        _numberOfContacts++;
    _currentIndex = (_currentIndex + 1) % MAX_CONTACTS;
}

unsigned short PhoneBook::getNewIndex() const {
    return _currentIndex;
}

void PhoneBook::addContact(Contact& contact) {
    contact.setIndex(getNewIndex());
    _contacts[_currentIndex] = contact;
    incrementNumberOfContacts();
}

void PhoneBook::displayRequestedContact(unsigned short index) {
    if (index >= _numberOfContacts || index >= MAX_CONTACTS) {
        std::cerr << "Error: Invalid index" << std::endl;
        return;
    }

    Contact contact = _contacts[index];
    std::cout << "Index: " << contact.getIndex() << std::endl;
    std::cout << "First Name: " << contact.getData(0) << std::endl;
    std::cout << "Last Name: " << contact.getData(1) << std::endl;
    std::cout << "Nickname: " << contact.getData(2) << std::endl;
    std::cout << "Phone Number: " << contact.getData(3) << std::endl;
    std::cout << "Darkest Secret: " << contact.getData(4) << std::endl;
}

void PhoneBook::displayAllContacts() const {
    std::cout << "Index | First Name | Last Name | Nickname" << std::endl;

    for (unsigned short i = 0; i < _numberOfContacts; i++) {
        std::cout << i << " | " << _contacts[i].getData(0) << " | " 
                  << _contacts[i].getData(1) << " | " 
                  << _contacts[i].getData(2) << std::endl;
    }
}
