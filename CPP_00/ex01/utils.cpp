/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:51:04 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 13:38:41 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file utils.cpp
 * @brief Utility functions for handling user input, signals, and validation.
 *
 * This file contains various utility functions used across the PhoneBook project,
 * including signal handling, user input management, and data validation.
 */
#include "utils.hpp"

/**
 * @brief Signal handler for handling Ctrl+C interrupts (SIGINT).
 *
 * When the program is interrupted by pressing Ctrl+C, this function will be called.
 * It displays an exit message and terminates the program gracefully.
 *
 * @param signal The signal number (e.g., SIGINT).
 */
void signalHandler(int signal) {
    if (signal == SIGINT)
    {
        std::cout << "\nProgram interrupted. Exiting ..." << std::endl;
        std::exit(0);
    }
}

/**
 * @brief Checks if a string contains only digits.
 *
 * This function is used to validate numeric input from the user.
 *
 * @param str The string to be checked.
 * @return true If the string contains only digits.
 * @return false If the string contains any non-digit characters.
 */
bool isNumber(const std::string &str)
{
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

/**
 * @brief Handles interruption status from user input.
 *
 * If a getline operation fails (e.g., due to Ctrl+D), this function
 * will display an exit message and terminate the program gracefully.
 *
 * @param status The status returned by std::getline() (true for success, false for failure).
 */
void handleInterruption(bool status) {
    if (!status) {
        std::cout << "\nInput interrupted. Exiting..." << std::endl;
        std::exit(0);
    }
}

/**
 * @brief Prompts the user for a command and handles interruptions.
 *
 * This function prompts the user to enter a command such as ADD, SEARCH, or EXIT.
 * It handles interruption signals such as Ctrl+D by calling handleInterruption().
 *
 * @return std::string The command entered by the user.
 */
std::string promptUser() {
    std::string input;
    std::cout << "Enter command (ADD, SEARCH, EXIT): " << std::endl;
    std::cout << "> ";

    bool status = std::getline(std::cin, input);
    handleInterruption(status);

    return input;
}

/**
 * @brief Displays an error message for invalid user input.
 *
 * This function informs the user of valid commands available in the application.
 */
void invalidInpit() {
    std::cout << "Invalide input:" << std::endl;
    std::cout << "  'ADD'    : save a new contact" << std::endl;
    std::cout << "  'SEARCH' : display a specific contact" << std::endl;
    std::cout << "  'EXIT'   : quit the program" << std::endl;
}

/**
 * @brief Prompts the user to enter a specific field value.
 *
 * This function ensures that the input is not empty. If the user presses Ctrl+D,
 * it gracefully exits the program by calling handleInterruption().
 *
 * @param field The name of the field to prompt the user for (e.g., "First Name").
 * @return std::string The user's input for the specified field.
 */
std::string getUserData(const std::string &field)
{
    std::string input;

    while (true) {
        std::cout << field << ": ";
        bool status = std::getline(std::cin, input);

        handleInterruption(status);
        if (!input.empty())
            break;
        std::cout << "Field cannot be empty. Try again.\n";
    }

    return input;
}

/**
 * @brief Displays a message when the program is exiting.
 */
void endProgram() {
    std::cout << "Exiting program..." << std::endl;
}
