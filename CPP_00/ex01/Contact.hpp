/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:17 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 13:41:21 by imunaev-         ###   ########.fr       */
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
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        void setContact();
        void displaySummary(int index) const;
        void displayDetails() const;
        bool isEmpty() const;
};

#endif
