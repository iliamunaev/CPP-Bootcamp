/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:50:40 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 13:30:33 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file main.cpp
 * @brief Entry point for the PhoneBook application.
 *
 * This file contains the main function for the PhoneBook application.
 * It handles user input and interacts with the PhoneBook class to manage contacts.
 */
#include "PhoneBook.hpp"
#include "utils.hpp"

/**
 * @brief Main function of the PhoneBook application.
 *
 * This function initializes the PhoneBook and enters a command loop to handle
 * user commands. Available commands are:
 *  - ADD: Adds a new contact to the PhoneBook.
 *  - SEARCH: Searches for contacts and displays their details.
 *  - EXIT: Terminates the application.
 *
 * The program also handles interrupt signals (Ctrl+C).
 *
 * @return int Returns 0 upon successful completion.
 */
int main() {
    std::signal(SIGINT, signalHandler);

    PhoneBook pBook;

    while (true) {
        std::string prompt = promptUser();

        if (prompt == "EXIT")
            break;
        else if (prompt == "ADD")
            pBook.addContact();
        else if (prompt == "SEARCH")
            pBook.searchContact();
        else
            invalidInpit();
    }
    endProgram();

    return 0;
}
