/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:51:11 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/07 11:52:20 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"

std::string promptUser();
void endProgram();
void invalidInpit();
std::string getUserData(const std::string &field);
bool isNumber(const std::string &str);

#endif /* UTILS_HPP */
