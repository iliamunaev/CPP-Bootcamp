/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ilia Munaev <ilyamunaev@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:17 by imunaev-          #+#    #+#             */
/*   Updated: 2025/05/14 11:08:16 by Ilia Munaev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <iostream>

/**
 * @file Contact.hpp
 * @brief Defines the Contact class for storing individual contact information.
 *
 * The Contact class provides methods to set and display contact details.
 * Each contact contains a first name, last name, nickname, phone number,
 * and a darkest secret.
 */

 /**
 * @class Contact
 * @brief A class representing a single contact in the PhoneBook.
 *
 * The Contact class stores information about an individual contact.
 * It provides methods to set the contact details, display a summary,
 * and show detailed information.
 */
class Contact {
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _darkestSecret;

    public:
        void setContact();
        void displaySummary(int index) const;
        void displayDetails() const;
        bool isEmpty() const;
};

#endif
