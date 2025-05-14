/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:58 by imunaev-          #+#    #+#             */
/*   Updated: 2025/05/14 13:39:53 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_NUM_CONTACTS 8

/**
 * @file PhoneBook.hpp
 * @brief Defines the PhoneBook class for managing a collection of contacts.
 *
 * This file contains the declaration of the PhoneBook class which allows the user to
 * add, search, and display contacts. The PhoneBook supports a maximum of 8 contacts.
 */

/**
 * @class PhoneBook
 * @brief A class for managing and storing contacts.
 *
 * The PhoneBook class allows adding new contacts, searching existing contacts,
 * and displaying contact details. It maintains an array of Contact objects with
 * a fixed size of MAX_NUM_CONTACTS (8).
 */
class PhoneBook {
  private:
    Contact contacts[MAX_NUM_CONTACTS];
    int		totalContacts;
    int		oldestContact;

  public:
    PhoneBook();
    void addContact();
    void searchContact();
};

#endif
