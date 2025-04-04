//PhoneBook.cpp
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
        std::cout << "Invalid index" << std::endl;
        return;
    }

    Contact contact = _contacts[index];
    std::cout << "Index: " << contact.getIndex() << std::endl;
    std::cout << "First Name: " << contact.getFirstName() << std::endl;
    std::cout << "Last Name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;

}
