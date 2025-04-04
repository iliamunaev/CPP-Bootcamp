/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:58 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/04 15:50:59 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <sstream>
#include <iostream>
#include <string>

#define ADD             "ADD"
#define SEARCH          "SEARCH"
#define INDEX           "INDEX"
#define FIRST_NAME      "FIRST_NAME"
#define LAST_NAME       "LAST_NAME"
#define NICKNAME        "NICKNAME"
#define PHONE_NUMBER    "PHONE_NUMBER"
#define DARK_SECRET     "DARK_SECRET"
#define MAX_CONTACTS    8

class PhoneBook {
    private:
        Contact _contacts[MAX_CONTACTS];
        unsigned short _numberOfContacts;
        unsigned short _currentIndex;

    public:
        PhoneBook();

        void incrementNumberOfContacts();
        unsigned short getNewIndex() const;

        void addContact(Contact& contact);
        void displayRequestedContact(unsigned short index);
        void displayAllContacts() const;
};

#endif /* PHONEBOOK_HPP */
