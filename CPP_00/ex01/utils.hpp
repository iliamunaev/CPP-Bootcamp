/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:51:11 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 13:39:53 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include <csignal>


/**
 * @file utils.hpp
 * @brief Header file for utility functions used throughout the PhoneBook project.
 *
 * This file contains declarations for various utility functions responsible for
 * handling user input, signals, validation, and program termination.
 */

std::string promptUser();
std::string getUserData(const std::string &field);
void endProgram();
void invalidInpit();
void signalHandler(int signal);
bool isNumber(const std::string &str);

#endif /* UTILS_HPP */
