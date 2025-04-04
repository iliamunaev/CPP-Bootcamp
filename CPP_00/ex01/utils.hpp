/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:51:11 by imunaev-          #+#    #+#             */
/*   Updated: 2025/04/04 15:51:12 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <iostream>
#include "PhoneBook.hpp"

void handlePrompt(std::string prompt, PhoneBook& pbook);

std::string promptUser();
void displayError() ;
void exitProgram();

#endif /* UTILS_HPP */
